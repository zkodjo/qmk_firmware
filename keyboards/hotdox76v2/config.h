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

#define EE_HANDS
#define SPLIT_TRANSACTION_IDS_KB KEYBOARD_CURRENT_ALPA_SYNC
#define LAYER_STATE_8BIT
#define BOTH_SHIFTS_TURN_ON_CAPS_WORD
#define IGNORE_MOD_TAP_INTERRUPT

// fix VIA RGB_light
#define VIA_HAS_BROKEN_KEYCODES

/* remove these items for space-saving */
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_MUSIC_MODE
#define NO_ACTION_ONESHOT

/* from yandrstudio firmware */
#define DEBOUNCE 5
#define USB_POLLING_INTERVAL_MS 1

// fixes tapping term for macros
#undef TAPPING_TERM

#define TAPPING_TERM 180
#define QUICK_TAP_TERM 0

#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 170
#define RGBLIGHT_VAL_STEP 17
#define RGB_MATRIX_SLEEP true
/* RGB Animations */
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_DIGITAL_RAIN
#undef RGB_MATRIX_DEFAULT_MODE
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_BREATHING
#define RGB_MATRIX_DEFAULT_HUE 0
#define RGB_MATRIX_DEFAULT_SAT 255
#define RGB_MATRIX_DEFAULT_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
#define RGB_MATRIX_DEFAULT_SPD UINT8_MAX / 8



