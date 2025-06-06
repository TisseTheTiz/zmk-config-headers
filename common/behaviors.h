#pragma once

// LAYER-TAP KEYS ├────────────────────────────────────────────┐
// #define NUM_ENT &my_lt NUM ENTER
// #define NUM_UND &my_lt NUM UNDER
// #define SYM_SPC &my_lt SYM SPACE
// #define SYM_BSL &my_lt SYM BSLH
// #define NAV_TAB &my_lt NAV TAB
// #define NAV_BSP &my_lt_bspc NAV 0

#define TAPPING_TERM_TIME 200
#define QUICK_TAP_TIME 200
#define IDLE_MOD_TIME 125

/ {
    behaviors {
        colsem: colon_semicolon {
            compatible = "zmk,behavior-mod-morph";
            // label = "inverted colon/semicolon";
            #binding-cells = <0>;
            bindings = <&kp COLON>, <&kp SEMICOLON>;
            mods = <(MOD_LSFT|MOD_RSFT)>;
        };

        bspc_del: backspace_delete {
            compatible = "zmk,behavior-mod-morph";
            // label = "backspace and shift delete";
            #binding-cells = <0>;
            bindings = <&kp BACKSPACE>, <&kp DELETE>;
            mods = <(MOD_LSFT|MOD_RSFT)>;
        };

        hl: homerow_mods_left {
            compatible = "zmk,behavior-hold-tap";
            // label = "homerow mods left";
            #binding-cells = <2>;
            /* flavor = "tap-preferred"; */
            flavor = "balanced";
            tapping-term-ms = <TAPPING_TERM_TIME>;
            quick-tap-ms = <QUICK_TAP_TIME>;
            require-prior-idle-ms = <IDLE_MOD_TIME>;
            // global-quick-tap;
            bindings = <&kp>, <&kp>;
            // opposite side hand keys
            hold-trigger-key-positions = <KEYS_R>;
        };

        hr: homerow_mods_right {
            compatible = "zmk,behavior-hold-tap";
            // label = "homerow mods right";
            #binding-cells = <2>;
            /* flavor = "tap-preferred"; */
            flavor = "balanced";
            tapping-term-ms = <TAPPING_TERM_TIME>;
            quick-tap-ms = <QUICK_TAP_TIME>;
            require-prior-idle-ms = <IDLE_MOD_TIME>;
            // global-quick-tap;
            bindings = <&kp>, <&kp>;
            // opposite side hand keys
            hold-trigger-key-positions = <KEYS_L>;
        };

        my_lt: my_layer_taps {
            compatible = "zmk,behavior-hold-tap";
            // label = "my layer taps";
            #binding-cells = <2>;
            // flavor = "tap-preferred";
            flavor = "balanced";
            tapping-term-ms = <TAPPING_TERM_TIME>;
            quick-tap-ms = <QUICK_TAP_TIME>;
            require-prior-idle-ms = <IDLE_MOD_TIME>;
            // global-quick-tap;
            bindings = <&mo>, <&kp>;
            // non-thumb keys
            /* hold-trigger-key-positions = <0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23>; */
        };

        my_lt_bspc: my_layer_tap_bspc_del {
            compatible = "zmk,behavior-hold-tap";
            // label = "my layer taps backspace";
            #binding-cells = <2>;
            tapping-term-ms = <TAPPING_TERM_TIME>;
            quick-tap-ms = <QUICK_TAP_TIME>;
            require-prior-idle-ms = <IDLE_MOD_TIME>;
            bindings = <&mo>, <&bspc_del>;
        };
    };
};

&caps_word {
    continue-list = <UNDERSCORE MINUS BSPC LSHFT RSHFT>;
};
