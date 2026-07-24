// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Backlight toggle combo: hold the top-left (A) and bottom-right (L) keys together
const uint16_t PROGMEM rgb_toggle_combo[] = {KC_A, KC_L, COMBO_END};

combo_t key_combos[] = {
    COMBO(rgb_toggle_combo, RM_TOGG),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │ A │ B │ C │
     * ├───┼───┼───┤
     * │ D │ E │ F │
     * ├───┼───┼───┤
     * │ G │ H │ I │
     * ├───┼───┼───┤
     * │ J │ K │ L │
     * └───┴───┴───┘
     */
    [0] = LAYOUT_ortho_4x3(
        KC_A,    KC_B,    KC_C,
        KC_D,    KC_E,    KC_F,
        KC_G,    KC_H,    KC_I,
        KC_J,    KC_K,    KC_L
    )
};