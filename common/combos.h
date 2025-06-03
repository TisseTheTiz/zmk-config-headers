#pragma once

#define COMBO(NAME, BINDINGS, KEYPOS, TIMEOUT) \
combo_##NAME { \
    timeout-ms = <TIMEOUT>; \
    bindings = <BINDINGS>; \
    key-positions = <KEYPOS>; \
};

/ {
    combos {
        compatible = "zmk,combos";
        COMBO(esc, &kp ESC, LM1 RM1, 75)
        COMBO(caps, &caps_word, LM4 RM4, 75)
        COMBO(capslock, &kp CAPSLOCK, LT4 RT4, 75)

        // In the number cluster
        //COMBO(singlequote, &kp SINGLE_QUOTE, 6 7, 50)
        // COMBO(singlequote, &squote_usi, RT1 RT2, 50)
        //COMBO(doublequote, &kp DOUBLE_QUOTES, 7 8, 50)
        // COMBO(doublequote, &dquote_usi, RT2 RT3, 50)
        // COMBO(minus, &kp MINUS, RM2 RM3, 50)
        // COMBO(plus, &kp PLUS, RM1 RM2, 50)
        // COMBO(equal, &kp EQUAL, RB2 RB3, 50)
        // COMBO(star, &kp ASTERISK, RB1 RB2, 50)
        // COMBO(underscore, &kp UNDERSCORE, RM1 RM2 RM3, 50)
        COMBO(symlayertog, &tog SYM, RH0 RH1, 50)
    };
};
