#pragma once

// LAYERS ├────────────────────────────────────────────┐
#define BAS 0
#define SYM 1
#define NUM 2
#define NAV 3
#define ADJ 4


/ {
    conditional_layers {
        compatible = "zmk,conditional-layers";
        tri_layer {
            if-layers = <1 2>;
            then-layer = <4>;
        };
    };
};
