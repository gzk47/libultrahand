/********************************************************************************
 * File: global_vars.cpp
 * Author: ppkantorski
 * Description: 
 *   This source file provides the definitions of global constants and paths used 
 *   throughout the Ultrahand Overlay project. These constants are essential for 
 *   file management and configuration settings within the application.
 *
 *   For the latest updates and contributions, visit the project's GitHub repository:
 *   GitHub Repository: https://github.com/ppkantorski/Ultrahand-Overlay
 *
 *   Note: This notice is integral to the project's documentation and must not be 
 *   altered or removed.
 *
 *  Licensed under both GPLv2 and CC-BY-4.0
 *  Copyright (c) 2024 ppkantorski
 ********************************************************************************/

#include "global_vars.hpp"

namespace ult {

    // Base paths
    const std::string ROOT_PATH          = "sdmc:/";
    const std::string BASE_CONFIG_PATH   = ROOT_PATH + "config/ultrahand/";
    const std::string TESLA_CONFIG_PATH  = ROOT_PATH + "config/tesla/";
    const std::string SWITCH_PATH        = ROOT_PATH + "switch/";

    // Filenames
    CONSTEXPR_STRING std::string CONFIG_FILENAME       = "config.ini";
    const std::string BOOT_PACKAGE_FILENAME            = "boot_package.ini";
    const std::string EXIT_PACKAGE_FILENAME            = "exit_package.ini";
    const std::string PACKAGE_FILENAME                 = "package.ini";
    const std::string THEME_FILENAME                   = "theme.ini";
    const std::string WALLPAPER_FILENAME               = "wallpaper.rgba";
    const std::string FUSE_FILENAME                    = "fuse.ini";
    const std::string OVERLAYS_INI_FILENAME            = "overlays.ini";
    const std::string PACKAGES_INI_FILENAME            = "packages.ini";
    const std::string NOTIFICATIONS_FLAG_FILENAME      = "NOTIFICATIONS.flag";

    // Project names
    CONSTEXPR_STRING std::string ULTRAHAND_PROJECT_NAME         = "ultrahand";
    CONSTEXPR_STRING std::string CAPITAL_ULTRAHAND_PROJECT_NAME = "Ultrahand";
    CONSTEXPR_STRING std::string SPLIT_PROJECT_NAME_1           = "Ultra";
    CONSTEXPR_STRING std::string SPLIT_PROJECT_NAME_2           = "hand";

    // Paths
    const std::string SETTINGS_PATH               = BASE_CONFIG_PATH;
    const std::string ULTRAHAND_CONFIG_INI_PATH   = BASE_CONFIG_PATH + CONFIG_FILENAME;
    const std::string TESLA_CONFIG_INI_PATH       = TESLA_CONFIG_PATH + CONFIG_FILENAME;
    const std::string LANG_PATH                   = BASE_CONFIG_PATH + "lang/";
    const std::string THEMES_PATH                 = BASE_CONFIG_PATH + "themes/";
    const std::string WALLPAPERS_PATH             = BASE_CONFIG_PATH + "wallpapers/";
    const std::string SOUNDS_PATH                 = BASE_CONFIG_PATH + "sounds/";
    const std::string FLAGS_PATH                  = BASE_CONFIG_PATH + "flags/";
    const std::string NOTIFICATIONS_PATH          = BASE_CONFIG_PATH + "notifications/";
    const std::string PAYLOADS_PATH               = BASE_CONFIG_PATH + "payloads/";
    const std::string HB_APPSTORE_JSON            = SWITCH_PATH + "appstore/.get/packages/UltrahandOverlay/info.json";
    std::string THEME_CONFIG_INI_PATH             = BASE_CONFIG_PATH + THEME_FILENAME;
    std::string WALLPAPER_PATH                    = BASE_CONFIG_PATH + WALLPAPER_FILENAME;
    const std::string DOWNLOADS_PATH              = BASE_CONFIG_PATH + "downloads/";
    const std::string EXPANSION_PATH              = BASE_CONFIG_PATH + "expansion/";
    const std::string FUSE_DATA_INI_PATH          = BASE_CONFIG_PATH + FUSE_FILENAME;
    const std::string PACKAGE_PATH                = SWITCH_PATH + ".packages/";
    const std::string OVERLAY_PATH                = SWITCH_PATH + ".overlays/";
    const std::string OVERLAYS_INI_FILEPATH       = BASE_CONFIG_PATH + OVERLAYS_INI_FILENAME;
    const std::string PACKAGES_INI_FILEPATH       = BASE_CONFIG_PATH + PACKAGES_INI_FILENAME;
    const std::string NOTIFICATIONS_FLAG_FILEPATH = FLAGS_PATH + NOTIFICATIONS_FLAG_FILENAME;

    // Protected files
    const std::set<std::string> PROTECTED_FILES = {
        ROOT_PATH + "atmosphere/package3",
        ROOT_PATH + "atmosphere/stratosphere.romfs"
    };

    // GitHub URLs
    const std::string GITHUB_BASE_URL               = "https://github.com/ppkantorski/";
    const std::string GITHUB_RAW_BASE_URL           = "https://raw.githubusercontent.com/ppkantorski/";
    const std::string ULTRAHAND_REPO_URL            = GITHUB_BASE_URL + "Ultrahand-Overlay/";
    const std::string INCLUDED_THEME_FOLDER_URL     = GITHUB_RAW_BASE_URL + "Ultrahand-Overlay/main/themes/";
    const std::string LATEST_RELEASE_INFO_URL       = GITHUB_RAW_BASE_URL + "Ultrahand-Overlay/main/RELEASE.ini";
    const std::string NX_OVLLOADER_ZIP_URL          = GITHUB_BASE_URL + "nx-ovlloader/releases/latest/download/nx-ovlloader.zip";
    const std::string NX_OVLLOADER_PLUS_ZIP_URL     = GITHUB_BASE_URL + "nx-ovlloader/releases/latest/download/nx-ovlloader+.zip";
    const std::string OLD_NX_OVLLOADER_ZIP_URL      = GITHUB_BASE_URL + "nx-ovlloader/releases/download/v1.0.8/nx-ovlloader.zip";
    const std::string OLD_NX_OVLLOADER_PLUS_ZIP_URL = GITHUB_BASE_URL + "nx-ovlloader/releases/download/v1.0.8/nx-ovlloader+.zip";
    const std::string UPDATER_PAYLOAD_URL           = GITHUB_RAW_BASE_URL + "Ultrahand-Overlay/main/payloads/ultrahand_updater.bin";

    // Launch options
    const std::string LAUNCH_ARGS_STR       = "launch_args";
    const std::string USE_LAUNCH_ARGS_STR   = "use_launch_args";
    const std::string USE_QUICK_LAUNCH_STR  = "use_quick_launch";
    const std::string USE_BOOT_PACKAGE_STR  = "use_boot_package";
    const std::string USE_EXIT_PACKAGE_STR  = "use_exit_package";
    const std::string USE_LOGGING_STR       = "use_logging";

    // Combos
    CONSTEXPR_STRING std::string TESLA_COMBO_STR       = "L+DDOWN+RS";
    CONSTEXPR_STRING std::string ULTRAHAND_COMBO_STR   = "ZL+ZR+DDOWN";

    // System / mode strings
    CONSTEXPR_STRING std::string FUSE_STR         = "fuse";
    CONSTEXPR_STRING std::string TESLA_STR        = "tesla";
    CONSTEXPR_STRING std::string ERISTA_STR       = "erista";
    CONSTEXPR_STRING std::string MARIKO_STR       = "mariko";
    CONSTEXPR_STRING std::string KEY_COMBO_STR    = "key_combo";
    CONSTEXPR_STRING std::string DEFAULT_LANG_STR = "default_lang";

    // Generic strings
    CONSTEXPR_STRING std::string LIST_STR             = "list";
    CONSTEXPR_STRING std::string LIST_FILE_STR        = "list_file";
    CONSTEXPR_STRING std::string JSON_STR             = "json";
    CONSTEXPR_STRING std::string JSON_FILE_STR        = "json_file";
    CONSTEXPR_STRING std::string INI_FILE_STR         = "ini_file";
    CONSTEXPR_STRING std::string HEX_FILE_STR         = "hex_file";
    CONSTEXPR_STRING std::string PACKAGE_STR          = "package";
    CONSTEXPR_STRING std::string PACKAGES_STR         = "packages";
    CONSTEXPR_STRING std::string OVERLAY_STR          = "overlay";
    CONSTEXPR_STRING std::string OVERLAYS_STR         = "overlays";
    const std::string IN_OVERLAY_STR                  = "in_overlay";
    const std::string IN_HIDDEN_OVERLAY_STR           = "in_hidden_overlay";
    const std::string IN_HIDDEN_PACKAGE_STR           = "in_hidden_package";
    CONSTEXPR_STRING std::string FILE_STR             = "file";
    CONSTEXPR_STRING std::string SYSTEM_STR           = "system";
    CONSTEXPR_STRING std::string MODE_STR             = "mode";
    CONSTEXPR_STRING std::string GROUPING_STR         = "grouping";
    CONSTEXPR_STRING std::string FOOTER_STR           = "footer";
    CONSTEXPR_STRING std::string TOGGLE_STR           = "toggle";
    CONSTEXPR_STRING std::string LEFT_STR             = "left";
    CONSTEXPR_STRING std::string RIGHT_STR            = "right";
    CONSTEXPR_STRING std::string CENTER_STR           = "center";
    CONSTEXPR_STRING std::string HIDE_STR             = "hide";
    CONSTEXPR_STRING std::string STAR_STR             = "star";
    CONSTEXPR_STRING std::string PRIORITY_STR         = "priority";
    CONSTEXPR_STRING std::string ON_STR               = "on";
    CONSTEXPR_STRING std::string OFF_STR              = "off";
    CONSTEXPR_STRING std::string CAPITAL_ON_STR       = "On";
    CONSTEXPR_STRING std::string CAPITAL_OFF_STR      = "Off";
    CONSTEXPR_STRING std::string TRUE_STR             = "true";
    CONSTEXPR_STRING std::string FALSE_STR            = "false";
    CONSTEXPR_STRING std::string GLOBAL_STR           = "global";
    CONSTEXPR_STRING std::string DEFAULT_STR          = "default";
    CONSTEXPR_STRING std::string SLOT_STR             = "slot";
    CONSTEXPR_STRING std::string OPTION_STR           = "option";
    CONSTEXPR_STRING std::string FORWARDER_STR        = "forwarder";
    CONSTEXPR_STRING std::string TEXT_STR             = "text";
    CONSTEXPR_STRING std::string TABLE_STR            = "table";
    CONSTEXPR_STRING std::string TRACKBAR_STR         = "trackbar";
    CONSTEXPR_STRING std::string STEP_TRACKBAR_STR    = "step_trackbar";
    const std::string NAMED_STEP_TRACKBAR_STR         = "named_step_trackbar";
    CONSTEXPR_STRING std::string NULL_STR             = "null";
    CONSTEXPR_STRING std::string THEME_STR            = "theme";
    CONSTEXPR_STRING std::string NOT_AVAILABLE_STR    = "Not available";
    CONSTEXPR_STRING std::string MEMORY_STR           = "memory";

    // Pre-defined symbols
    CONSTEXPR_STRING std::string OPTION_SYMBOL       = "\u22EF";
    CONSTEXPR_STRING std::string DROPDOWN_SYMBOL     = "\uE14A";
    CONSTEXPR_STRING std::string CHECKMARK_SYMBOL    = "\uE14B";
    CONSTEXPR_STRING std::string CROSSMARK_SYMBOL    = "\uE14C";
    CONSTEXPR_STRING std::string DOWNLOAD_SYMBOL     = "\u2193";
    CONSTEXPR_STRING std::string UNZIP_SYMBOL        = "\u2191"; 
    CONSTEXPR_STRING std::string COPY_SYMBOL         = "\u2192";
    CONSTEXPR_STRING std::string INPROGRESS_SYMBOL   = "\u25CF";
    CONSTEXPR_STRING std::string STAR_SYMBOL         = "\u2605";
    CONSTEXPR_STRING std::string DIVIDER_SYMBOL      = "";

    const std::vector<std::string> THROBBER_SYMBOLS = {"", "", "", "", "", "", "", ""};

    // Atomic variables for progress tracking
    std::atomic<int> displayPercentage(0); // for interpreter percentage progress

    void resetPercentages() {
        displayPercentage.store(-1, std::memory_order_release);
        downloadPercentage.store(-1, std::memory_order_release);
        unzipPercentage.store(-1, std::memory_order_release);
        copyPercentage.store(-1, std::memory_order_release);
    }

} // namespace ult