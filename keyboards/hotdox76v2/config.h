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
#define LAYER_STATE_8BIT

// fix VIA RGB_light
#define VIA_HAS_BROKEN_KEYCODES

/* remove these items for space-saving */
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_MUSIC_MODE
#define NO_ACTION_ONESHOT

/* from yandrstudio firmware */
#define DEBOUNCE 2
#define USB_POLLING_INTERVAL_MS 1

// fixes Macro tapping term
#undef TAPPING_TERM

#define TAPPING_TERM 200
#define QUICK_TAP_TERM 0
#define IGNORE_MOD_TAP_INTERRUPT
/* RGN Matrix */
#ifdef RGB_MATRIX_ENABLE

    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 160
    #define RGBLIGHT_VAL_STEP 16
    #define RGB_DISABLE_WHEN_USB_SUSPENDED true
    /* RGB Animations */
    #define ENABLE_RGB_MATRIX_BREATHING
    #define ENABLE_RGB_MATRIX_DIGITAL_RAIN
    #define ENABLE_RGB_MATRIX_RIVERFLOW
    #define ENABLE_RGB_MATRIX_BAND_VAL
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
    #define ENABLE_RBG_MATRIX_SOLID_REACTIVE_MULTIWIDE
    #define ENABLE_RGB_MATRIX_SPLASH
    #define ENABLE_RGB_MATRIX_SOLID_MULITSPLASH
    #define ENABLE_RGB_MATRIX_SOLID_SPLASH
    // #    define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_RGB
#endif




