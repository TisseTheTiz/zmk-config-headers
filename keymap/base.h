#pragma once

// --------------------------------------------------------------------------------------------------------------
// ------------------------------------------------- BASE lAYER -------------------------------------------------
// --------------------------------------------------------------------------------------------------------------
#define BSE_LT4 &kp Q            //
#define BSE_LT3 &kp W            //
#define BSE_LT2 &kp E            //
#define BSE_LT1 &kp R            // ╭───────────────────────────────────────────────────────────────────────────────────────────────────╮
#define BSE_LT0 &kp T            // │         │         │         │         │         │         │         │         │         │         │
#define BSE_RT0 &kp Y            // │ BSE_LT4 │ BSE_LT3 │ BSE_LT2 │ BSE_LT1 │ BSE_LT0 │ BSE_RT0 │ BSE_RT1 │ BSE_RT2 │ BSE_RT3 │ BSE_RT4 │
#define BSE_RT1 &kp U            // │ ------- │ ------- │ ------- │ ------- │ ------- │ ------- │ ------- │ ------- │ ------- │ ------- │
#define BSE_RT2 &kp I            // │         │         │         │         │         │         │         │         │         │         │
#define BSE_RT3 &kp O            // │    Q    │    W    │    E    │    R    │    T    │    Y    │    U    │    I    │    O    │    P    │
#define BSE_RT4 &kp P            // │         │         │         │         │         │         │         │         │         │         │
                                 // /         /         /         /         /         /         /         /         /         /         /
#define BSE_LM4 &hl LALT A       // /─────────/─────────/─────────/─────────/─────────/─────────/─────────/─────────/─────────/─────────/
#define BSE_LM3 &hl LGUI S       // /         /         /         /         /         /         /         /         /         /         /
#define BSE_LM2 &hl LCTRL D      // │         │         │         │         │         │         │         │         │         │         │
#define BSE_LM1 &hl LSHFT F      // │ BSE_LM4 │ BSE_LM3 │ BSE_LM2 │ BSE_LM1 │ BSE_LM0 │ BSE_RM0 │ BSE_RM1 │ BSE_RM2 │ BSE_RM3 │ BSE_RM4 │
#define BSE_LM0 &kp G            // │ ------- │ ------- │ ------- │ ------- │ ------- │ ------- │ ------- │ ------- │ ------- │ ------- │
#define BSE_RM0 &kp H            // │         │         │         │         │         │         │         │         │         │         │
#define BSE_RM1 &hr RSHFT J      // │  A/ALT  │  S/GUI  │  D/CTL  │  F/SFT  │    G    │    H    │  J/SFT  │  K/CTL  │  L/GUI  │  :/ALT  │
#define BSE_RM2 &hr RCTRL K      // │         │         │         │         │         │         │         │         │         │         │
#define BSE_RM3 &hr RGUI L       // /         /         /         /         /         /         /         /         /         /         /
#define BSE_RM4 &colsem          // /─────────/─────────/─────────/─────────/─────────/─────────/─────────/─────────/─────────/─────────/
                                 // /         /         /         /         /         /         /         /         /         /         /
#define BSE_LB4 &kp Z            // │         │         │         │         │         │         │         │         │         │         │
#define BSE_LB3 &kp X            // │ BSE_LB4 │ BSE_LB3 │ BSE_LB2 │ BSE_LB1 │ BSE_LB0 │ BSE_RB0 │ BSE_RB1 │ BSE_RB2 │ BSE_RB3 │ BSE_RB4 │
#define BSE_LB2 &kp C            // │ ------- │ ------- │ ------- │ ------- │ ------- │ ------- │ ------- │ ------- │ ------- │ ------- │
#define BSE_LB1 &kp V            // │         │         │         │         │         │         │         │         │         │         │
#define BSE_LB0 &kp B            // │    Z    │    X    │    C    │    V    │    B    │    N    │    M    │    ,    │    .    │    /    │
#define BSE_RB0 &kp N            // │         │         │         │         │         │         │         │         │         │         │
#define BSE_RB1 &kp M            // ╰───────────────────────────────────────────────────────────────────────────────────────────────────╯
#define BSE_RB2 &kp COMMA        //
#define BSE_RB3 &kp DOT          //
#define BSE_RB4 &kp SLASH        //

#define BSE_LH2 &kp PG_UP        // ╭───────────────────────────────────────────────────────────────────────────────────────────────────╮
#define BSE_LH1 &my_lt NAV TAB   // │ ///////// BSE_LH3 ///////// │ BSE_LH1 │ BSE_LH0 < BSE_RH0 │ BSE_RH1 │ ///////// BSE_RH3 ///////// │
#define BSE_LH0 &my_lt NUM ENTER // │ ///////// ------- ///////// │ ------- │ ------- > ------- │ ------- │ ///////// ------- ///////// │
#define BSE_RH0 &my_lt SYM SPACE // │ /////////         ///////// │         │         <         │         │ /////////         ///////// │
#define BSE_RH1 &my_lt_bspc NAV 0// │ /////////  PAGE↑  ///////// │  ⭾/NAV  │  ↵/NUM  >  ␣/SYM  │  ⌫/NAV  │ /////////  PAGE↓  ///////// │
#define BSE_RH2 &kp PG_DN        // ╰───────────────────────────────────────────────────────────────────────────────────────────────────╯
