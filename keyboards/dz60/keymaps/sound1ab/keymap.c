#include QMK_KEYBOARD_H

// LAYERS
#define _QWERTY 0      // QWERTY layer
#define _QW _QWERTY

#define _FUNCTION 1    // Function layer
#define _FN _FUNCTION

#define _CONTROL 2     // Control layer
#define _CN _CONTROL

#define MO_FN MO(1)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT_60_iso_sound1ab(
        //       2        3        4        5        6        7        8        9        10       11       12       13       14       15       16
        KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT,
        KC_LSFT, KC_GRAVE, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   BL_TOGG,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             TO(0),   TO(1),   KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [_FUNCTION] = LAYOUT_60_iso_sound1ab(
        //       2        3        4        5        6        7        8        9        10       11       12       13       14       15       16
        KC_GESC, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT,
        KC_LSFT, KC_GRAVE, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   RGB_TOG,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             TO(0),   TO(2),   KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [_CONTROL] = LAYOUT_60_iso_sound1ab(
        //       2        3         4        5         6         7        8        9        10       11       12       13       14       15       16
        _______, RGB_M_P, RGB_M_B,  RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, _______, _______, _______, _______, _______,
        _______, RGB_MOD, RGB_RMOD, RGB_HUI, RGB_HUD,  RGB_SAI,  RGB_SAD, RGB_VAI, RGB_VAD, RGB_SPI, RGB_SPD, _______, _______,
        _______, BL_STEP, BL_INC,   BL_DEC,  BL_BRTG,  _______,  _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,  _______, _______,  _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,                               _______,                            TO(0),   TO(0),   BL_TOGG, RGB_TOG, _______
    ),
};
