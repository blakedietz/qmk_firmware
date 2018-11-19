// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include "chimera_ergo.h"


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum chimera_ergo_layers
{
	_QWERTY,
	_NUMPAD,
	_SYMBOLS,
  _MEDIA,
  _VIM,
  _MOUSE
};

#define KC_ALT_DOT     ALT_T(KC_DOT)
#define KC_ALT_X       ALT_T(KC_X)
#define KC_CTL_SLSH    CTL_T(KC_SLSH)
#define KC_CTL_Z       CTL_T(KC_Z)
#define KC_GUI_C       GUI_T(KC_C)
#define KC_GUI_COMM    GUI_T(KC_COMM)
#define KC_HPR_ESC     ALL_T(KC_ESC)
#define KC_HPR_QUO     ALL_T(KC_QUOT)

#define KC_MDA_SCLN    LT(_MEDIA, KC_SCLN)
#define KC_VIM_SPC     LT(_VIM, KC_SPC)
#define KC_MSE_ENT     LT(_MOUSE, KC_ENTER)
#define KC_SYM_BSPC     LT(_SYMBOLS, KC_BSPC)
#define KC_NUMPAD_TAB     LT(_NUMPAD, KC_TAB)

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO
#define KC_ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = KC_KEYMAP(
  //,----+----+----+----+----+----.     ,----+----+----+----+----+----.
     GRV, 1  , 2, 3, 4, 5,                6  , 7,   8,   9,    0  , MINS,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
     MEH, Q  , W  , E  , R  , T  ,       Y  , U  , I  , O  , P  , BSLS,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
     HPR_ESC, A  , S  , D  , F  , G  ,       H  , J  , K  , L  , MDA_SCLN, HPR_QUO,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
     LSFT, CTL_Z  , ALT_X  , GUI_C  , V  , B  ,       N  , M  ,GUI_COMM, ALT_DOT , CTL_SLSH, RSFT,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
               SYM_BSPC, VIM_SPC,            MSE_ENT, NUMPAD_TAB
  // \------------------+----+----/      \---+----+----+--------------/
  ),

  [_MEDIA] = KC_KEYMAP(
  //,----+----+----+----+----+----.     ,----+----+----+----+----+----.
         ,    ,    ,    ,    ,    ,          ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,          ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,          , MPRV, MNXT, MPLY ,    ,    ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,          , VOLD, VOLU, MUTE,    ,    ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
                             ,    ,          ,
  // \------------------+----+----/      \---+----+----+--------------/
  ),

  [_MOUSE] = KC_KEYMAP(
  //,----+----+----+----+----+----.     ,----+----+----+----+----+----.
         ,    ,    ,    ,    ,    ,          ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
         ,    ,    , MS_UP,    ,    ,          ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
         ,    , MS_LEFT, MS_DOWN,    MS_RIGHT,    ,          , BTN1, BTN2,,    ,    ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,          , , , ,    ,    ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
                             ,    ,          ,
  // \------------------+----+----/      \---+----+----+--------------/
  ),

  [_VIM] = KC_KEYMAP(
  //,----+----+----+----+----+----.     ,----+----+----+----+----+----.
         ,    ,    ,    ,    ,    ,          ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,          ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,          LEFT,DOWN, UP, RIGHT ,    ,    ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,          , , , ,    ,    ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
                             ,    ,          ,
  // \------------------+----+----/      \---+----+----+--------------/
  ),


  [_NUMPAD] = KC_KEYMAP(
  //,----+----+----+----+----+----.     ,----+----+----+----+----+----.
         ,    ,    ,    ,    ,    ,          ,    ,    ,    ,MINS,    ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,          , 7  , 8  , 9  ,ASTR,    ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,          , 4  , 5  , 6  ,PLUS,    ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,          , 1  , 2  , 3  ,SLSH,    ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
                             ,    ,          , 0
  // \------------------+----+----/      \---+----+----+--------------/
  ),

  [_SYMBOLS] = KC_KEYMAP(
  //,----+----+----+----+----+----.     ,----+----+----+----+----+----.
         ,    ,    ,    ,    ,    ,          ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
       , EXLM, AT ,HASH,DLR ,PERC,      CIRC,AMPR,ASTR,LPRN,RPRN,BSLS,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
       , F1 , F2 , F3 , F4 , F5 ,      TILD,UNDS , PLUS,LCBR,RCBR,    ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
       , F6 , F7 ,F8 ,F9,F10 ,      GRV ,MINS, EQL,LBRC,RBRC,    ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
                          ,    ,          ,
  // \------------------+----+----/      \---+----+----+--------------/
  )

};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  switch(id) {
    /* include some kind of library or header */
    case 0:
      if (record->event.pressed) {
        SEND_STRING("#include <>");
        return MACRO( T(LEFT), END);
      }
      break;
    case 1:
      if (record->event.pressed) {
        SEND_STRING("git pull");
        return MACRO( T(ENT), END );
      }
      break;
    case 2:
      if (record->event.pressed){
        SEND_STRING("git push");
        return MACRO( T(ENT), END );
      }
      break;
    // case 3:
    //   if (record->event.pressed){
    //     layer_on(_CAPS);
    //     register_code(KC_CAPSLOCK);
    //     unregister_code(KC_CAPSLOCK);
    //   }
    //   break;
    // case 4:
    //   if (record->event.pressed){
    //     layer_off(_CAPS);
    //     register_code(KC_CAPSLOCK);
    //     unregister_code(KC_CAPSLOCK);
    //   }
    //   break;
  }
  return MACRO_NONE;
};


void matrix_scan_user(void) {
    uint8_t layer = biton32(layer_state);

    switch (layer) {
    	case _QWERTY:
    	    set_led_green;
    	    break;
      //   case _CAPS:
	    // set_led_white;
	    // break;
        case _NUMPAD:
            set_led_blue;
            break;
        case _SYMBOLS:
            set_led_red;
            break;
      //   case _NAV:
	    // set_led_magenta;
	    break;
      //   case _MACROS:
	    // set_led_cyan;
	    break;
       default:
            set_led_green;
            break;
    }
};
