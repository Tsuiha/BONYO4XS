/* Copyright 2025 Tsuiha
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
[0] = LAYOUT(
  KC_TAB,       KC_Q,    KC_W,    KC_E,  KC_R,   KC_T,         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,    KC_BSPC,
  LALT(KC_GRV), KC_A,    KC_S,    KC_D,  KC_F,   KC_G,         KC_H,    KC_J,    KC_K,    KC_L,   KC_MINS, KC_ENT,
  KC_LSFT,      KC_Z,    KC_X,    KC_C,  KC_V,   KC_B,         KC_N,    KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
  KC_LCTL,      KC_LGUI, KC_LALT, MO(3), MO(2), KC_SPC,        TG(1),   MO(3),  MO(2),    KC_RALT,KC_RGUI, KC_RCTL
  ),
[1] = LAYOUT(
  _______,      KC_DOT,  KC_P7,   KC_P8,   KC_P9,   KC_EQL,    KC_DOT,  KC_P7,   KC_P8,   KC_P9,  KC_NUM,  _______,
  _______,      KC_COMM, KC_P4,   KC_P5,   KC_P6,   KC_MINS,   KC_COMM, KC_P4,   KC_P5,   KC_P6,  _______, _______,
  _______,      KC_P0,   KC_P1,   KC_P2,   KC_P3,   KC_SLSH,   KC_P0,   KC_P1,   KC_P2,   KC_P3,  _______, _______,
  _______,      _______, _______, _______, _______, _______,   _______, _______, _______, _______,_______, _______
  ),
[2] = LAYOUT(
  KC_ESC,       S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5),   S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), KC_DEL,
  KC_0,         KC_1,    KC_2,    KC_3,    KC_4,    KC_5,      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
  _______,      KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  _______,      _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, KC_F12
  ),
[3] = LAYOUT(
  _______,      KC_PSCR,G(KC_PSCR),KC_ENT, _______, _______,   KC_GRV,  _______, KC_LBRC, KC_RBRC,KC_BSLS,  _______,
  _______,       _______, KC_UP,   KC_DEL, _______, _______,   _______, KC_UP,   KC_SCLN, KC_QUOT, KC_EQL,  _______,
  _______,      KC_LEFT, KC_DOWN, KC_RGHT, _______, KC_BSPC,   KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______,
  _______,      _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______
  )
};
