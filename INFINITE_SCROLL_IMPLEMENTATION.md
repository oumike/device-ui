# Infinite Scroll Implementation for Nodes Panel

## Overview

This document describes the infinite scroll implementation for the nodes panel in TFTView_320x240. The feature enables progressive loading of nodes (up to 250) as users scroll, instead of loading all nodes upfront, improving performance and user experience.

## Implementation Details

### 1. **State Variables** (Header: TFTView_320x240.h)

Added two new private member variables to track infinite scroll state:

- `uint16_t nodesScrollDisplayLimit` - Current display limit for nodes (initial: 50)
- `bool nodesScrollLoadingMore` - Flag to prevent concurrent scroll load requests

### 2. **Constructor Initialization** (TFTView_320x240.cpp, line 138)

Initialized new state variables in the constructor's member initialization list:

```cpp
: ... nodesScrollDisplayLimit(50), nodesScrollLoadingMore(false), ...
```

### 3. **Scroll Event Handler** (TFTView_320x240.cpp, line 2381)

Added static method `ui_event_nodesPanelScroll()` that:

- Listens for `LV_EVENT_SCROLL` events on the nodes panel
- Calculates scroll position as percentage of scrollable content
- Triggers node loading when scroll reaches 75% threshold
- Increments display limit by 10 nodes per trigger (batch size)
- Prevents concurrent loads with `nodesScrollLoadingMore` flag
- Caps maximum at `MAX_NUM_NODES_VIEW` (250 nodes)

**Key Algorithm:**

```
scroll_ratio = current_scroll_y / scrollable_height

if scroll_ratio >= 0.75 && !isLoadingMore:
    displayLimit += 10
    call updateNodesFiltered(false)
    call updateNodesStatus()
```

### 4. **Event Handler Registration** (TFTView_320x240.cpp, line 724)

Added registration in `ui_events_init()`:

```cpp
lv_obj_add_event_cb(objects.nodes_panel, this->ui_event_nodesPanelScroll, LV_EVENT_SCROLL, NULL);
```

### 5. **Node Filtering Update** (TFTView_320x240.cpp, line 7100)

Modified `updateNodesFiltered()` to respect the display limit:

- Added `processedCount` static variable to track processed nodes in current session
- Added `processLimit = nodesScrollDisplayLimit` to cap processing
- Processes nodes in batches of 10 but stops at the display limit
- Sets `processingFilter = false` when limit is reached

## Behavior Flow

1. **Initial Load**: Displays first 50 nodes when nodes panel opens
2. **User Scrolls**: As user scrolls down the nodes list
3. **Threshold Check**: When scroll reaches 75% of scrollable area
4. **Batch Load**: 10 additional nodes load progressively
5. **Repeat**: Process continues as user continues scrolling (threshold recalculates)
6. **Max Cap**: Stops loading when all 250 nodes are displayed

## Files Modified

### [TFTView_320x240.h](include/graphics/view/TFT/TFTView_320x240.h)

- **Line 381**: Added `static void ui_event_nodesPanelScroll(lv_event_t *e);` declaration
- **Lines 400-401**: Added state tracking member variables
  - `uint16_t nodesScrollDisplayLimit;`
  - `bool nodesScrollLoadingMore;`

### [TFTView_320x240.cpp](source/graphics/TFT/TFTView_320x240.cpp)

- **Line 140**: Updated constructor initialization list with new variables
- **Lines 724-725**: Registered scroll event callback in `ui_events_init()`
- **Lines 2381-2444**: Implemented `ui_event_nodesPanelScroll()` handler
- **Lines 7100-7123**: Modified `updateNodesFiltered()` to respect display limit

## Integration Points

### LVGL Integration

- Uses `lv_obj_get_scroll_y()` to get current scroll position
- Uses `lv_obj_get_height()` and `lv_obj_get_scroll_bottom()` for layout calculations
- Uses `LV_EVENT_SCROLL` for scroll detection
- Integrates with existing LVGL event callback system

### Existing Function Calls

- Calls existing `updateNodesFiltered(false)` with non-reset flag to continue processing
- Calls existing `updateNodesStatus()` to update UI status displays
- Works with existing `applyNodesFilter()` node filtering logic
- Respects existing filter criteria (offline, channel, hops, etc.)

## Performance Characteristics

- **Initial Load**: 50 nodes loaded immediately
- **Batch Size**: 10 nodes per scroll trigger
- **Processing**: Progressive, non-blocking (processes in batches during main loop)
- **Memory**: Only visible/processed nodes in UI hierarchy (others are hidden)
- **Max Capacity**: 250 nodes (MAX_NUM_NODES_VIEW)

## Testing Recommendations

1. **Scroll Behavior**: Verify smooth scrolling with gradual node appearance
2. **Threshold**: Confirm nodes load at ~75% scroll position
3. **Batch Loading**: Verify 10 nodes load per trigger
4. **Performance**: Monitor frame rate with 250 nodes displayed
5. **Filter Integration**: Test with active filters (offline, channel, hops, etc.)
6. **Edge Cases**: Test with <50 nodes, exactly 250 nodes, rapid scrolling

## Future Enhancements

- Make scroll threshold and batch size configurable
- Add loading indicator during batch loads
- Implement scroll momentum detection for smoother loading
- Add statistics for nodes loaded/displayed ratio
- Cache previous scroll positions for panel resumption
