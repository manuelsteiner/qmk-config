#include QMK_KEYBOARD_H

enum layer_names {
    BASE_LAYER,
    NUM_NAV_LAYER,
    SYMBOLS_LAYER,
    FUNCTIONS_LAYER,
    HARDWARE_LAYER,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[BASE_LAYER] = LAYOUT_split_3x5_2(
		KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
		LSFT(KC_A), LCTL_T(KC_S), LALT_T(KC_D), LGUI_T(KC_F), KC_G, KC_H, RGUI_T(KC_J), RALT_T(KC_K), RCTL_T(KC_L), RSFT_T(KC_QUOT),
		KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,
		LT(NUM_NAV_LAYER, KC_TAB), LT(FUNCTIONS_LAYER, KC_ENT), LT(HARDWARE_LAYER, KC_BSPC), LT(NUM_NAV_LAYER, KC_BSPC)
	),

	[NUM_NAV_LAYER] = LAYOUT_split_3x5_2(
		KC_TRNS, KC_7, KC_8, KC_9, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_4, KC_5, KC_6, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_TRNS,
		KC_0, KC_1, KC_2, KC_3, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	),

	[SYMBOLS_LAYER] = LAYOUT_split_3x5_2(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LBRC, KC_RBRC, KC_AMPR, KC_ASTR, KC_BSLS, KC_PIPE,
		KC_TRNS, KC_TILD, KC_MINS, KC_EQL, KC_LPRN, KC_RPRN, KC_DLR, KC_PERC, KC_CIRC, KC_SCLN,
		KC_TRNS, KC_GRV, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_EXLM, KC_AT, KC_HASH, KC_COLN,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	),

	[FUNCTIONS_LAYER] = LAYOUT_split_3x5_2(
		KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS, KC_TRNS,
		KC_F5, KC_F6, KC_F7, KC_F8, KC_TRNS, KC_MPRV, KC_MPLY, KC_MSTP, KC_MNXT, KC_TRNS,
		KC_F1, KC_F2, KC_F3, KC_F4, KC_TRNS, KC_TRNS, KC_BRID, KC_BRIU, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	),

	[HARDWARE_LAYER] = LAYOUT_split_3x5_2(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		QK_RBT, QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, AG_SWAP, KC_TRNS, KC_TRNS, QK_BOOT, QK_RBT,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	)
};
