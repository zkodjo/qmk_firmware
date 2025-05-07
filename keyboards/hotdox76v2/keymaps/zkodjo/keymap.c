// Copyright 2021 JasonRen(biu)
// Copyright 2022 Drashna Jael're (@Drashna Jael're)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

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
        KC_EQL,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_LEFT,             KC_RIGHT,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_EQL,             KC_Y,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_CAPS,  MT(MOD_LGUI,KC_A),    MT(MOD_LALT,KC_S),    MT(MOD_LCTL,KC_D),    MT(MOD_LSFT,KC_F),    KC_G,                                 KC_H,    MT(MOD_RSFT,KC_J),    MT(MOD_RCTL,KC_K),    MT(MOD_LALT,KC_L),    MT(MOD_RGUI,KC_SCLN), KC_QUOT,
        MOD_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_B,               KC_N,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        MOD_LCTL, KC_GRV,   CW_TOGG,   KC_LGUI, LT(2, KC_ESC),                                                LT(5, KC_DEL), KC_DOWN, KC_LEFT_BRACKET,   KC_RIGHT_BRACKET, KC_RCTL,
                                                     KC_NO,    KC_NO,               KC_NO, KC_NO,
                                                              KC_NO,            KC_NO,
                                            LT(1, KC_SPC), KC_TAB, KC_NO,             KC_NO, LT(4, KC_ENT), LT(3, KC_BSPC)
    ),
    /* Nav */
    [1] = LAYOUT_ergodox_pretty(
        KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,             KC_NO,    KC_NO,    KC_NO,    KC_8,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,             KC_NO,    KC_NO,    RCTL(KC_V),    RCTL(KC_C),    RCTL(KC_X),    RCTL(KC_Z),    KC_NO,
        KC_NO,  MOD_LGUI,    MOD_LALT,    MOD_LCTL,    MOD_LSFT,    KC_NO,             KC_CAPS,    KC_LEFT,    KC_DOWN,    KC_UP,    KC_RIGHT, KC_NO,
        KC_NO, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,               KC_NO,    KC_INS,    KC_HOME,    KC_PGDN, KC_PGUP,  KC_END, KC_NO,
        KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO,                                                KC_DEL, KC_NO, KC_NO,   KC_NO, KC_NO,
                                                     KC_NO,    KC_NO,               KC_NO, KC_NO,
                                                     KC_NO,            KC_NO,
                                                     KC_NO, KC_NO, KC_NO,             KC_NO, KC_ENT, KC_BSPC
    ),
    /* Media */
    [2] = LAYOUT_ergodox_pretty(
        KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,             KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,             KC_NO,    RM_TOGG,    RM_NEXT,    RM_HUEU,    RM_SATU,    RM_VALU,    RM_SPDU,
        KC_NO,  MOD_LGUI,    MOD_LALT,    MOD_LCTL,    MOD_LSFT,  KC_NO,              KC_NO,    KC_MPRV,    KC_VOLD,    KC_VOLU, KC_MNXT, KC_NO,    
        KC_NO, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,               KC_NO,    KC_NO,    RM_PREV,    RM_HUED, RM_SATD,  RM_VALD, RM_SPDD,
        KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO,                                                KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO,
                                                     KC_NO,    KC_NO,               KC_NO, KC_NO,
                                                              KC_NO,            KC_PGDN,
                                            KC_NO, KC_NO, KC_NO,             KC_MSTP, KC_MPLY, KC_KB_MUTE
    ),
    /* Num */
    [3] = LAYOUT_ergodox_pretty(
        KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,             KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,  KC_LEFT_BRACKET,    KC_7,    KC_8,    KC_9,    KC_RIGHT_BRACKET,    KC_NO,             KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,  KC_SCLN,    KC_4,    KC_5,    KC_6,    KC_EQUAL,                                 KC_NO,    KC_RSFT,    KC_RCTL,    KC_LALT,    KC_RGUI, KC_NO,
        KC_NO, KC_1,    KC_2,    KC_3,    KC_BSLS,    KC_NO,    KC_NO,               KC_NO,    KC_NO,    KC_NO,    KC_NO, KC_NO,  KC_NO, KC_NO,
        KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO,                                                KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO,
                                                     KC_NO,    KC_NO,               KC_NO, KC_NO,
                                                              KC_NO,            KC_NO,
                                            KC_DOT, KC_0, KC_MINUS,             KC_NO, KC_NO, KC_NO
    ),
    /* Sym*/
    [4] = LAYOUT_ergodox_pretty(
        KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,             KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,  KC_LCBR,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RCBR,    KC_NO,             KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_O,    KC_NO,    KC_NO,
        KC_NO,  KC_COLN,    KC_DLR,    KC_PERC,    KC_CIRC,    KC_PLUS,                                 KC_NO,    KC_RSFT,    KC_RCTL,    KC_LALT,    KC_RGUI, KC_NO,
        KC_NO, KC_TILD,    KC_EXLM,    KC_AT,    KC_HASH,    KC_PIPE,    KC_NO,               KC_NO,    KC_NO,    KC_NO,    KC_NO, KC_NO,  KC_NO, KC_NO,
        KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO,                                                KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO,
                                                     KC_NO,    KC_NO,               KC_NO, KC_NO,
                                                              KC_NO,            KC_NO,
                                            KC_LPRN, KC_RPRN, KC_UNDS,             KC_NO, KC_NO, KC_NO
    ),
    /* Fun */
    [5] = LAYOUT_ergodox_pretty(
        KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,             KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,  KC_F12,    KC_F7,    KC_F8,    KC_F9,    KC_PSCR,    KC_NO,             KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,  KC_F11,    KC_F4,    KC_F5,    KC_F6,    KC_SCRL,                                 KC_NO,    KC_RSFT,    KC_RCTL,    KC_LALT,    KC_RGUI, KC_NO,
        KC_NO, KC_F10,    KC_F1,    KC_F2,    KC_F3,    KC_PAUS,    KC_NO,               KC_NO,    KC_NO,    KC_NO,    KC_NO, KC_NO,  KC_NO, KC_NO,
        KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO,                                                KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO,
                                                     KC_NO,    KC_NO,               KC_NO, KC_NO,
                                                              KC_NO,            KC_NO,
                                            KC_APP, KC_SPC, KC_TAB,             KC_NO, KC_NO, KC_NO
    )
};
