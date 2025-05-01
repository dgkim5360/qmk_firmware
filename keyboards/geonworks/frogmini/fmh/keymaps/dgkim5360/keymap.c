/* Copyright 2020 Gondolindrim
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
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


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_60_tsangan_hhkb( /* Home Row Mods Alphas */
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
    KC_LCTL, CTL_A,   ALT_S,   GUI_D,   SFT_F,   KC_G,    KC_H,    SFT_J,   GUI_K,   ALT_L,   CTL_SCLN,KC_QUOT,          KC_ENT,
    SC_LSPO,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, SC_RSPC, TG(1),
    XXXXXXX, XXXXXXX, XXXXXXX,                            LT(KC_SPC, 2),                               KC_LALT, MO(3),   XXXXXXX
),
[1] = LAYOUT_60_tsangan_hhkb( /* Gaming Alphas */
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
    KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, TG(0),
    XXXXXXX, XXXXXXX, KC_LALT,                            KC_SPC,                                      KC_RALT, KC_RGUI, XXXXXXX
),
[2] = LAYOUT_60_tsangan_hhkb( /* Arrows */
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______,
    _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______, _______, _______, KC_DEL,
    _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,          _______,
    _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______,                            _______,                                     _______, _______, _______
),
[3] = LAYOUT_60_tsangan_hhkb( /* Numbers */
    _______, KC_1,    KC_2,    KC_3,    KC_PAST, _______, _______, _______, _______, _______, _______, _______, _______, _______, QK_BOOT,
    _______, KC_4,    KC_5,    KC_6,    KC_PSLS, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_7,    KC_8,    KC_9,    KC_PPLS, _______, _______, _______, _______, _______, _______, _______,          _______,
    _______,          KC_0,    KC_DOT,  KC_COMM, KC_PMNS, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______,                            _______,                                     _______, _______, _______
)
};
