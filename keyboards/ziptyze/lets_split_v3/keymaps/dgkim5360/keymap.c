/*
Copyright 2020 Danny Nguyen <danny@keeb.io>
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#define CTL_A LCTL_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define GUI_D LGUI_T(KC_D)
#define SFT_F LSFT_T(KC_F)
#define SFT_J RSFT_T(KC_J)
#define GUI_K RGUI_T(KC_K)
#define ALT_L LALT_T(KC_L)
#define CTL_SCLN RCTL_T(KC_SCLN)

#define NAV_ESC LT(LAYER_NAV, KC_ESC)
#define SYM_TAB LT(LAYER_SYM, KC_TAB)
#define NUM_SPC LT(LAYER_NUM, KC_SPC)
#define RGB_XXX LT(LAYER_RGB, XXXXXXX)
#define NUM_ENT LT(LAYER_NUM, KC_ENT)
#define SYM_BSPC LT(LAYER_SYM, KC_BSPC)
#define NAV_DEL LT(LAYER_NAV, KC_DEL)

enum layers {
    LAYER_BASE,
    LAYER_NAV,
    LAYER_NUM,
    LAYER_SYM,
    LAYER_RGB,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[LAYER_BASE] = LAYOUT_ortho_4x12(
   KC_GRV,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    XXXXXXX,
   KC_ESC,  CTL_A,   ALT_S,   GUI_D,   SFT_F,   KC_G,    KC_H,    SFT_J,   GUI_K,   ALT_L,   CTL_SCLN,KC_QUOT,
   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RALT,
   XXXXXXX, XXXXXXX, RGB_XXX, NAV_ESC, SYM_TAB, NUM_SPC, NUM_ENT, SYM_BSPC,NAV_DEL, RGB_XXX, XXXXXXX, XXXXXXX
),

[LAYER_NAV] = LAYOUT_ortho_4x12(
   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  XXXXXXX, KC_BSPC,
   XXXXXXX, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,XXXXXXX, XXXXXXX,
   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
   XXXXXXX, XXXXXXX, XXXXXXX, _______, KC_TAB,  KC_SPC,   KC_ENT, KC_BSPC, _______, XXXXXXX, XXXXXXX, XXXXXXX
),

[LAYER_NUM] = LAYOUT_ortho_4x12(
   XXXXXXX, XXXXXXX, KC_1,    KC_2,    KC_3,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
   XXXXXXX, XXXXXXX, KC_4,    KC_5,    KC_6,    XXXXXXX, XXXXXXX, KC_RSFT, KC_RGUI, KC_LALT, _______, _______,
   XXXXXXX, XXXXXXX, KC_7,    KC_8,    KC_9,    XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______,
   XXXXXXX, XXXXXXX, XXXXXXX, KC_0,    _______,  KC_SPC,  KC_ENT, _______,  KC_DEL, XXXXXXX, XXXXXXX, XXXXXXX
),

[LAYER_SYM] = LAYOUT_ortho_4x12(
   _______, KC_LPRN, KC_EXLM, KC_AT,   KC_HASH, KC_RPRN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
   XXXXXXX, KC_LBRC, KC_DLR,  KC_PERC, KC_CIRC, KC_RBRC, XXXXXXX, KC_RSFT, KC_RGUI, KC_LALT, _______, _______,
   XXXXXXX, KC_BSLS, KC_AMPR, KC_ASTR, KC_MINS, KC_EQL,  XXXXXXX, XXXXXXX, _______, _______, _______, _______,
   XXXXXXX, XXXXXXX, XXXXXXX, KC_PIPE, KC_UNDS, _______, _______, KC_BSPC, KC_DEL,  XXXXXXX, XXXXXXX, XXXXXXX
),

[LAYER_RGB] = LAYOUT_ortho_4x12(
   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_HUD, RGB_SAD, RGB_SAI, RGB_HUI, XXXXXXX, RGB_TOG,
   XXXXXXX, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, XXXXXXX, RGB_SPD, RGB_VAD, RGB_VAI, RGB_SPI, XXXXXXX, XXXXXXX,
   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_MOD, RGB_RMOD,XXXXXXX, XXXXXXX, XXXXXXX,
   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
)

};
