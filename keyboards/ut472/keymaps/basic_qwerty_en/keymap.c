#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _LEFT,
    _RIGHT,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Qwerty
   * ,-----------------------------------------------------------------------------------.
   * | Esc  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
   * |------+------+------+------+------+-------------+------+------+------+------+------|
   * | Tab  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |Enter |
   * |------+------+------+------+------+------|------+------+------+------+------+------|
   * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |  '   |   /  |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * | CAPS | Ctrl | Alt  | GUI  |Lower |    Space    |Raise | Left |Down  |  Up  |Right |
   * `-----------------------------------------------------------------------------------'
   */
  [_BASE] = LAYOUT(
    KC_ESC,  KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_TAB, KC_A,   KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
    KC_LSFT, KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_QUOT, KC_SLSH,
    KC_CAPSLOCK,  KC_LCTL, KC_LALT, KC_LGUI, MO(_LEFT),       KC_SPC,       MO(_RIGHT),   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
  ),

  /* Lower
   * ,-----------------------------------------------------------------------------------.
   * |   ~  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
   * |------+------+------+------+------+-------------+------+------+------+------+------|
   * |   `  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   _  |   +  |   {  |   }  |  |   |
   * |------+------+------+------+------+------|------+------+------+------+------+------|
   * | Shift|  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |   -  |   =  |   [  |   ]  |  \   |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * | Del  |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
   * `-----------------------------------------------------------------------------------'
   */
  [_LEFT] = LAYOUT(
    KC_TILD,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
    KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_UNDS,    KC_PLUS,    KC_LCBR, KC_RCBR, KC_PIPE,
    KC_LSFT, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
    KC_DEL, _______, _______, _______, _______,     _______,      _______,    KC_MNXT,    KC_VOLD, KC_VOLU, KC_MPLY
  ),

  /* Raise
   * ,-----------------------------------------------------------------------------------.
   * |   `  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Bksp |
   * |------+------+------+------+------+-------------+------+------+------+------+------|
   * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   -  |   =  |   [  |   ]  |  \   |
   * |------+------+------+------+------+------|------+------+------+------+------+------|
   * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO # |ISO / |Pg Up |Pg Dn |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
   * `-----------------------------------------------------------------------------------'
   */
  [_RIGHT] = LAYOUT(
    KC_GRV, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR,    KC_ASTR,    KC_LPRN, KC_RPRN,    KC_BSPC,
    KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
    _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NUHS, KC_NUBS, KC_PGUP, KC_PGDN, _______,
    _______, _______, _______, _______, _______,     _______,      _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
  )
};
