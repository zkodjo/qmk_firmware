// Copyright 2021 JasonRen(biu)
// Copyright 2022 Drashna Jael're (@Drashna Jael're)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Left-hand home row mods - QWERTY
#define HOME_A LGUI_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LCTL_T(KC_D)
#define HOME_F LSFT_T(KC_F)

// Right-hand home row mods - QWERTY
#define HOME_J RSFT_T(KC_J)
#define HOME_K RCTL_T(KC_K)
#define HOME_L RALT_T(KC_L)
#define HOME_SCLN RGUI_T(KC_SCLN)

// Left-hand home row mods - Colemak-DH
#define HOME_A LGUI_T(KC_A)
#define HOME_R LALT_T(KC_R)
#define HOME_T LSFT_T(KC_T)

// Right-hand home row mods - Colemak-DH
#define HOME_N RSFT_T(KC_N)
#define HOME_E RCTL_T(KC_E)
#define HOME_I RALT_T(KC_I)
#define HOME_O RGUI_T(KC_O)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌──────┬───┬───┬───┬───┬───┬───┐                     ┌───┬───┬───┬───┬───┬───┬──────┐
     * │ =    │ 1 │ 2 │ 3 │ 4 │ 5 │← │                     │ →│ 6 │ 7 │ 8 │ 9 │ 0 │   -  │
     * ├──────┼───┼───┼───┼───┼───┼───┤                     ├───┼───┼───┼───┼───┼───┼──────┤
     * │ Del  │ Q │ W │ E │ R │ T │ = │                     │ Y │ Y │ U │ I │ O │ P │    \ │
     * ├──────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │Bkspce│ A │ S │ D │ F │ G ├───┤                     ├───┤ H │ J │ K │ L │ ; │    ' │
     * ├──────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │Shift │ Z │ X │ C │ V │ B │ B │                     │ N │ N │ M │ , │ . │ / │ Shift│
     * └──┬───┼───┼───┼───┼───┼───┴───┘ ┌───┬───┐ ┌───┬───┐ └───┴───┼───┼───┼───┼───┼───┬──┘
     *    │ ` │   │   │GUI│Esc│         │   │   │ │   │   │         │ ←│ ↓│ ↑│ →│GUI│
     *    └───┴───┴───┴───┴───┘     ┌───┼───┼───┤ ├───┼───┼───┐     └───┴───┴───┴───┴───
     *                              │   │   │PgU│ │PgD│   │   │
     *                              │Spc│Tab├───┤ ├───┤Ent│Bsp│
     *                              │   │   │Del│ │Ctl│   │   │
     *                              └───┴───┴───┘ └───┴───┴───┘
     */
    [0] = LAYOUT_ergodox_pretty(
        KC_EQL,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_NO,             KC_NO,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_NO,             KC_NO,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_CAPS,  HOME_A,    HOME_S,    HOME_D,    HOME_F,    KC_G,                                 KC_H,    HOME_J,    HOME_K,    HOME_L,    HOME_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LEFT_BRACKET,               KC_RIGHT_BRACKET,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_NO, KC_GRV,   KC_LGUI,   KC_LALT, LT(2, KC_ESC),                                                LT(5, KC_DEL), KC_DOWN, KC_LEFT_BRACKET,   KC_RIGHT_BRACKET, KC_NO,
                                                     TG(6),    KC_NO,               KC_NO, TG(7),
                                                              KC_NO,            KC_NO,
                                            LT(1, KC_BSPC), KC_TAB, KC_NO,             KC_NO, LT(4, KC_ENT), LT(3, KC_SPC)
    ),
    /* Nav */
    [1] = LAYOUT_ergodox_pretty(
        KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO     ,    KC_NO,    KC_NO,     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,             KC_NO,    KC_NO,    RCTL(KC_V),    RCTL(KC_C),    RCTL(KC_X),    RCTL(KC_Z),    KC_NO,
        KC_NO,  KC_LGUI,    KC_LALT,    KC_LCTL,    KC_LSFT,    KC_NO,             KC_CAPS,    KC_LEFT,    KC_DOWN,    KC_UP,    KC_RIGHT, KC_NO,
        KC_NO, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,               KC_NO,    KC_INS,    KC_HOME,    KC_PGDN, KC_PGUP,  KC_END, KC_NO,
        KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO,                                                KC_DEL, KC_NO, KC_NO,   KC_NO, KC_NO,
        KC_TRNS,    KC_NO,               KC_NO, KC_NO,
                                                     KC_NO,            KC_NO,
                                                     KC_NO, KC_NO, KC_NO,             KC_NO, KC_ENT, KC_BSPC
    ),
    /* Media */
    [2] = LAYOUT_ergodox_pretty(
        KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,             KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,             KC_NO,    RM_TOGG,    RM_NEXT,    RM_HUEU,    RM_SATU,    RM_VALU,    RM_SPDU,
        KC_NO,  KC_LGUI,    KC_LALT,   KC_LCTL,    KC_LSFT,  KC_NO,              KC_NO,    KC_MPRV,    KC_VOLD,    KC_VOLU, KC_MNXT, KC_NO,    
        KC_NO, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,               KC_NO,    KC_NO,    RM_PREV,    RM_HUED, RM_SATD,  RM_VALD, RM_SPDD,
        KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO,                                                KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO,
                                                     KC_TRNS,    KC_NO,               KC_NO, KC_TRNS,
                                                              KC_NO,            KC_PGDN,
                                            KC_NO, KC_NO, KC_NO,             KC_MSTP, KC_MPLY, KC_KB_MUTE
    ),
    /* Num */
    [3] = LAYOUT_ergodox_pretty(
        KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,             KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,  KC_LEFT_BRACKET,    KC_7,    KC_8,    KC_9,    KC_RIGHT_BRACKET,    KC_NO,             KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,  KC_SCLN,    KC_4,    KC_5,    KC_6,    KC_EQUAL,                                 KC_NO,    KC_RSFT,    KC_RCTL,    KC_RALT,    KC_RGUI, KC_NO,
        KC_NO, KC_1,    KC_2,    KC_3,    KC_BSLS,    KC_NO,    KC_NO,               KC_NO,    KC_NO,    KC_NO,    KC_NO, KC_NO,  KC_NO, KC_NO,
        KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO,                                                KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO,
                                                     KC_TRNS,    KC_NO,               KC_NO, KC_TRNS,
                                                              KC_NO,            KC_NO,
                                            KC_DOT, KC_0, KC_MINUS,             KC_NO, KC_NO, KC_NO
    ),
    /* Sym*/
    [4] = LAYOUT_ergodox_pretty(
        KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,             KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,  KC_LCBR,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RCBR,    KC_NO,             KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_O,    KC_NO,    KC_NO,
        KC_NO,  KC_COLN,    KC_DLR,    KC_PERC,    KC_CIRC,    KC_PLUS,                                 KC_NO,    KC_RSFT,    KC_RCTL,    KC_RALT,    KC_RGUI, KC_NO,
        KC_NO, KC_TILD,    KC_EXLM,    KC_AT,    KC_HASH,    KC_PIPE,    KC_NO,               KC_NO,    KC_NO,    KC_NO,    KC_NO, KC_NO,  KC_NO, KC_NO,
        KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO,                                                KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO,
                                                     KC_TRNS,    KC_NO,               KC_NO, KC_TRNS,
                                                              KC_NO,            KC_NO,
                                            KC_LPRN, KC_RPRN, KC_UNDS,             KC_NO, KC_NO, KC_NO
    ),
    /* Fun */
    [5] = LAYOUT_ergodox_pretty(
        KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,             KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,  KC_F12,    KC_F7,    KC_F8,    KC_F9,    KC_PSCR,    KC_NO,             KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,  KC_F11,    KC_F4,    KC_F5,    KC_F6,    KC_SCRL,                                 KC_NO,    KC_RSFT,    KC_RCTL,    KC_RALT,    KC_RGUI, KC_NO,
        KC_NO, KC_F10,    KC_F1,    KC_F2,    KC_F3,    KC_PAUS,    KC_NO,               KC_NO,    KC_NO,    KC_NO,    KC_NO, KC_NO,  KC_NO, KC_NO,
        KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO,                                                KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO,
                                                     KC_TRNS,    KC_NO,               KC_NO, KC_TRNS,
                                                              KC_NO,            KC_NO,
                                            KC_APP, KC_SPC, KC_TAB,             KC_NO, KC_NO, KC_NO
    ),
    /* Game mode */
    [6] = LAYOUT_ergodox_pretty(
        KC_EQL,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_LEFT,             KC_RIGHT,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_EQL,             KC_Y,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_CAPS,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                 KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LEFT_BRACKET,               KC_RIGHT_BRACKET,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_GRV, KC_LCTL,   KC_LGUI,   KC_LALT, KC_ESC,                                                KC_DEL, KC_DOWN, KC_LEFT_BRACKET,   KC_RIGHT_BRACKET, KC_RCTL,
                                                     KC_TRNS,    KC_NO,               KC_NO, KC_TRNS,
                                                              KC_NO,            KC_NO,
                                            KC_BSPC, KC_TAB, KC_NO,             KC_NO, KC_ENT,KC_SPC
    ),
    /* Colemak-DH */
    [7] = LAYOUT_ergodox_pretty(
        KC_EQL,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_LEFT,             KC_RIGHT,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    KC_EQL,             KC_J,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,    KC_BSLS,
        KC_CAPS,  HOME_A, HOME_R, HOME_S, HOME_T, KC_G, KC_M, HOME_N, HOME_E, HOME_I, HOME_O,  KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    KC_LEFT_BRACKET,               KC_RIGHT_BRACKET,    KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_NO, KC_GRV,   KC_LGUI,   KC_LALT, LT(2, KC_ESC),                                                LT(5, KC_DEL), KC_LEFT, KC_DOWN,   KC_UP, KC_NO,
                                                     KC_TRNS,    KC_NO,               KC_NO, KC_TRNS,
                                                              KC_NO,            KC_NO,
                                                              LT(1, KC_BSPC), KC_TAB, KC_NO,             KC_NO, LT(4, KC_ENT), LT(3, KC_SPC)
    )
};
