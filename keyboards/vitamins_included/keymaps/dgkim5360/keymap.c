// Copyright 2026 dgkim5360
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// The board is a 4x12 ortho split, but only the corne-equivalent 3x5+3 is used:
// each half keeps its outer five columns, and the inner column is left dead
// except for the two bottom keys holding ` and '.
//
// KC_RALT next to the right thumb cluster is the Hangul/English toggle: the
// Windows Korean IME treats right alt as 한/영. macOS uses ctrl-space instead.

#define CTL_A LCTL_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define GUI_D LGUI_T(KC_D)
#define SFT_F LSFT_T(KC_F)
#define SFT_J RSFT_T(KC_J)
#define GUI_K RGUI_T(KC_K)
#define ALT_L LALT_T(KC_L)
#define CTL_SCLN RCTL_T(KC_SCLN)

#define NAV_ESC LT(NAV, KC_ESC)
#define SYM_TAB LT(SYM, KC_TAB)
#define NUM_SPC LT(NUM, KC_SPC)
#define NUM_ENT LT(NUM, KC_ENT)
#define SYM_BSPC LT(SYM, KC_BSPC)
#define NAV_DEL LT(NAV, KC_DEL)

enum layers {
    BASE,
    NAV,
    NUM,
    SYM,
    FUN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

//        0        1        2        3        4        5    |    6        7        8        9        10       11
[BASE] = LAYOUT_ortho_4x12(
     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   XXXXXXX,  XXXXXXX,  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
     CTL_A,   ALT_S,   GUI_D,   SFT_F,   KC_G,   XXXXXXX,  XXXXXXX,  KC_H,    SFT_J,   GUI_K,   ALT_L,   CTL_SCLN,
     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_GRV,   KC_QUOT,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
     XXXXXXX, XXXXXXX, MO(FUN), NAV_ESC, SYM_TAB,NUM_SPC,  NUM_ENT,  SYM_BSPC,NAV_DEL, MO(FUN), KC_RALT, XXXXXXX
),

[NAV] = LAYOUT_ortho_4x12(
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX,  XXXXXXX,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,  XXXXXXX,
     KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, XXXXXXX,XXXXXXX,  XXXXXXX,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX,
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     XXXXXXX, XXXXXXX, XXXXXXX, _______, KC_TAB, KC_SPC,   KC_ENT,   KC_BSPC, _______, XXXXXXX, XXXXXXX, XXXXXXX
),

[NUM] = LAYOUT_ortho_4x12(
     XXXXXXX, KC_1,    KC_2,    KC_3,    XXXXXXX,XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     XXXXXXX, KC_4,    KC_5,    KC_6,    XXXXXXX,XXXXXXX,  XXXXXXX,  XXXXXXX, KC_RSFT, KC_RGUI, KC_LALT, _______,
     XXXXXXX, KC_7,    KC_8,    KC_9,    XXXXXXX,XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX, _______, _______, _______,
     XXXXXXX, XXXXXXX, XXXXXXX, KC_0,    _______,KC_SPC,   KC_ENT,   _______, KC_DEL,  XXXXXXX, XXXXXXX, XXXXXXX
),

[SYM] = LAYOUT_ortho_4x12(
     KC_LPRN, KC_EXLM, KC_AT,   KC_HASH, KC_RPRN,KC_LCBR,  XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     KC_LBRC, KC_DLR,  KC_PERC, KC_CIRC, KC_RBRC,KC_RCBR,  XXXXXXX,  XXXXXXX, KC_RSFT, KC_RGUI, KC_LALT, _______,
     KC_BSLS, KC_AMPR, KC_ASTR, KC_MINS, KC_EQL, KC_PLUS,  _______,  XXXXXXX, XXXXXXX, _______, _______, _______,
     XXXXXXX, XXXXXXX, XXXXXXX, KC_PIPE, KC_UNDS,_______,  _______,  KC_BSPC, KC_DEL,  XXXXXXX, XXXXXXX, XXXXXXX
),

// F1-F9 sit on the same nine keys the digits use on NUM, so the reach carries
// over. The layer key and QK_BOOT are mirrored onto both halves: flashing means
// connecting one half on its own, and a combo spanning both would be unusable.
[FUN] = LAYOUT_ortho_4x12(
     QK_BOOT, KC_F1,   KC_F2,   KC_F3,   KC_F10, KC_VOLU,  XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,
     XXXXXXX, KC_F4,   KC_F5,   KC_F6,   KC_F11, KC_VOLD,  XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     XXXXXXX, KC_F7,   KC_F8,   KC_F9,   KC_F12, KC_MUTE,  XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     XXXXXXX, XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY,KC_MNXT,  XXXXXXX,  XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX
)

};
