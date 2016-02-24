// This is the canonical layout file for the Quantum project. If you want to add another keyboard,
// this is the style you want to emulate.
//
// NOTE: the layout is designed to be used with my custom layout

#include "planck.h"
#ifdef BACKLIGHT_ENABLE
  #include "backlight.h"
#endif

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QW 0
//#define _CM 1
//#define _DV 2
#define _LW 3
#define _RS 4
// when space is held
#define _SP 5

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QW] = { /* Qwerty */
  {KC_TAB       , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T  , KC_Y   , KC_U  , KC_I   , KC_O   , KC_P   , KC_BSPC} ,
  {CTL_T(KC_ESC), KC_A   , KC_S   , KC_D   , KC_F   , KC_G  , KC_H   , KC_J  , KC_K   , KC_L   , KC_SCLN, KC_ENT}  ,
  {KC_LSFT      , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B  , KC_N   , KC_M  , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT },
  {KC_LALT         , KC_LEFT, KC_RGHT, KC_LGUI, MO(_LW), LT(_SP, KC_SPC), LT(_SP, KC_SPC), MO(_RS), KC_RALT, KC_DOWN  , KC_UP, RESET}
},
	/*
[_CM] = { / * Colemak * /
  {KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_BSPC},
  {KC_ESC,  KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT},
  {KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT },
  {M(0),    KC_LCTL, KC_LALT, KC_LGUI, MO(_LW), KC_SPC,  KC_SPC,  MO(_RS), KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT}
},
[_DV] = { / * Dvorak * /
  {KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_BSPC},
  {KC_ESC,  KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_SLSH},
  {KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_ENT },
  {M(0),    KC_LCTL, KC_LALT, KC_LGUI, MO(_LW), KC_SPC,  KC_SPC,  MO(_RS), KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT}
},
*/
[_RS] = { /* RAISE */
  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RALT(KC_S), KC_7   , KC_8   , KC_9   , RALT(KC_COMMA), KC_TRNS},
  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_Z   , KC_4   , KC_5   , KC_6   , KC_MINS, KC_TRNS},
  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_0   , KC_1   , KC_2   , KC_3   , KC_QUOT, KC_TRNS},
  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS}
},
  /*
[_LW] = { / * LOWER * /
  {KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC},
  {KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE},
  {KC_TRNS, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  DF(_QW), DF(_CM), DF(_DV), RESET,   KC_TRNS},
  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY}
}
*/
[_LW] = {
	{ KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS },
	{ KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS },
	{ KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS },
	{ KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS }
},
/*
	{}[]$"?&<>
	;/()|#^#'~
	:=@!\%`*,_
*/
	/*
[_SP] = {
	{KC_TRNS, RALT(KC_7), RALT(KC_0), RALT(KC_8), RALT(KC_9), RALT(KC_4), S(KC_2), S(KC_MINS), S(KC_6), KC_TRNS, KC_TRNS, KC_TRNS },
	{KC_TRNS, S(KC_COMM), S(KC_7), S(KC_8), S(KC_9), KC_TRNS, S(KC_3), KC_TRNS, S(KC_3), KC_TRNS, KC_TRNS, KC_TRNS },
	{KC_TRNS, KC_TRNS   , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
	{KC_TRNS, KC_TRNS   , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }
}
*/
[_SP] = {
	{KC_TRNS, RALT(KC_Q), RALT(KC_W), RALT(KC_E), RALT(KC_R), RALT(KC_T), RALT(KC_Y), RALT(KC_U), RALT(KC_I), RALT(KC_O), RALT(KC_P),  KC_TRNS },
	{KC_TRNS, RALT(KC_A), RALT(KC_S), RALT(KC_D), RALT(KC_F), RALT(KC_G), RALT(KC_H), RALT(KC_J), RALT(KC_K), RALT(KC_L), RALT(KC_SCOLON), KC_TRNS },
	{KC_TRNS, RALT(KC_Z), RALT(KC_X), RALT(KC_C), RALT(KC_V), RALT(KC_B), RALT(KC_N), RALT(KC_M), RALT(KC_COMMA), RALT(KC_DOT), RALT(KC_SLSH), KC_TRNS },
	//{KC_TRNS, RALT(KC_), RALT(KC_), RALT(KC_), RALT(KC_), RALT(KC_), RALT(KC_), RALT(KC_), RALT(KC_), RALT(KC_), RALT(KC_), KC_TRNS }
	{KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }
}
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
            #ifdef BACKLIGHT_ENABLE
              backlight_step();
            #endif
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};
