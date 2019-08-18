#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_all(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, LT(1,KC_GRV), 
		         KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
			 KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_ESC,
			 KC_LSFT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_END,
			 KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, KC_HOME, KC_ESC, KC_RCTL),
	[1] = LAYOUT_all(KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_NO, KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, KC_NO,
			 KC_NO, KC_NO, KC_LEFT, KC_UP, KC_RGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
			 KC_NO, KC_NO, KC_NO, KC_DOWN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
			 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME,
			 KC_NO, KC_NO, KC_NO, KC_NO, KC_UP, KC_DOWN, LCTL(LGUI(KC_LEFT)), LCTL(LGUI(KC_RGHT)))
};

                                 // 5            14
const keypos_t hand_swap_config[MATRIX_ROWS][MATRIX_COLS] = {
  {{13, 0}, {12, 0}, {11, 0}, {10, 0}, {9, 0}, {8,  0}, {7, 0}, {6, 0}, {5, 0}, {4, 0}, {3, 0}, {2, 0}, {1, 0}, {0, 0}},
  {{13, 1}, {12, 1}, {11, 1}, {10, 1}, {9, 1}, {8,  1}, {7, 1}, {6, 1}, {5, 1}, {4, 1}, {3, 1}, {2, 1}, {1, 1}, {0, 1}},
  {{12, 2}, {11, 2}, {10, 2}, {9, 2}, {8, 2}, {7,  2}, {6, 2}, {5, 2}, {4, 2}, {3, 2}, {2, 2}, {1, 2}, {0, 2}, {13, 2}},
  {{13, 3}, {12, 3}, {11, 3}, {10, 3}, {9, 3}, {8,  3}, {7, 3}, {6, 3}, {5, 3}, {4, 3}, {3, 3}, {2, 3}, {1, 3}, {0, 3}},
  {{13, 4}, {12, 4}, {11, 4}, {10, 4}, {9, 4}, {8,  4}, {7, 4}, {6, 4}, {5, 4}, {4, 4}, {3, 4}, {2, 4}, {1, 4}, {0, 4}},
};

