#if defined(VIEW_320x240) || defined(VIEW_240x320)

#include "graphics/view/TFT/Themes.h"
#include "stdint.h"

static enum Themes::Theme theme = Themes::eDark;

Themes::Theme Themes::get(void)
{
    return theme;
}

enum ThemeColor {
    eMainScreenStyle,
    eTopPanelBg,
    eTopPanelText,
    eTopImageBg,
    eTopImageRecolor,
    eTopImageRecolorOpa,
    ePositiveImageRecolor,
    ePanelBg,
    ePanelPressedBg,
    ePanelText,
    ePanelBorder,
    eNodePanelBg,
    eNodePanelBorder,
    eNodePanelText,
    eNodeButtonBg,
    eNodeButtonBgOpa,
    eButtonPanelBg,
    eMainButtonBg,
    eMainButtonText,
    eMainButtonBorder,
    eMainButtonShadow,
    eMainButtonImageRecolor,
    eMainButtonImageRecolorOpa,
    eHomeContainerBg,
    eHomeContainerBorder,
    eHomeContainerShadow,
    eHomeContainerText,
    eHomeButtonBg,
    eHomeButtonText,
    eHomeButtonBorder,
    eHomeButtonImageRecolor,
    eHomeButtonImageRecolorOpa,
    eChannelButtonBg,
    eChannelButtonBorder,
    eChannelButtonText,
    eSettingsPanelBg,
    eSettingsPanelText,
    eSettingsPanelBorder,
    eSettingsPanelShadow,
    eSettingsPanelBgOpa,
    eSettingsButtonBg,
    eSettingsButtonText,
    eSettingsButtonBorder,
    eSettingsButtonImageRecolor,
    eSettingsButtonImageRecolorOpa,
    eSettingsLabelBg,
    eSettingsLabelBorder,
    eTabViewBg,
    eTabViewText,
    eTabButtonDefaultBg,
    eTabButtonActiveBg,
    eTabButtonPressedBg,
    eTabButtonDefaultText,
    eTabButtonActiveText,
    eTabButtonPressedText,
    eTabButtonDefaultBorder,
    eChatMessageBg,
    eChatMessageBgOpa,
    eChatMessageText,
    eChatMessageBorder,
    eNewMessageBg,
    eNewMessageBgOpa,
    eNewMessageText,
    eNewMessageBorder,
    eAlertPanelBg,
    eBtnMatrixBorderMain,
    eBtnMatrixBorderItems,
    eBtnMatrixBgItems,
    eBtnMatrixTextItems,
    eBatteryPercentageText,
    eColorTextLabel,
    eSpinnerMainArc,
    eSpinnerIndicatorArc,
    eTableHeadingText,
    eTableHeadingBg,
    eTableItemText,
    eTableItemBg,
    eTableItemDarkBg,
    eTableBorder,
    eTableCellBorder
};

uint32_t themeColor[][8] = {
    // dark,       light,      earth (brown-based), grey, dark blue (night-friendly), soft (warm paper), solarized dark, solarized
    // light
    {0xff303030, 0xfff4f4f4, 0xff2a1f1a, 0xff1a1a1a, 0xff1a2332, 0xfff5efe5, 0xff002b36, 0xfffdf6e3}, // eMainScreenStyle
    {0xff436C70, 0xff67ea94, 0xff5c4033, 0xff404040, 0xff2a4a5a, 0xffa9b598, 0xff073642, 0xff859900}, // eTopPanelBg
    {0xffE0E0E0, 0xff212121, 0xffe8d5b7, 0xffd0d0d0, 0xffd0d8e0, 0xff4a4035, 0xff93a1a1, 0xff586e75}, // eTopPanelText
    {0xff436C70, 0xff67ea94, 0xff5c4033, 0xff404040, 0xff2a4a5a, 0xffa9b598, 0xff073642, 0xff859900}, // eTopImageBg
    {0xffffffff, 0xff212121, 0xffd4a76a, 0xffc0c0c0, 0xff8ab4c4, 0xff5a5045, 0xff93a1a1, 0xff657b83}, // eTopImageRecolor
    {255, 255, 255, 255, 255, 255, 255, 255},                                                         // eTopImageRecolorOpa
    {0xffffffff, 0xff212121, 0xff8b9f6e, 0xffa0a0a0, 0xff8ab4c4, 0xff8a9b7a, 0xff859900, 0xff859900}, // ePositiveImageRecolor,
    {0xff303030, 0xfff4f4f0, 0xff3d2817, 0xff2a2a2a, 0xff0f1a28, 0xfff0ebe0, 0xff073642, 0xffeee8d5}, // ePanelBg
    {0xff303030, 0xfffafafa, 0xff4a3425, 0xff353535, 0xff1a2a3a, 0xffe8e0d0, 0xff002b36, 0xffe8dfd0}, // ePanelPressedBg
    {0xfff0f0f0, 0xff212121, 0xffe8d5b7, 0xffd0d0d0, 0xff253545, 0xff4a4035, 0xff839496, 0xff657b83}, // ePanelText
    {0xff67ea94, 0xff67ea94, 0xff8b7355, 0xff808080, 0xffd0d8e0, 0xffc9baa5, 0xff2aa198, 0xff859900}, // ePanelBorder
    {0xff404040, 0xffffffff, 0xff4a3425, 0xff353535, 0xff5a8a9a, 0xfffaf6f0, 0xff073642, 0xfffdf6e3}, // eNodePanelBg
    {0xff808080, 0xff979797, 0xff8b7355, 0xff606060, 0xff1f3040, 0xffc9baa5, 0xff586e75, 0xffb8a888}, // eNodePanelBorder
    {0xfff0f0f0, 0xff212121, 0xffd4bd96, 0xffc0c0c0, 0xff4a6a7a, 0xff5a5045, 0xff93a1a1, 0xff586e75}, // eNodePanelText
    {0xff404040, 0xffffffff, 0xff4a3425, 0xff353535, 0xffc0ccd8, 0xfffaf6f0, 0xff073642, 0xfffdf6e3}, // eNodeButtonBg
    {0, 0, 0, 0, 0, 0, 0, 0},                                                                         // eNodeButtonBgOpa
    {0xff585858, 0xffffffff, 0xff2a1f1a, 0xff252525, 0xff1f3040, 0xfff5efe5, 0xff002b36, 0xfffdf6e3}, // eButtonPanelBg
    {0xff585858, 0xffeaeae0, 0xff6b4e3d, 0xff505050, 0xff3a5565, 0xffe0d8c8, 0xff073642, 0xffeee8d5}, // eMainButtonBg
    {0xffaafbff, 0xff101010, 0xfff4e4c1, 0xffe0e0e0, 0xff202838, 0xff3a3025, 0xff93a1a1, 0xff586e75}, // eMainButtonText
    {0xff67ea94, 0xff67ea94, 0xff8b7355, 0xff808080, 0xff2a4555, 0xffa9b598, 0xff2aa198, 0xff859900}, // eMainButtonBorder
    {0xff9e9e9e, 0xffc0c0c0, 0xff5c4033, 0xff404040, 0xffd8e4f0, 0xffd5c9b8, 0xff002b36, 0xffd0c0a8}, // eMainButtonShadow
    {0xff67ea94, 0xff757575, 0xffb8956a, 0xff909090, 0xff5a8a9a, 0xff8a9b7a, 0xff2aa198, 0xff859900}, // eMainButtonImageRecolor
    {0, 255, 255, 0, 255, 255, 255, 255}, // eMainButtonImageRecolorOpa
    {0xff303030, 0xfffafaf4, 0xff3d2817, 0xff2a2a2a, 0xff0f1a28, 0xfffaf6f0, 0xff002b36, 0xfffdf6e3}, // eHomeContainerBg
    {0xff67EA94, 0xffaaaaaa, 0xff9b8060, 0xff707070, 0xff6a9aaa, 0xffa9b598, 0xff268bd2, 0xff859900}, // eHomeContainerBorder
    {0xff2B824A, 0xff999999, 0xff6b4e3d, 0xff404040, 0xff1a2a3a, 0xffd5c9b8, 0xff073642, 0xffd0c0a8}, // eHomeContainerShadow
    {0xffaafbff, 0xff294337, 0xffe6b86e, 0xffc0c0c0, 0xff1a2a3a, 0xff3a3025, 0xff93a1a1, 0xff657b83}, // eHomeContainerText
    {0xff303030, 0xffffffff, 0xff4a3425, 0xff353535, 0xff4a7585, 0xffe8e0d0, 0xff073642, 0xffeee8d5}, // eHomeButtonBg
    {0xffffffff, 0xff101010, 0xfff0ddb0, 0xffe0e0e0, 0xff0a1520, 0xff4a4035, 0xff93a1a1, 0xff586e75}, // eHomeButtonText
    {0xff303030, 0xffd0d0d0, 0xff6b4e3d, 0xff505050, 0xff8ab4c8, 0xffc9baa5, 0xff2aa198, 0xff859900}, // eHomeButtonBorder
    {0xff606060, 0xff57a6b3, 0xffc9a87c, 0xff808080, 0xff1f3040, 0xff8a9b7a, 0xff2aa198, 0xff859900}, // eHomeButtonImageRecolor
    {0, 255, 255, 0, 255, 255, 255, 255}, // eHomeButtonImageRecolorOpa
    {0xff404040, 0xfffafaf4, 0xff3d2817, 0xff353535, 0xff2a4555, 0xfff0ebe0, 0xff073642, 0xffeee8d5}, // eChannelButtonBg
    {0xffA0A0A0, 0xffD0D0D0, 0xff9b8060, 0xff707070, 0xff3a5565, 0xffc9baa5, 0xff586e75, 0xffb8a888}, // eChannelButtonBorder
    {0xffffffff, 0xff101010, 0xffe8d5b7, 0xffd0d0d0, 0xffc0d0dc, 0xff5a5045, 0xff93a1a1, 0xff586e75}, // eChannelButtonText
    {0xff303030, 0xfff0f0f0, 0xff4a3425, 0xff353535, 0xff1a2a3a, 0xfff5efe5, 0xff002b36, 0xfffdf6e3}, // eSettingsPanelBg
    {0xffaafbff, 0xff003c9f, 0xffd4bd96, 0xffc0c0c0, 0xff1f3545, 0xff5a5045, 0xff93a1a1, 0xff586e75}, // eSettingsPanelText
    {0, 0xff979797, 0xff8b7355, 0xff606060, 0xff4a6575, 0xffc9baa5, 0xff586e75, 0xffb8a888},          // eSettingsPanelBorder
    {0, 0xff7e7e7e, 0xff2a1f1a, 0xff303030, 0xff0a1520, 0xffd5c9b8, 0xff073642, 0xffd0c0a8},          // eSettingsPanelShadow
    {250, 250, 250, 250, 250, 250, 250, 250},                                                         // eSettingsPanelBgOpa
    {0xff505050, 0xffeaeae0, 0xff6b4e3d, 0xff454545, 0xff5a7585, 0xffe0d8c8, 0xff073642, 0xffeee8d5}, // eSettingsButtonBg
    {0xffaafbff, 0xff294337, 0xfff0ddb0, 0xffd0d0d0, 0xffd0dce8, 0xff4a4035, 0xff93a1a1, 0xff586e75}, // eSettingsButtonText
    {0xff303030, 0xffd0d0d0, 0xff8b7355, 0xff606060, 0xff1a2a3a, 0xffc9baa5, 0xff2aa198, 0xff859900}, // eSettingsButtonBorder
    {0, 0xff67ea94, 0xffc96e3f, 0xff808080, 0xff6a9aaa, 0xff8a9b7a, 0xff2aa198, 0xff859900}, // eSettingsButtonImageRecolor
    {0, 255, 255, 0, 255, 255, 255, 255},                                                    // eSettingsButtonImageRecolorOpa
    {0xff404040, 0xffffffff, 0xff4a3425, 0xff404040, 0xff8ab4c8, 0xfffaf6f0, 0xff073642, 0xfffdf6e3}, // eSettingsLabelBg
    {0xff404040, 0xff808080, 0xff8b7355, 0xff606060, 0xff4a6575, 0xffc9baa5, 0xff586e75, 0xffb8a888}, // eSettingsLabelBorder
    {0xff303030, 0xfff4f4f4, 0xff2a1f1a, 0xff1a1a1a, 0xff0a1520, 0xfff5efe5, 0xff002b36, 0xfffdf6e3}, // eTabViewBg
    {0xffaafbff, 0xff003c9f, 0xffd4a76a, 0xffc0c0c0, 0xffc0d0dc, 0xff5a5045, 0xff93a1a1, 0xff586e75}, // eTabViewText
    {0xff303030, 0xffe0e0e0, 0xff3d2817, 0xff2a2a2a, 0xff253545, 0xffe8e0d0, 0xff073642, 0xffe8dfd0}, // eTabButtonDefaultBg
    {0xff303030, 0xffffffff, 0xff6b4e3d, 0xff505050, 0xffc0d4e0, 0xfffaf6f0, 0xff002b36, 0xfffdf6e3}, // eTabButtonActiveBg
    {0xff67ea94, 0xffaafbff, 0xffc96e3f, 0xff909090, 0xff3a5565, 0xffa9b598, 0xff268bd2, 0xff859900}, // eTabButtonPressedBg
    {0xffA0A0A0, 0xff606060, 0xffa89070, 0xff808080, 0xff6a9aaa, 0xff7a7065, 0xff839496, 0xff93a1a1}, // eTabButtonDefaultText
    {0xffffffff, 0xff101010, 0xfff4e4c1, 0xffe0e0e0, 0xffd0e0f0, 0xff3a3025, 0xff93a1a1, 0xff586e75}, // eTabButtonActiveText
    {0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xff1f3545, 0xff5a5045, 0xff93a1a1, 0xff586e75}, // eTabButtonPressedText
    {0xff505050, 0xffb0b0b0, 0xff8b7355, 0xff606060, 0xff4a6575, 0xffc9baa5, 0xff586e75, 0xffb8a888}, // eTabButtonDefaultBorder
    {0xff303030, 0xfffbfce9, 0xff4a3425, 0xff353535, 0xff1a2332, 0xfff0ebe0, 0xff073642, 0xffeee8d5}, // eChatMessageBg
    {255, 255, 255, 255, 255, 255, 255, 255},                                                         // eChatMessageBgOpa
    {0xffffffff, 0xff294337, 0xfff0ddb0, 0xffd0d0d0, 0xff8ab4c8, 0xff4a4035, 0xff93a1a1, 0xff586e75}, // eChatMessageText
    {0xff707070, 0xff888888, 0xff8b7355, 0xff606060, 0xff1a2838, 0xffc9baa5, 0xff586e75, 0xffb8a888}, // eChatMessageBorder
    {0xff404040, 0xffffffff, 0xff3d2817, 0xff404040, 0xff2a4555, 0xfffaf6f0, 0xff002b36, 0xfffdf6e3}, // eNewMessageBg
    {255, 255, 255, 255, 255, 255, 255, 255},                                                         // eNewMessageBgOpa
    {0xffd0d0d0, 0xff294337, 0xffd4bd96, 0xffb0b0b0, 0xff5a8a9a, 0xff5a5045, 0xff839496, 0xff657b83}, // eNewMessageText
    {0xff808080, 0xff888888, 0xff9b8060, 0xff707070, 0xff7a8a9a, 0xffc9baa5, 0xff586e75, 0xffb8a888}, // eNewMessageBorder
    {0xff303030, 0xfffbfbfb, 0xff2a1f1a, 0xff252525, 0xffd0dce8, 0xfffaf6f0, 0xff073642, 0xfffdf6e3}, // eAlertPanelBg
    {0xff303030, 0xfff4f4f4, 0xff3d2817, 0xff2a2a2a, 0xffffffff, 0xfff5efe5, 0xff002b36, 0xfffdf6e3}, // eBtnMatrixBorder Main
    {0xff67ea94, 0xff67ea94, 0xff8b7355, 0xff808080, 0xff3a4a5a, 0xffa9b598, 0xff2aa198, 0xff859900}, // eBtnMatrixBorderItems
    {0xff606060, 0xfffffff8, 0xff4a3425, 0xff454545, 0xff1a2a3a, 0xffe8e0d0, 0xff073642, 0xffe8dfd0}, // eBtnMatrixBgItems
    {0xffaafbff, 0xff212121, 0xffe8d5b7, 0xffd0d0d0, 0xffc0d4e0, 0xff4a4035, 0xff93a1a1, 0xff586e75}, // eBtnMatrixTextItems
    {0xffaafbff, 0xff212121, 0xffd4a76a, 0xffc0c0c0, 0xffc0d0dc, 0xff5a5045, 0xff93a1a1, 0xff586e75}, // eBatteryPercentageText
    {0xffaafbff, 0xff003c9f, 0xffe6b86e, 0xffc0c0c0, 0xff4a5a6a, 0xff5a5045, 0xff93a1a1, 0xff586e75}, // eColorTextLabel
    {0xff404040, 0xffe0e0e0, 0xff3d2817, 0xff353535, 0xff1f3545, 0xffe0d8c8, 0xff073642, 0xffe8dfd0}, // eSpinnerMainArc
    {0xff67ea94, 0xff67ea94, 0xffc96e3f, 0xff808080, 0xff6a9aaa, 0xff8a9b7a, 0xff268bd2, 0xff859900}, // eSpinnerIndicatorArc
    {0xffaafbff, 0xff212121, 0xffe6b86e, 0xffc0c0c0, 0xffa0b0c0, 0xff4a4035, 0xff93a1a1, 0xff586e75}, // eTableHeadingText,
    {0xff303030, 0xfff4f4f0, 0xff4a3425, 0xff353535, 0xff5a6a7a, 0xffe0d8c8, 0xff073642, 0xffeee8d5}, // eTableHeadingBg
    {0xffaafbff, 0xff212121, 0xffe8d5b7, 0xffd0d0d0, 0xff1a2332, 0xff5a5045, 0xff93a1a1, 0xff586e75}, // eTableItemText,
    {0xff505050, 0xfff4f4f0, 0xff5c4033, 0xff404040, 0xff1a2838, 0xfff0ebe0, 0xff073642, 0xffeee8d5}, // eTableItemBg
    {0xff303030, 0xffd4d4d0, 0xff3d2817, 0xff2a2a2a, 0xff5a8a9a, 0xffe8e0d0, 0xff002b36, 0xffe8dfd0}, // eTableItemDarkBg
    {0xff404040, 0xffe0e0e0, 0xff8b7355, 0xff606060, 0xff2a3a4a, 0xffc9baa5, 0xff586e75, 0xffb8a888}, // eTableBorder
    {0xff404040, 0xffe0e0e0, 0xff8b7355, 0xff606060, 0xff3a4a5a, 0xffc9baa5, 0xff586e75, 0xffb8a888}  // eTableCellBorder
};

#include "fonts.h"
#include "images.h"
#include "styles.h"

#define THEME(COLOR) (themeColor[COLOR][theme])

// the following styles are copied from eez-studio generated styles and parametrized
extern "C" {
void apply_style_top_panel_style(void)
{
    lv_style_t *style = get_style_top_panel_style_MAIN_DEFAULT();
    lv_style_set_bg_color(style, lv_color_hex(THEME(eTopPanelBg)));
    lv_style_set_text_color(style, lv_color_hex(THEME(eTopPanelText)));
    // lv_style_set_text_font(style, &ui_font_montserrat_16);
};
void apply_style_panel_style_MAIN_DEFAULT(void)
{
    lv_style_t *style = get_style_panel_style_MAIN_DEFAULT();
    lv_style_set_bg_color(style, lv_color_hex(THEME(ePanelBg)));
    lv_style_set_text_color(style, lv_color_hex(THEME(ePanelText)));
    lv_style_set_border_color(style, lv_color_hex(THEME(ePanelBorder)));
    // lv_style_set_shadow_color(style, lv_color_hex(0xffe0e0e0));
};
void apply_style_panel_style_MAIN_PRESSED(void)
{
    lv_style_t *style = get_style_panel_style_MAIN_PRESSED();
    lv_style_set_bg_color(style, lv_color_hex(THEME(ePanelPressedBg)));
};
void apply_style_home_container_style(void)
{
    lv_style_t *style = get_style_home_container_style_MAIN_DEFAULT();
    lv_style_set_border_color(style, lv_color_hex(THEME(eHomeContainerBorder)));
    lv_style_set_border_width(style, 3);
    lv_style_set_border_side(style, LV_BORDER_SIDE_FULL);
    lv_style_set_bg_color(style, lv_color_hex(THEME(eHomeContainerBg)));
    lv_style_set_shadow_color(style, lv_color_hex(THEME(eHomeContainerShadow)));
    lv_style_set_text_font(style, &ui_font_montserrat_16);
    lv_style_set_radius(style, 10);
    lv_style_set_text_color(style, lv_color_hex(THEME(eHomeContainerText)));
};
void apply_style_settings_panel_style(void)
{
    lv_style_t *style = get_style_settings_panel_style_MAIN_DEFAULT();
    lv_style_set_bg_color(style, lv_color_hex(THEME(eSettingsPanelBg)));
    lv_style_set_text_color(style, lv_color_hex(THEME(eSettingsPanelText)));
    lv_style_set_shadow_color(style, lv_color_hex(THEME(eSettingsPanelShadow)));
    lv_style_set_border_color(style, lv_color_hex(THEME(eSettingsPanelBorder)));
    lv_style_set_bg_opa(style, THEME(eSettingsPanelBgOpa));
};
void apply_style_node_panel_style(void)
{
    lv_style_t *style = get_style_node_panel_style_MAIN_DEFAULT();
    lv_style_set_bg_color(style, lv_color_hex(THEME(eNodePanelBg)));
    lv_style_set_border_color(style, lv_color_hex(THEME(eNodePanelBorder)));
    lv_style_set_text_font(style, &ui_font_montserrat_12);
    lv_style_set_text_color(style, lv_color_hex(THEME(eNodePanelText)));
};
void apply_style_node_button_style(void)
{
    lv_style_t *style = get_style_node_button_style_MAIN_DEFAULT();
    lv_style_set_bg_color(style, lv_color_hex(THEME(eNodeButtonBg)));
    lv_style_set_bg_opa(style, THEME(eNodeButtonBgOpa));
};
void apply_style_button_panel_style(void)
{
    lv_style_t *style = get_style_button_panel_style_MAIN_DEFAULT();
    lv_style_set_bg_color(style, lv_color_hex(THEME(eButtonPanelBg)));
};
void apply_style_home_button_style(void)
{
    lv_style_t *style = get_style_home_button_style_MAIN_DEFAULT();
    lv_style_set_bg_color(style, lv_color_hex(THEME(eHomeButtonBg)));
    lv_style_set_bg_image_recolor_opa(style, THEME(eHomeButtonImageRecolorOpa));
    lv_style_set_bg_image_recolor(style, lv_color_hex(THEME(eHomeButtonImageRecolor)));
    lv_style_set_border_color(style, lv_color_hex(THEME(eHomeButtonBorder)));
    lv_style_set_text_color(style, lv_color_hex(THEME(eHomeButtonText)));
};
void apply_style_settings_button_style(void)
{
    lv_style_t *style = get_style_settings_button_style_MAIN_DEFAULT();
    lv_style_set_bg_color(style, lv_color_hex(THEME(eSettingsButtonBg)));
    lv_style_set_bg_image_recolor_opa(style, THEME(eSettingsButtonImageRecolorOpa));
    lv_style_set_bg_image_recolor(style, lv_color_hex(THEME(eSettingsButtonImageRecolor)));
    lv_style_set_border_color(style, lv_color_hex(THEME(eSettingsButtonBorder)));
    lv_style_set_text_color(style, lv_color_hex(THEME(eSettingsButtonText)));
};
void apply_style_main_button_style(void)
{
    lv_style_t *style = get_style_main_button_style_MAIN_DEFAULT();
    lv_style_set_bg_image_recolor_opa(style, THEME(eMainButtonImageRecolorOpa));
    lv_style_set_bg_image_recolor(style, lv_color_hex(THEME(eMainButtonImageRecolor)));
    lv_style_set_border_color(style, lv_color_hex(THEME(eMainButtonBorder)));
    lv_style_set_bg_color(style, lv_color_hex(THEME(eMainButtonBg)));
    lv_style_set_text_color(style, lv_color_hex(THEME(eMainButtonText)));
    lv_style_set_shadow_color(style, lv_color_hex(THEME(eMainButtonShadow)));
};
void apply_style_new_message_style(void)
{
    lv_style_t *style = get_style_new_message_style_MAIN_DEFAULT();
    lv_style_set_border_color(style, lv_color_hex(THEME(eNewMessageBorder)));
    lv_style_set_bg_color(style, lv_color_hex(THEME(eNewMessageBg)));
    lv_style_set_text_color(style, lv_color_hex(THEME(eNewMessageText)));
    lv_style_set_bg_opa(style, THEME(eNewMessageBgOpa));
};
void apply_style_chat_message_style(void)
{
    lv_style_t *style = get_style_chat_message_style_MAIN_DEFAULT();
    lv_style_set_border_color(style, lv_color_hex(THEME(eChatMessageBorder)));
    lv_style_set_bg_color(style, lv_color_hex(THEME(eChatMessageBg)));
    lv_style_set_text_color(style, lv_color_hex(THEME(eChatMessageText)));
    lv_style_set_bg_opa(style, THEME(eChatMessageBgOpa));
};
void apply_style_tab_view_style(void)
{
    lv_style_t *style = get_style_tab_view_style_MAIN_DEFAULT();
    lv_style_set_bg_color(style, lv_color_hex(THEME(eTabViewBg)));
    lv_style_set_text_color(style, lv_color_hex(THEME(eTabViewText)));
};
void apply_style_drop_down_style(void){};
void apply_style_bw_label_style(void)
{
    lv_style_t *style = get_style_bw_label_style_MAIN_DEFAULT();
    lv_style_set_text_color(style, lv_color_hex(THEME(eBatteryPercentageText)));
};
void apply_style_color_label_style(void)
{
    lv_style_t *style = get_style_color_label_style_MAIN_DEFAULT();
    lv_style_set_text_color(style, lv_color_hex(THEME(eColorTextLabel)));
};
void apply_style_top_image_style(void)
{
    lv_style_t *style = get_style_top_image_style_MAIN_DEFAULT();
    lv_style_set_bg_image_recolor(style, lv_color_hex(THEME(eTopImageRecolor)));
    lv_style_set_bg_image_recolor_opa(style, THEME(eTopImageRecolorOpa));
    lv_style_set_image_recolor(style, lv_color_hex(THEME(eTopImageRecolor)));
    lv_style_set_image_recolor_opa(style, THEME(eTopImageRecolorOpa));
    lv_style_set_bg_color(style, lv_color_hex(THEME(eTopImageBg)));
};
void apply_style_alert_panel_style(void)
{
    lv_style_t *style = get_style_alert_panel_style_MAIN_DEFAULT();
    lv_style_set_bg_color(style, lv_color_hex(THEME(eAlertPanelBg)));
    lv_style_set_text_color(style, lv_color_hex(THEME(ePanelText)));
};
void apply_style_main_screen_style(void)
{
    lv_style_t *style = get_style_main_screen_style_MAIN_DEFAULT();
    lv_style_set_bg_color(style, lv_color_hex(THEME(eMainScreenStyle)));
};
void apply_style_channel_button_style(void)
{
    lv_style_t *style = get_style_channel_button_style_MAIN_DEFAULT();
    lv_style_set_bg_color(style, lv_color_hex(THEME(eChannelButtonBg)));
    lv_style_set_border_color(style, lv_color_hex(THEME(eChannelButtonBorder)));
    lv_style_set_text_color(style, lv_color_hex(THEME(eChannelButtonText)));
};
void apply_style_button_matrix_style_ITEMS_DEFAULT(void)
{
    lv_style_t *style = get_style_button_matrix_style_ITEMS_DEFAULT();
    lv_style_set_border_color(style, lv_color_hex(THEME(eBtnMatrixBorderItems)));
    lv_style_set_bg_color(style, lv_color_hex(THEME(eBtnMatrixBgItems)));
    lv_style_set_text_color(style, lv_color_hex(THEME(eBtnMatrixTextItems)));
};
void apply_style_button_matrix_style_MAIN_DEFAULT(void)
{
    lv_style_t *style = get_style_button_matrix_style_MAIN_DEFAULT();
    lv_style_set_bg_color(style, lv_color_hex(THEME(eBtnMatrixBorderMain)));
};
void apply_style_spinner_style_MAIN_DEFAULT(void)
{
    lv_style_t *style = get_style_spinner_style_MAIN_DEFAULT();
    lv_style_set_arc_color(style, lv_color_hex(THEME(eSpinnerMainArc)));
};
void apply_style_spinner_style_INDICATOR_DEFAULT(void)
{
    lv_style_t *style = get_style_spinner_style_INDICATOR_DEFAULT();
    lv_style_set_arc_color(style, lv_color_hex(THEME(eSpinnerIndicatorArc)));
};
void apply_style_settings_label_style(void)
{
    lv_style_t *style = get_style_settings_label_style_MAIN_DEFAULT();
    lv_style_set_border_color(style, lv_color_hex(THEME(eSettingsLabelBorder)));
    // lv_style_set_bg_opa(style, 255);
    lv_style_set_bg_color(style, lv_color_hex(THEME(eSettingsLabelBg)));
};
void apply_style_positive_image_style(void)
{
    lv_style_t *style = get_style_positive_image_style_MAIN_DEFAULT();
    lv_style_set_image_recolor(style, lv_color_hex(THEME(ePositiveImageRecolor)));
};
void apply_style_statistics_table_style_MAIN_DEFAULT(void)
{
    lv_style_t *style = get_style_statistics_table_style_MAIN_DEFAULT();
    lv_style_set_border_color(style, lv_color_hex(THEME(eTableBorder)));
};
void apply_style_statistics_table_style_ITEMS_DEFAULT(void)
{
    lv_style_t *style = get_style_statistics_table_style_ITEMS_DEFAULT();
    lv_style_set_bg_color(style, lv_color_hex(THEME(eTableItemBg)));
    lv_style_set_text_color(style, lv_color_hex(THEME(eTableItemText)));
    lv_style_set_border_color(style, lv_color_hex(THEME(eTableCellBorder)));
};
}

void Themes::set(enum Theme th)
{
    theme = th;
    apply_style_top_panel_style();
    apply_style_panel_style_MAIN_DEFAULT();
    apply_style_panel_style_MAIN_PRESSED();
    apply_style_home_container_style();
    apply_style_settings_panel_style();
    apply_style_node_panel_style();
    apply_style_node_button_style();
    apply_style_button_panel_style();
    apply_style_home_button_style();
    apply_style_settings_button_style();
    apply_style_main_button_style();
    apply_style_new_message_style();
    apply_style_chat_message_style();
    apply_style_tab_view_style();
    apply_style_drop_down_style();
    apply_style_bw_label_style();
    apply_style_color_label_style();
    apply_style_top_image_style();
    apply_style_alert_panel_style();
    apply_style_main_screen_style();
    apply_style_channel_button_style();
    apply_style_button_matrix_style_ITEMS_DEFAULT();
    apply_style_button_matrix_style_MAIN_DEFAULT();
    apply_style_spinner_style_MAIN_DEFAULT();
    apply_style_spinner_style_INDICATOR_DEFAULT();
    apply_style_settings_label_style();
    apply_style_positive_image_style();
    apply_style_statistics_table_style_MAIN_DEFAULT();
    apply_style_statistics_table_style_ITEMS_DEFAULT();
}

void Themes::initStyles(void)
{
    // set(get());
    //  lvgl v9 tabview buttons are not btn-matrix anymore but array of buttons
    //  see https://forum.lvgl.io/t/style-a-tabview-widget-in-v9-0-0/14747
    lv_style_init(&style_btn_default);
    lv_style_set_text_color(&style_btn_default, lv_color_hex(THEME(eTabButtonDefaultText)));
    lv_style_set_bg_color(&style_btn_default, lv_color_hex(THEME(eTabButtonDefaultBg)));
    lv_style_set_bg_opa(&style_btn_default, LV_OPA_COVER);
    lv_style_set_border_color(&style_btn_default, lv_color_hex(THEME(eTabButtonDefaultBorder)));
    lv_style_set_border_opa(&style_btn_default, LV_OPA_COVER);
    lv_style_set_border_width(&style_btn_default, 1);
    lv_style_set_border_side(&style_btn_default, LV_BORDER_SIDE_FULL);

    lv_style_init(&style_btn_active);
    lv_style_set_text_color(&style_btn_active, lv_color_hex(THEME(eTabButtonActiveText)));
    lv_style_set_bg_color(&style_btn_active, lv_color_hex(THEME(eTabButtonActiveBg)));
    lv_style_set_bg_opa(&style_btn_active, LV_OPA_COVER);
    lv_style_set_border_color(&style_btn_active, lv_color_hex(0xff67ea94));
    lv_style_set_border_opa(&style_btn_active, LV_OPA_COVER);
    lv_style_set_border_width(&style_btn_active, 3);
    lv_style_set_border_side(&style_btn_active, LV_BORDER_SIDE_BOTTOM);

    lv_style_init(&style_btn_pressed);
    lv_style_set_text_color(&style_btn_pressed, lv_color_hex(THEME(eTabButtonPressedText)));
    lv_style_set_bg_color(&style_btn_pressed, lv_color_hex(THEME(eTabButtonPressedBg)));
    lv_style_set_bg_opa(&style_btn_pressed, LV_OPA_COVER);
    lv_style_set_border_color(&style_btn_pressed, lv_color_hex(0xff67ea94));
    lv_style_set_border_opa(&style_btn_pressed, LV_OPA_COVER);
    lv_style_set_border_width(&style_btn_pressed, 3);
    lv_style_set_border_side(&style_btn_pressed, LV_BORDER_SIDE_BOTTOM);
}

void Themes::recolorButton(lv_obj_t *obj, bool enabled, lv_opa_t opa)
{
    lv_color_t color;
    switch (theme) {
    case eLight:
        color = enabled ? lv_color_hex(THEME(eHomeButtonImageRecolor)) : lv_color_hex(0xffc0c0c0);
        break;
    case eDark:
        color = enabled ? lv_color_hex(0xffe0e0e0) : lv_color_hex(0xff606060);
        break;
    case eNeon:
        color = enabled ? lv_color_hex(0xffd4a76a) : lv_color_hex(0xff6b4e3d);
        break;
    case eGrey:
        color = enabled ? lv_color_hex(0xffc0c0c0) : lv_color_hex(0xff505050);
        break;
    case eDarkBlue:
        color = enabled ? lv_color_hex(0xff8ab4c8) : lv_color_hex(0xff3a4a5a);
        break;
    case eSoft:
        color = enabled ? lv_color_hex(0xff8a9b7a) : lv_color_hex(0xffc9baa5);
        break;
    case eSolarizedDark:
        color = enabled ? lv_color_hex(0xff2aa198) : lv_color_hex(0xff586e75);
        break;
    case eSolarizedLight:
        color = enabled ? lv_color_hex(0xff859900) : lv_color_hex(0xffb8a888);
        break;
    default:
        break;
    }
    lv_obj_set_style_bg_image_recolor(obj, color, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(obj, opa, LV_PART_MAIN | LV_STATE_DEFAULT);
}

void Themes::recolorImage(lv_obj_t *obj, bool enabled)
{
    lv_color_t color;
    switch (theme) {
    case eLight:
        color = enabled ? lv_color_hex(THEME(eHomeButtonImageRecolor)) : lv_color_hex(0xffc0c0c0);
        break;
    case eDark:
        color = enabled ? lv_color_hex(0xffe0e0e0) : lv_color_hex(0xff606060);
        break;
    case eNeon:
        color = enabled ? lv_color_hex(0xffe6b86e) : lv_color_hex(0xff6b4e3d);
        break;
    case eGrey:
        color = enabled ? lv_color_hex(0xffc0c0c0) : lv_color_hex(0xff505050);
        break;
    case eDarkBlue:
        color = enabled ? lv_color_hex(0xff8ab4c8) : lv_color_hex(0xff3a4a5a);
        break;
    case eSoft:
        color = enabled ? lv_color_hex(0xff8a9b7a) : lv_color_hex(0xffc9baa5);
        break;
    case eSolarizedDark:
        color = enabled ? lv_color_hex(0xff2aa198) : lv_color_hex(0xff586e75);
        break;
    case eSolarizedLight:
        color = enabled ? lv_color_hex(0xff859900) : lv_color_hex(0xffb8a888);
        break;
    default:
        break;
    }
    lv_obj_set_style_image_recolor(obj, color, LV_PART_MAIN | LV_STATE_DEFAULT);
}

void Themes::recolorText(lv_obj_t *obj, bool enabled)
{
    lv_color_t color;
    switch (theme) {
    case eLight:
        color = enabled ? lv_color_hex(THEME(eHomeContainerText)) : lv_color_hex(0xffc0c0c0);
        break;
    case eDark:
        color = enabled ? lv_color_hex(THEME(eHomeContainerText)) : lv_color_hex(0xff606060);
        break;
    case eNeon:
        color = enabled ? lv_color_hex(0xffe6b86e) : lv_color_hex(0xff8b7355);
        break;
    case eGrey:
        color = enabled ? lv_color_hex(0xffc0c0c0) : lv_color_hex(0xff606060);
        break;
    case eDarkBlue:
        color = enabled ? lv_color_hex(0xffc0d0dc) : lv_color_hex(0xff5a6a7a);
        break;
    case eSoft:
        color = enabled ? lv_color_hex(0xff5a5045) : lv_color_hex(0xffc9baa5);
        break;
    case eSolarizedDark:
        color = enabled ? lv_color_hex(0xff93a1a1) : lv_color_hex(0xff586e75);
        break;
    case eSolarizedLight:
        color = enabled ? lv_color_hex(0xff657b83) : lv_color_hex(0xffb8a888);
        break;
    default:
        break;
    }
    lv_obj_set_style_text_color(obj, color, LV_PART_MAIN | LV_STATE_DEFAULT);
}

void Themes::recolorTopLabel(lv_obj_t *obj, bool alert)
{
    lv_color_t color;
    switch (theme) {
    case eLight:
        color = alert ? lv_color_hex(0xfff72b2b) : lv_color_hex(THEME(eTopPanelText));
        break;
    case eDark:
        color = alert ? lv_color_hex(0xfff72b2b) : lv_color_hex(THEME(eTopPanelText));
        break;
    case eNeon:
        color = alert ? lv_color_hex(0xfff72b2b) : lv_color_hex(THEME(eTopPanelText));
        break;
    case eGrey:
        color = alert ? lv_color_hex(0xfff72b2b) : lv_color_hex(THEME(eTopPanelText));
        break;
    case eDarkBlue:
        color = alert ? lv_color_hex(0xfff72b2b) : lv_color_hex(THEME(eTopPanelText));
        break;
    case eSoft:
        color = alert ? lv_color_hex(0xffcc3333) : lv_color_hex(THEME(eTopPanelText));
        break;
    case eSolarizedDark:
        color = alert ? lv_color_hex(0xffdc322f) : lv_color_hex(THEME(eTopPanelText));
        break;
    case eSolarizedLight:
        color = alert ? lv_color_hex(0xffdc322f) : lv_color_hex(THEME(eTopPanelText));
        break;
    default:
        break;
    }
    lv_obj_set_style_text_color(obj, color, LV_PART_MAIN | LV_STATE_DEFAULT);
}

void Themes::recolorTableRow(lv_draw_fill_dsc_t *fill_draw_dsc, bool odd)
{
    if (odd) {
        fill_draw_dsc->color = lv_color_hex(THEME(eTableItemBg));
    } else {
        fill_draw_dsc->color = lv_color_hex(THEME(eTableItemDarkBg));
    }
}

#endif // VIEW_320x240