/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */

#define MASTER_LEFT
//#define MASTER_RIGHT
//#define EE_HANDS

//#define QUICK_TAP_TERM 0
//#define TAPPING_TERM 100

//#ifdef RGBLIGHT_ENABLE
//    #define RGBLIGHT_EFFECT_BREATHING
//    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
//    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//    #define RGBLIGHT_EFFECT_SNAKE
//    #define RGBLIGHT_EFFECT_KNIGHT
//    #define RGBLIGHT_EFFECT_CHRISTMAS
//    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
//    #define RGBLIGHT_EFFECT_RGB_TEST
//    #define RGBLIGHT_EFFECT_ALTERNATING
//    #define RGBLIGHT_EFFECT_TWINKLE
//    #define RGBLIGHT_LIMIT_VAL 120
//    #define RGBLIGHT_HUE_STEP 10
//    #define RGBLIGHT_SAT_STEP 17
//    #define RGBLIGHT_VAL_STEP 17
//#endif
//
//#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"


// ###### Combos ######
#undef COMBO_TERM
#define COMBO_TERM 35
#define COMBO_MUST_TAP_PER_COMBO
#define COMBO_TERM_PER_COMBO
// All combos are specified from the base layer, so physical keys stay the same across all the other layers, saves space
#define COMBO_ONLY_FROM_LAYER 0 // https://docs.qmk.fm/features/combo#layer-independent-combos

// ###### Tap/Holds ######

// Differentiates between TAP and HOLD
#define TAPPING_TERM 180

// Means double-tap term. If < QUICK_TAP_TERM, then repeat the 'Tap' key, if > use the 'Mod/Layer' key. Zero value allegedly disables auto-repeat. Before known also as now deprecated 'TAPPING_FORCE_HOLD'
#define QUICK_TAP_TERM 0 // https://github.com/qmk/qmk_firmware/blob/master/docs/tap_hold.md#quick-tap-term

// Apply the modifier on keys that are tapped during a short hold of a modtap
#define PERMISSIVE_HOLD
// Immediately turn on layer if key is pressed quickly - don't want this one
//#define HOLD_ON_OTHER_KEY_PRESS // # https://github.com/qmk/qmk_firmware/blob/master/docs/tap_hold.md#hold-on-other-key-press


// ###### Mess ######
////----
////----
////----
//#ifdef RGBLIGHT_ENABLE
//#    define RGBLIGHT_DISABLE_KEYCODES
//#    define RGBLIGHT_LAYERS
//#endif
//
//// Home-row mods: https://precondition.github.io/home-row-mods#tap-hold-configuration-settings
//// Configure the global tapping term (default: 200ms)
//#define TAPPING_TERM_PER_KEY
//#ifdef TAPPING_TERM_PER_KEY
//#    define TAPPING_TERM 170
//#else
//// Only for thumbs
//#    define TAPPING_TERM 220
//#endif
//
//// Prevent normal rollover on alphas from accidentally triggering mods.
//// Now the default behavior!
//// #define IGNORE_MOD_TAP_INTERRUPT // glbjzf - DEPRECATED
//// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
//#define TAPPING_FORCE_HOLD
//// Apply the modifier on keys that are tapped during a short hold of a modtap
//#define PERMISSIVE_HOLD
//// Immediately turn on layer if key is pressed quickly
//#define HOLD_ON_OTHER_KEY_PRESS
//
//// Combos
//#undef COMBO_TERM
//#define COMBO_TERM 35
//#define COMBO_MUST_TAP_PER_COMBO
//#define COMBO_TERM_PER_COMBO
//// All combos are specified from the base layer, saves space
//#define COMBO_ONLY_FROM_LAYER 0
//
//#define DEFAULT_XCASE_SEPARATOR SE_MINS
//#define XCASE_DELIMITER_KEY SE_UNDS
//
//// Cannot import "keymap_swedish.h" as it sometimes generates extremely weird errors.
//#define LEADER_ESC_KEY KC_E
//
//// Not supported without flto
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION
////----
////----
////----


#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U // Timeout window in ms in which the double tap can occur.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED D5 // Specify an optional status LED by GPIO number which blinks when entering the bootloader
