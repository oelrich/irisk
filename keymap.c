#include "iris.h"
#include "keymap_swedish.h"
#include "action_layer.h"
#include "eeconfig.h"

#define KC_AA NO_AA
#define KC_AE NO_AE
#define KC_OE NO_OSLH

#undef KC_AT
#define KC_AT NO_AT
#define KC_RSHFT KC_RSHIFT

extern keymap_config_t keymap_config;

#define _ATNRB 0
#define _CMD   1
#define _MOVE  2
#define _MOUSE 3
#define _NUMS  5
#define _MIDI  7

#define _SYMB  15

#define KC_ATNRB  TO(_ATNRB)
#define KC_CMD    TO(_CMD)
#define KC_MOVE   TO(_MOVE)
#define KC_MOUSE  TO(_MOUSE)
#define KC_NUMS   TO(_NUMS)
#define KC_MIDI   TO(_MIDI)

#define KC_SYMB   MO(_SYMB)
#define KC_TAB_M  LT(_MOVE, KC_TAB)
#define KC_BSPC_M LT(_NUMS, KC_BSPC)

#define KC_CTRL_A LCTL(KC_A)
#define KC_CTRL_S LCTL(KC_S)
#define KC_CTRL_N LCTL(KC_N)
#define KC_CTRL_F LCTL(KC_F)

#define KC_SPC_RALT  RALT_T(KC_SPC)
#define KC_ENT_LCTL  LCTL_T(KC_ENT)

#define KC_UNDO LCTL(KC_Z)
#define KC_REDO LCTL(KC_Y)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_ATNRB] = LAYOUT_kc(
    ESC,   F1, F2, F3, F4, F5,               F6, F7, F8, F9, F10, LGUI,
    NO,    X,  C,  AA, W,  Z,                AT, J,  P,  AE, Q,   NO,
    MOUSE, A,  T,  N,  R,  B,                Y,  O,  S,  I,  E,   MOVE,
    ATNRB, D,  M,  U,  K,  V,  LOCK,   ENT,  OE, G,  F,  H,  L,   NUMS,
           BSPC_M, ENT_LCTL, TAB_M,     SYMB, SPC_RALT, RSHFT),
  [_NUMS] = LAYOUT(
    KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,                                 KC_NUMLOCK, KC_CLEAR, KC_KP_SLASH, KC_KP_ASTERISK, KC_KP_MINUS, KC_TRNS,
    KC_TRNS, NO_COLN, NO_SCLN, NO_PIPE, KC_TILD, KC_PERCENT,                    KC_CALC,    KC_P7,    KC_P8,       KC_P9,          KC_KP_PLUS,  KC_TRNS,
    KC_TRNS, NO_LPRN, NO_RPRN, NO_LBRC, NO_RBRC, NO_AMPR,                       KC_KP_DOT,  KC_P4,    KC_P5,       KC_P6,          KC_KP_EQUAL, KC_TRNS,
    KC_TRNS, NO_LESS, NO_GRTR, NO_LESS, NO_GRTR, KC_EXLM,  KC_TRNS,   KC_TRNS,  KC_P0,      KC_P1,    KC_P2,       KC_P3,          KC_KP_COMMA, KC_TRNS,
                                        KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS),
  [_SYMB] = LAYOUT(
    KC_TRNS , KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS,
    KC_TRNS , NO_ACUT, NO_SLSH, NO_PIPE, NO_BSLS, KC_PERCENT,                   KC_HASH, NO_PLUS, NO_TILD, NO_EQL,  NO_GRV,  KC_TRNS,
    KC_TRNS , NO_QUES, NO_SCLN, KC_COMM, NO_APOS, NO_UNDS,                      NO_MINS, NO_QUO2, KC_DOT,  NO_COLN, KC_EXLM, KC_TRNS,
    KC_TRNS , NO_LESS, NO_LPRN, NO_LCBR, NO_LBRC, NO_AMPR, NO_CIRC,   NO_QUOT,  NO_ASTR, NO_RBRC, NO_RCBR, NO_RPRN, NO_GRTR, KC_TRNS,
                                         NO_EURO, NO_DLR, NO_PND,      KC_TRNS, NO_SECT, NO_BULT),
  [_MOVE] = LAYOUT_kc(
    TRNS, F11,       F12,     F13,     F14,        F15,                           F16,   F17,  F18,  F19,  F20,  TRNS,
    TRNS, MS_ACCEL0, MS_BTN5, MS_UP,   MS_WH_LEFT, MS_WH_RIGHT,                   COPY,  HOME, UP,   END,  PGUP, TRNS,
    TRNS, MS_ACCEL0, MS_LEFT, MS_DOWN, MS_RIGHT,   MS_WH_UP,                      CUT,   LEFT, DOWN, RGHT, PGDN, TRNS,
    TRNS, MS_ACCEL0, MS_BTN4, MS_BTN2, MS_BTN3,    MS_WH_DOWN, NO,     NO, PASTE, CTRL_A,  CTRL_S,  CTRL_N,  CTRL_F,  TRNS,
                                               TRNS, MS_BTN1, NO,        TRNS, UNDO, REDO),
  [_MOUSE] = LAYOUT_kc(
    TRNS, F11,       F12,     F13,     F14,        F15,         F16,           F17,        F18,         F19,         F20,       TRNS,
    TRNS, NO, MS_BTN5, NO,   MS_WH_LEFT, MS_WH_RIGHT,           NO,            MS_WH_LEFT, MS_UP,       MS_WH_RIGHT, MS_ACCEL0, TRNS,
    TRNS, NO, NO, NO, NO,   MS_WH_UP,                           MS_WH_UP,      MS_LEFT,    MS_DOWN,     MS_RIGHT,    MS_ACCEL1, TRNS,
    TRNS, NO, MS_BTN4, NO, NO,    MS_WH_DOWN, NO,           NO, MS_WH_DOWN, MS_WH_LEFT, MS_WH_RIGHT, CTRL_N,      MS_ACCEL2, TRNS,
                                        TRNS, NO, NO,        MS_BTN1, MS_BTN3, MS_BTN2)
};
