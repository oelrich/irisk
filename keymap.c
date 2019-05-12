#include "iris.h"
#include "keymap_swedish.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

///// Layer definitions
// Scrolling over symbol array
#define _ONE   1
#define _TWO   1 + _ONE
#define _THREE 1 + _TWO
#define _FOUR  1 + _THREE
#define _FIVE  1 + _FOUR
#define _SIX   1 + _FIVE

// Named layers
#define _BASE  0
#define _TEXT  _ONE
#define _SYMB  _TWO
#define _CODE  _THREE
#define _NUMS  _FOUR
#define _UPPR  _FIVE
#define _FUNC  _SIX
#define _MOVE  7
#define _MOUS  8
#define _CTRL  9
#define _MIDI 10

///// Special key definitioins
// The special single key left over on the alpha layer.
/// Not always visible. Use for whatever (left pinky up)
#define MACR0  KC_AT
/// Rolling empty ...
#define MACR1 KC_AT
// Three outer keys on the left hand side
#define LEUPR MT(MOD_RALT, KC_ESC)
#define LEMID KC_LALT
#define LELOW TO(_BASE)
// Three outer keys on the right hand side
#define RIUPR KC_RGUI
#define RIMID KC_RCTRL
#define RILOW KC_RSHIFT
// Three thumb keys on the left hand side
#define LETIN LT(_NUMS, KC_BSPACE)
#define LETHO LT(_CODE, KC_ENTER)
#define LETOT LT(_CTRL, KC_LEAD)
// Three thumb keys on the right hand side
#define RITIN LT(_TEXT, KC_DEL)
#define RITHO LT(_SYMB, KC_SPACE)
#define RITOT LT(_MOVE, KC_TAB)

#define MS_UP KC_MS_UP
#define MS_DOWN KC_MS_DOWN
#define MS_LEFT KC_MS_LEFT
#define MS_RGHT KC_MS_RIGHT

#define MS_BTN1 KC_MS_BTN1
#define MS_BTN2 KC_MS_BTN2
#define MS_BTN3 KC_MS_BTN3
#define MS_BTN4 KC_MS_BTN4
#define MS_BTN5 KC_MS_BTN5

#define MS_SCUP KC_MS_WH_UP
#define MS_SCDN KC_MS_WH_DOWN
#define MS_SCLE KC_MS_WH_LEFT
#define MS_SCRI KC_MS_WH_RIGHT

#define MS_ACC0 KC_MS_ACCEL0
#define MS_ACC1 KC_MS_ACCEL1
#define MS_ACC2 KC_MS_ACCEL2

#define NO_PERC LSFT(KC_5)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    LEUPR, MACR0,   KC_C,    NO_AA,   KC_W,    KC_Z,                  KC_X,    KC_J,    KC_P,    NO_AE,   KC_Q,    RIUPR,
    LEMID, KC_A,    KC_T,    KC_N,    KC_R,    KC_B,                  KC_Y,    KC_O,    KC_S,    KC_I,    KC_E,    RIMID,
    LELOW, KC_D,    KC_M,    KC_U,    KC_K,    KC_V,    KC_NO, KC_NO, NO_OSLH, KC_G,    KC_F,    KC_H,    KC_L,    RILOW,
                                         LETIN, LETHO, LETOT,   RITOT, RITHO, RITIN),
  [_TEXT] = LAYOUT(
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    LEUPR, NO_ASTR, NO_AMPR, NO_AT,   NO_EQL,  NO_CIRC,               NO_TILD, NO_PERC, NO_UNDS, NO_PIPE, NO_SLSH, RIUPR,
    LEMID, NO_SCLN, KC_COMM, NO_QUES, NO_APOS, NO_ACUT,               NO_GRV,  NO_QUO2, KC_EXLM, KC_DOT,  NO_COLN, RIMID,
    LELOW, MACR1,   NO_QUOT, KC_HASH, NO_DLR,  NO_EURO, KC_NO, KC_NO, NO_BULT, NO_PND,  NO_SECT, NO_HALF, NO_BSLS, RILOW,
                                         LETIN, LETHO, LETOT,   RITOT, RITHO, RITIN),
  [_SYMB] = LAYOUT(
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    LEUPR, NO_PLUS, NO_LPRN, NO_LCBR, NO_LBRC, NO_LESS,               NO_GRTR, NO_RBRC, NO_RCBR, NO_RPRN, NO_MINS, RIUPR,
    LEMID, NO_ASTR, NO_AMPR, NO_AT,   NO_EQL,  NO_CIRC,               NO_TILD, NO_PERC, NO_UNDS, NO_PIPE, NO_SLSH, RIMID,
    LELOW, NO_SCLN, KC_COMM, NO_QUES, NO_APOS, NO_ACUT, KC_NO, KC_NO, NO_GRV,  NO_QUO2, KC_EXLM, KC_DOT,  NO_COLN, RILOW,
                                         LETIN, LETHO, LETOT,   RITOT, RITHO, RITIN),
  [_CODE] = LAYOUT(
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    LEUPR, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    RIUPR,
    LEMID, NO_PLUS, NO_LPRN, NO_LCBR, NO_LBRC, NO_LESS,               NO_GRTR, NO_RBRC, NO_RCBR, NO_RPRN, NO_MINS, RIMID,
    LELOW, NO_ASTR, NO_AMPR, NO_AT,   NO_EQL,  NO_CIRC, KC_NO, KC_NO, NO_TILD, NO_PERC, NO_UNDS, NO_PIPE, NO_SLSH, RILOW,
                                         LETIN, LETHO, LETOT,   RITOT, RITHO, RITIN),
  [_NUMS] = LAYOUT(
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    LEUPR, MACR1,   NO_QUOT, KC_HASH, NO_DLR,  NO_EURO,               NO_BULT, NO_PND,  NO_SECT, NO_HALF, NO_BSLS, RIUPR,
    LEMID, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    RIMID,
    LELOW, NO_PLUS, NO_LPRN, NO_LCBR, NO_LBRC, NO_LESS, KC_NO, KC_NO, NO_GRTR, NO_RBRC, NO_RCBR, NO_RPRN, NO_MINS, RILOW,
                                         LETIN, LETHO, LETOT,   RITOT, RITHO, RITIN),
  [_UPPR] = LAYOUT(
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    LEUPR, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                 KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  RIUPR,
    LEMID, MACR1,   NO_QUOT, KC_HASH, NO_DLR,  NO_EURO,               NO_BULT, NO_PND,  NO_SECT, NO_HALF, NO_BSLS, RIMID,
    LELOW, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_NO, KC_NO, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    RILOW,
                                         LETIN, LETHO, LETOT,   RITOT, RITHO, RITIN),
  [_FUNC] = LAYOUT(
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    LEUPR, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,                KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  RIUPR,
    LEMID, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                 KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  RIMID,
    LELOW, MACR1,   NO_QUOT, KC_HASH, NO_DLR,  NO_EURO, KC_NO, KC_NO, NO_BULT, NO_PND,  NO_SECT, NO_HALF, NO_BSLS, RILOW,
                                         LETIN, LETHO, LETOT,   RITOT, RITHO, RITIN),
  [_MOVE] = LAYOUT(
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    LEUPR, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,   KC_HOME, KC_UP,   KC_END,  KC_NO,   RIUPR,
    LEMID, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,   KC_LEFT, KC_DOWN, KC_RGHT, KC_PGUP, RIMID,
    LELOW, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_PGDN, RILOW,
                                         LETIN, LETHO, LETOT,   RITOT, RITHO, RITIN),
  [_MOUS] = LAYOUT(
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    LEUPR, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 MS_ACC2, MS_SCLE, MS_UP,   MS_SCRI, MS_BTN4, RIUPR,
    LEMID, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 MS_ACC0, MS_LEFT, MS_DOWN, MS_RGHT, MS_SCUP, RIMID,
    LELOW, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, MS_ACC1, MS_BTN1, MS_BTN2, MS_BTN3, MS_SCDN, RILOW,
                                         LETIN, LETHO, LETOT,   RITOT, RITHO, RITIN),
  [_CTRL] = LAYOUT(
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    LEUPR, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   RIUPR,
    LEMID, TO(1),   TO(2),   TO(3),   TO(4),   TO(5),                 TO(6),   TO(7),   TO(8),   TO(9),   TO(10),  RIMID,
    LELOW, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   RILOW,
                                         LETIN, LETHO, LETOT,   RITOT, RITHO, RITIN),
  [_MIDI] = LAYOUT(
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    LEUPR, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,                KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  RIUPR,
    LEMID, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                 KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  RIMID,
    LELOW, MACR1,   NO_QUOT, KC_HASH, NO_DLR,  NO_EURO, KC_NO, KC_NO, NO_BULT, NO_PND,  NO_SECT, NO_HALF, NO_BSLS, RILOW,
                                         LETIN, LETHO, LETOT,   RITOT, RITHO, RITIN)
};
