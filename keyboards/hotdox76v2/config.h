// Copyright 2021 JasonRen(biu)
// Copyright 2022 Drashna Jael're (@Drashna Jael're)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
#define EE_HANDS
#define SPLIT_TRANSACTION_IDS_KB KEYBOARD_CURRENT_ALPA_SYNC
// #define DYNAMIC_KEYMAP_LAYER_COUNT 6
// #define DYNAMIC_KEYMAP_MACRO_COUNT 8
#define LAYER_STATE_8BIT

/* remove these items for space-saving */
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_MUSIC_MODE
#define NO_ACTION_ONESHOT

/* from yandrstudio firmware */
#define FORCE_NKRO
#define DEBOUNCE 5
#define USB_POLLING_INTERVAL_MS 1

#define TAP_CODE_DELAY 15


/* from yandrstudio configure keyboard sync */
#ifdef SPLIT_KEYBOARD

// #   define MASTER_RIGHT

#   define USE_SERIAL

#   define SOFT_SERIAL_PIN D2

#   define SPLIT_TRANSPORT_MIRROR

// #   define SPLIT_USB_DETECT

#   define SPLIT_MODS_ENABLE
#   define SPLIT_LAYER_STATE_ENABLE
#   define SPLIT_LED_STATE_ENABLE
#   define SPLIT_OLED_ENABLE
#   define SPLIT_TRANSACTION_IDS_KB KEYBOARD_CURRENT_ALPA_SYNC

#endif

#ifdef RGBLIGHT_ENABLE

#    define RGBLIGHT_SPLIT
#    define RGBLED_SPLIT {43, 43}
#    define RGB_DI_PIN D3
#    define RGBLED_NUM (43*2)
#    define DRIVER_LED_TOTAL RGBLED_NUM
#    define RGBLIGHT_LIMIT_VAL 150
#    define RGBLIGHT_SLEEP
#    define WS2812_TRST_US 100
// #    define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_RGB
#endif

// fixes Macro tapping term
#undef TAPPING_TERM

#define TAPPING_TERM 220
#define QUICK_TAP_TERM 0

/* RGB Animations */
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_DIGITAL_RAIN
#define ENABLE_RGB_MATRIX_RIVERFLOW
#define RGB_MATRIX_DEFAULT_HUE 0
#define RGB_MATRIX_DEFAULT_VALUE 75
#define RGB_MATRIX_DEFAULT_SAT 255

