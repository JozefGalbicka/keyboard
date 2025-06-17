/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

// https://github.com/treeman/qmk_firmware/tree/master/keyboards/ferris/keymaps/treeman
#include QMK_KEYBOARD_H
#include <stdio.h>

#include "keycodes.h"
#include "layermodes.h"

#include "g/keymap_combo.h" // easier management of combos
                            //
#include "print.h"

#ifdef LAYOUT
    #undef LAYOUT
    #define LAYOUT LAYOUT_split_3x5_3
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
  //,--------------------------------------------.                    ,--------------------------------------------.
         KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
         KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
         KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                 _______,  MT_TAB, MT_SPC,      MT_BSPC,  MT_ESC, _______
                             //`--------------------------'  `--------------------------'
  ),

  [_SYM] = LAYOUT(
  //,-------------------------------------------.                     ,--------------------------------------------.
       KC_GRV, KC_LCBR, KC_RCBR, KC_TILD, KC_PIPE,                      KC_UNDS,  KC_EQL,   KC_LT,   KC_GT, KC_BSLS,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PLUS,                      KC_MINS, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      XXXXXXX, KC_LBRC, KC_RBRC, KC_PERC, XXXXXXX,                      XXXXXXX, KC_CIRC, KC_COMM,  KC_DOT, KC_SLSH,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                _______, _______,  _______,    _______, _______, _______
                             //`--------------------------'  `--------------------------'
  ),

  [_NUM] = LAYOUT(
  //,--------------------------------------------.                    ,--------------------------------------------.
      XXXXXXX, KC_PLUS, KC_ASTR, KC_MINS, XXXXXXX,                      XXXXXXX,    KC_H,    KC_J,    KC_K,    KC_L,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
         KC_1,    KC_2,    KC_3,    KC_4, XXXXXXX,                      XXXXXXX,    KC_7,    KC_8,    KC_9,    KC_0,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      XXXXXXX,    KC_X, XXXXXXX,    KC_5, XXXXXXX,                      KC_UNDS,    KC_6, KC_COMM,  KC_DOT, KC_SLSH,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                  _______,  KC_SPC,  KC_TAB,     CANCEL,  KC_ENT, _______
                                  //KC_ESC
                             //`--------------------------'  `-----------------------------'
  ),

//      G(SE_J), KC_LEFT, KC_UP, KC_RGHT, KC_HOME,      xxxxxxx, G(SE_W), G(SE_E), G(SE_R), xxxxxxx,
//      KC_PGUP, SC_TAB, DN_CTRL, C_TAB, G(SE_K),       xxxxxxx, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT,
//      KC_ENT, xxxxxxx, xxxxxxx, KC_PGDN, KC_END,      xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx,
//                                _______, _______,     WNAV,    _______
  [_NAV] = LAYOUT(
  //,--------------------------------------------.                    ,--------------------------------------------.
      XXXXXXX, KC_LEFT,   KC_UP, KC_RGHT, XXXXXXX,                         KC_H,    KC_J,    KC_K,    KC_L, XXXXXXX,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
         KC_A,  SC_TAB, DN_CTRL,   C_TAB, XXXXXXX,                      XXXXXXX,    KC_7,    KC_8,    KC_9,    KC_0,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      XXXXXXX,    KC_X, XXXXXXX,    KC_5, XXXXXXX,                      KC_UNDS,    KC_6, KC_COMM,  KC_DOT, KC_SLSH,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                  KC_ESC,  KC_SPC,  KC_TAB,     CANCEL,  KC_ENT, _______
                             //`--------------------------'  `-----------------------------'
  ),

  //[3] = LAYOUT_split_3x6_3(
  ////,--------------------------------------------.                    ,--------------------------------------------.
  //    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  ////|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
  //    RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  ////|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
  //    RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  ////|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
  //                               KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
  //                           //`--------------------------'  `--------------------------'
  //)
};



char keylog_str[24] = {};

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
  char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) { keycode = keycode & 0xFF; }
  if (keycode < 60) {
    name = code_to_name[keycode];
  }

  // update keylog
  snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
           record->event.key.row, record->event.key.col,
           keycode, name);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  uprintf("DEBUg: KL: kc: %u, col: %u, row: %u, pressed: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed);
  if (record->event.pressed) {
    set_keylog(keycode, record);
  }

  if (!process_num_word(keycode, record)) {
      return false;
  }

  switch (keycode) {
      case NUMWORD:
          process_num_word_activation(record);
          return false;
      case CANCEL:
          layer_off(_NUM);
          //layer_off(_SYM);
          //stop_leading();
          // disable_gaming();
          return false;
  }
  return true;
}


// ##############################
#ifdef OLED_ENABLE
// ##############################
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

#define L_BASE 0
#define L_LOWER 2
#define L_RAISE 4
#define L_ADJUST 8

void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (layer_state) {
        case L_BASE:
            oled_write_ln_P(PSTR("Default"), false);
            break;
        case L_LOWER:
            oled_write_ln_P(PSTR("Lower"), false);
            break;
        case L_RAISE:
            oled_write_ln_P(PSTR("Raise"), false);
            break;
        case L_ADJUST:
        case L_ADJUST|L_LOWER:
        case L_ADJUST|L_RAISE:
        case L_ADJUST|L_LOWER|L_RAISE:
            oled_write_ln_P(PSTR("Adjust"), false);
            break;
    }
}

void oled_render_keylog(void) {
    oled_write(keylog_str, false);
}

void render_bootmagic_status(bool status) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
        oled_render_keylog();
    } else {
        oled_render_logo();
    }
    return false;
}
#endif // OLED_ENABLE
