/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT(
		KC_J,    KC_K,    KC_L,
		KC_S,    KC_D,
		KC_SPC,  MO(1),
		KC_E,    KC_B,    KC_R,
		KC_S,    KC_D,
		KC_J,    KC_K,    KC_L,
		KC_4,  KC_SPC,
		KC_3,    KC_1,    KC_2
	),

	[1] = LAYOUT(
		KC_J,    KC_K,    KC_L,
		KC_S,    KC_D,
		KC_ESC,  MO(1),
		KC_E,    KC_B,    KC_R,
		KC_S,    KC_D,
		KC_J,    KC_K,    KC_L,
		KC_4,  KC_ESC,
		KC_3,    KC_1,    KC_2
	),

	[2] = LAYOUT(
		KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS
	),

	[3] = LAYOUT(
		KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS
	),

};
