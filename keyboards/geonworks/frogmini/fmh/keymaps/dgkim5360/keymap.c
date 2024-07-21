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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_60_tsangan_hhkb( /* MacOS Base (CAGS) */
    KC_ESC,  KC_1,         KC_2,         KC_3,         KC_4,         KC_5,    KC_6, KC_7,        KC_8,        KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
    KC_TAB,  KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,    KC_Y, KC_U,        KC_I,        KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
    MO(3), LCTL_T(KC_A), LALT_T(KC_S), LGUI_T(KC_D), LSFT_T(KC_F), KC_G,    KC_H, RSFT_T(KC_J), RGUI_T(KC_K), LALT_T(KC_L), RCTL_T(KC_SCLN), KC_QUOT,          KC_ENT,
    SC_LSPO,               KC_Z,         KC_X,         KC_C,         KC_V,    KC_B, KC_N,        KC_M,        KC_COMM, KC_DOT,  KC_SLSH, SC_RSPC, TG(1),
    XXXXXXX, KC_LALT,      KC_LCTL,                                           KC_SPC,                               KC_RCTL, MO(4),   XXXXXXX
),
[1] = LAYOUT_60_tsangan_hhkb( /* Windows Base (GACS) */
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G,    KC_H, RSFT_T(KC_J), RCTL_T(KC_K), LALT_T(KC_L), RGUI_T(KC_SCLN), KC_QUOT,          KC_ENT,
    _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, TG(2),
    _______, KC_LGUI, KC_LALT,                            _______,                                     KC_RALT, _______, _______
),
[2] = LAYOUT_60_tsangan_hhkb( /* Windows Gaming */
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
    _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, TO(0),
    _______, XXXXXXX, KC_LALT,                            KC_SPC,                                      KC_RALT, KC_RGUI, _______
),
[3] = LAYOUT_60_tsangan_hhkb( /* Arrows */
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______,
    _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______, _______, _______, KC_DEL,
    _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,          _______,
    _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______,                            _______,                                     _______, _______, _______
),
[4] = LAYOUT_60_tsangan_hhkb( /* Numbers */
    _______, KC_7,    KC_8,    KC_9,    KC_PAST, _______, _______, _______, _______, _______, _______, _______, _______, _______, QK_BOOT,
    _______, KC_4,    KC_5,    KC_6,    KC_PSLS, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_1,    KC_2,    KC_3,    KC_PPLS, _______, _______, _______, _______, _______, _______, _______,          _______,
    _______,          KC_0,    KC_DOT,  KC_COMM, KC_PMNS, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______,                            _______,                                     _______, _______, _______
)
};
