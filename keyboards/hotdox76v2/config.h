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
#define DYNAMIC_KEYMAP_LAYER_COUNT 6
#define DYNAMIC_KEYMAP_MACRO_COUNT 8
#define LAYER_STATE_8BIT

/* remove these items for space-saving */
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_MUSIC_MODE
#define NO_ACTION_ONESHOT

// fixes Macro tapping term
#undef TAPPING_TERM

#define TAPPING_TERM 220

/* RGB Animations */
#define ENABLE_RGB_MATRIX_BREATHING
#define RGB_MATRIX_DEFAULT_HUE 0
#define RGB_MATRIX_DEFAULT_VALUE 75
#define RGB_MATRIX_DEFAULT_SAT 255

