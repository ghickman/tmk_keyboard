static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Qwerty
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  Esc   |   1  |   2  |   3  |   4  |   5  |  F1  |           |  F4  |   6  |   7  |   8  |   9  |   0  |   [    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  Tab   |   Q  |   W  |   E  |   R  |   T  |  \   |           |   '  |   Y  |   U  |   I  |   O  |   P  |   ]    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | LCtrl  |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  | RCtrl  |
     * |--------+------+------+------+------+------|  =   |           |   -  |------+------+------+------+------+--------|
     * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RShift |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |   `  |      | LAlt | LGui |                                       | LGui | Left |  Up  | Down | Right|
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |  F6  |  F5  |       |  F8  |  F7  |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | Home |       | End  |      |      |
     *                                 |Space |Enter |------|       |------| BkSp | Space|
     *                                 |      |      |  +L1 |       | +L1  |      |      |
     *                                 `--------------------'       `--------------------'
     */
    KEYMAP( // Layer 2: Qwerty
        // Left Hand
        ESC,  1,    2,    3,    4,    5,    F1,
        TAB,  Q,    W,    E,    R,    T,    BSLS,
        LCTL, A,    S,    D,    F,    G,
        LSFT, Z,    X,    C,    V,    B,    EQL,
        NO,   GRV,  NO,   LALT, LGUI,
                                      F6,   F5,
                                            HOME,
                                SPC,  ENT,  FN0,
        // Right Hand
          F4,   6,   7,    8,    9,    0,    LBRC,
          QUOT, Y,   U,    I,    O,    P,    RBRC,
                H,   J,    K,    L,    SCLN, RCTL,
          MINS, N,   M,    COMM, DOT,  SLSH, RSFT,
                     LGUI, LEFT, UP,   DOWN, RIGHT,
        F8,   F7,
        END,
        FN0,  BSPC, SPC
    ),

    /* Layer 1: Media Keys
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * | TRNS   |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |           |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | TRNS   |      |      |      |      | VolU |      |           |      | VolD |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | TRNS   |      |      | Mute | F13  |      |------|           |------|      | Prev |Play/P| Next |      |  TRNS  |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | TRNS   |      |      |      |      |      |      |           |      |      |      |      |      |      |  TRNS  |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | TRNS | TRNS | TRNS | TRNS | TRNS |                                       | TRNS | TRNS | TRNS | TRNS | TRNS |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | TRNS | TRNS |       | TRNS | TRNS |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------|      |      |
     *                                 |      |      |  L0  |       |  L0  |      |      |
     *                                 `--------------------'       `--------------------'
     */
    KEYMAP(
        // Left Hand
        TRNS, F1,   F2,   F3,   F4,   F5,   F6,
        TRNS, NO,   NO,   NO,   NO,   VOLU, NO,
        TRNS, NO,   NO,   MUTE, F13,  NO,
        TRNS, NO,   NO,   NO,   NO,   NO,   NO,
        TRNS, TRNS, TRNS, TRNS, TRNS,
                                      TRNS, TRNS,
                                            TRNS,
                                  NO, NO,   FN0,
        // Right Hand
          F7,  F8,   F9,   F10,  F11,  F12,  NO,
          NO,  VOLD, NO,   NO,   NO,   NO,   NO,
               NO,   MPRV, MPLY, MNXT, NO,   TRNS,
          FN0, NO,   NO,   NO,   NO,   NO,   TRNS,
                     TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS,
        TRNS,
        FN0,  TRNS, TRNS
    ),
};

static const uint16_t PROGMEM fn_actions[] = {
    ACTION_LAYER_MOMENTARY(1),  // Hold for function/media Layer
    /* ACTION_LAYER_INVERT(2, ON_PRESS), // Push to enable/disable Numpad Layer */
    ACTION_LAYER_INVERT(2, ON_PRESS), // Push to enable/disable QWERTY Layer
};
