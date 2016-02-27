// This is the canonical layout file for the Quantum project. If you want to add another keyboard,
// this is the style you want to emulate.

#include "planck.h"
#ifdef BACKLIGHT_ENABLE
  #include "backlight.h"
#endif

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
//
// the layers are named after what the computer is set to in software.
// when used correctly all these leads to dvorak with special characters
// mapped to space plus key
#define _DV    0
#define _LW_DV 1
#define _RS_DV 2
#define _SP_DV 3

#define _QW_US    5
#define _LW_QW_US 6
#define _RS_QW_US 7
#define _SP_QW_US 8

#define _QW_SE    4
#define _LW_QW_SE 11
#define _RS_QW_SE 12
#define _SP_QW_SE 13

#define _SW 31



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_DV] = { /* Dvorak in softvare */
	{KC_TAB       , KC_Q   , KC_W   , KC_E   , KC_R      , KC_T              , KC_Y              , KC_U      , KC_I   , KC_O   , KC_P   , KC_BSPC },
	{CTL_T(KC_ESC), KC_A   , KC_S   , KC_D   , KC_F      , KC_G              , KC_H              , KC_J      , KC_K   , KC_L   , KC_SCLN, KC_ENT  },
	{KC_LSFT      , KC_Z   , KC_X   , KC_C   , KC_V      , KC_B              , KC_N              , KC_M      , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT },
	{KC_LALT      , KC_LEFT, KC_RGHT, KC_LGUI, MO(_LW_DV), LT(_SP_DV, KC_SPC), LT(_SP_DV, KC_SPC), MO(_RS_DV), KC_CAPS, KC_DOWN, KC_UP  , MO(_SW) }
},
[_LW_DV] = { /* LOWER (mirror) */
	{ KC_BSPC, KC_P   , KC_O   , KC_I   , KC_U   , KC_Y   , KC_TRNS, KC_PSCR  , KC_SLCK, KC_PAUS, KC_TRNS, KC_TRNS },
	{ KC_ENT , KC_SCLN, KC_L   , KC_K   , KC_J   , KC_H   , KC_TRNS, KC_INS   , KC_HOME, KC_PGUP, KC_TRNS, KC_TRNS },
	{ KC_TRNS, KC_SLSH, KC_DOT , KC_COMM, KC_M   , KC_N   , KC_TRNS, KC_DELETE, KC_END , KC_PGDN, KC_TRNS, KC_TRNS },
	{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }
},
[_RS_DV] = { /* RAISE (numpad)*/
	{ KC_TRNS, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_TRNS, RALT(KC_S), KC_7   , KC_8   , KC_9   , RALT(KC_COMMA), KC_TRNS},
	{ KC_TRNS, KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_TRNS, KC_Z      , KC_4   , KC_5   , KC_6   , KC_MINS       , KC_TRNS},
	{ KC_TRNS, KC_F9  , KC_F10 , KC_F11 , KC_F12 , KC_TRNS, KC_0      , KC_1   , KC_2   , KC_3   , KC_QUOT       , KC_TRNS},
	{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS   , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS       , KC_TRNS}
},
[_SP_DV] = {
	{KC_TRNS , RALT(KC_Q) , RALT(KC_W) , RALT(KC_E) , RALT(KC_R) , RALT(KC_T) , RALT(KC_Y) , RALT(KC_U) , RALT(KC_I)     , RALT(KC_O)   , RALT(KC_P)      , KC_TRNS } ,
	{KC_TRNS , RALT(KC_A) , RALT(KC_S) , RALT(KC_D) , RALT(KC_F) , RALT(KC_G) , RALT(KC_H) , RALT(KC_J) , RALT(KC_K)     , RALT(KC_L)   , RALT(KC_SCOLON) , KC_QUOT } ,
	{KC_TRNS , RALT(KC_Z) , RALT(KC_X) , RALT(KC_C) , RALT(KC_V) , RALT(KC_B) , RALT(KC_N) , RALT(KC_M) , RALT(KC_COMMA) , RALT(KC_DOT) , RALT(KC_SLSH)   , KC_TRNS } ,
	{KC_TRNS , KC_TRNS    , KC_TRNS    , KC_TRNS    , KC_TRNS    , KC_TRNS    , KC_TRNS    , KC_TRNS    , KC_TRNS        , KC_TRNS      , KC_TRNS         , KC_TRNS }
},

/*
	{}[]$"?&<>
	;/()|#^#'~
	:=@!\%`*,_
	*/

[_QW_US] = { /* English QWERTY to Dvorak */
	{KC_TAB       , KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_BSPC},
	{CTL_T(KC_ESC), KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_ENT },
	{KC_LSFT      , KC_DOT,  KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_RSFT },
	{KC_LALT      , KC_LEFT, KC_RGHT, KC_LGUI, MO(_LW_QW_US), LT(_SP_QW_US, KC_SPC), LT(_SP_QW_US, KC_SPC), MO(_RS_QW_US), KC_CAPS, KC_DOWN  , KC_UP, MO(_SW)}
},
[_LW_QW_US] = { /* LOWER (mirror) */
	{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR  , KC_SLCK, KC_PAUS,KC_TRNS,  KC_TRNS },
	{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INS   , KC_HOME, KC_PGUP,KC_TRNS,  KC_TRNS },
	{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DELETE, KC_END , KC_PGDN,KC_TRNS,  KC_TRNS },
	{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }
},
[_RS_QW_US] = { /* RAISE (numpad)*/
	{ KC_TRNS, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_TRNS, KC_SLSH, KC_7   , KC_8   , KC_9   , S(KC_8), KC_TRNS},
	{ KC_TRNS, KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_TRNS, KC_DOT , KC_4   , KC_5   , KC_6   , S(KC_EQL), KC_TRNS},
	{ KC_TRNS, KC_F9  , KC_F10 , KC_F11 , KC_F12 , KC_TRNS, KC_0   , KC_1   , KC_2   , KC_3   , KC_MINS, KC_TRNS},
	{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS}
},
[_SP_QW_US] = {
	{KC_TRNS , S(KC_LBRC) , S(KC_RBRC), KC_LBRC    , KC_RBRC    , S(KC_4)    , S(KC_QUOT) , S(KC_SLSH) , S(KC_7) , S(KC_COMM) , S(KC_DOT)  , KC_TRNS } ,
	{KC_TRNS , KC_SCLN    , KC_SLSH   , S(KC_9)    , S(KC_0)    , S(KC_BSLS) , S(KC_3)    , S(KC_6)    , S(KC_3) , KC_QUOT    , S(KC_NUHS) , KC_MINS } ,
	{KC_TRNS , S(KC_SCLN) , KC_EQL    , S(KC_2)    , S(KC_1)    , KC_BSLS    , S(KC_5)    , KC_NUHS    , S(KC_8) , KC_COMM    , S(KC_MINS) , KC_TRNS } ,
	{KC_TRNS , KC_TRNS    , KC_TRNS   , KC_TRNS    , KC_TRNS    , KC_TRNS    , KC_TRNS    , KC_TRNS    , KC_TRNS , KC_TRNS    , KC_TRNS    , KC_TRNS }
},

[_QW_SE] = { /* Swedish QWERTY to Dvorak */
	{KC_TAB,  KC_LBRC, KC_QUOT, KC_SCLN, KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_BSPC},
	{CTL_T(KC_ESC),    KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_ENT},
	{KC_LSFT, KC_DOT, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_RSFT },
	//{KC_LALT, KC_LEFT, KC_RGHT, KC_LGUI, MO(_LW_QW_SE), LT(_SP_QW_SE, KC_SPC), LT(_SP_QW_SE, KC_SPC), MO(_RS_QW_SE), KC_CAPS, KC_DOWN  , KC_UP, MO(_SW)}
	{KC_LALT, KC_LEFT, KC_RGHT, KC_LGUI, MO(_LW_QW_SE), LT(_SP_QW_SE, KC_SPC), LT(_SP_QW_SE, KC_SPC), MO(_RS_QW_SE), KC_CAPS, KC_DOWN  , KC_UP, MO(_SW)}
},
[_LW_QW_SE] = { /* LOWER (mirror) */
	{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR  , KC_SLCK, KC_PAUS,KC_TRNS,  KC_TRNS },
	{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INS   , KC_HOME, KC_PGUP,KC_TRNS,  KC_TRNS },
	{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DELETE, KC_END , KC_PGDN,KC_TRNS,  KC_TRNS },
	{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }
},
[_RS_QW_SE] = { /* RAISE (numpad)*/
	{ KC_TRNS, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_TRNS, S(KC_7), KC_7   , KC_8   , KC_9   , S(KC_8), KC_TRNS},
	{ KC_TRNS, KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_TRNS, KC_DOT , KC_4   , KC_5   , KC_6   , KC_MINS, KC_TRNS},
	{ KC_TRNS, KC_F9  , KC_F10 , KC_F11 , KC_F12 , KC_TRNS, KC_0   , KC_1   , KC_2   , KC_3   , KC_SLSH, KC_TRNS},
	{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS}
},
	// TODO this layout is missing the following characters:
	// < > | 
[_SP_QW_SE] = {
	{ KC_TRNS, RALT(KC_7), RALT(KC_0), RALT(KC_8), RALT(KC_9), RALT(KC_4)   , S(KC_2), S(KC_MINS), S(KC_6),  KC_TRNS  , KC_TRNS      , KC_TRNS },
	{ KC_TRNS, S(KC_COMM), S(KC_7)   , S(KC_8)   , S(KC_9)   , KC_TRNS      , S(KC_3), S(KC_RBRC), S(KC_3), KC_BSLS,  RALT(KC_RBRC), KC_SLSH },
	{ KC_TRNS, S(KC_DOT) , S(KC_0)    , RALT(KC_2), S(KC_1)   , RALT(KC_MINS), S(KC_5), KC_PLUS    , S(KC_BSLS)   , KC_COMM, S(KC_SLSH)   ,KC_TRNS },
	{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }
},
[_SW] = {
	{ DF(_DV)   , KC_A, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET },
	{ DF(_QW_US), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
	{ DF(_QW_SE), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
	{ KC_TRNS   , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }
},
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
