/*                              ENDGAME / 36 KEY MATRIX / LAYOUT MAPPING

    ╭────────────────────────────────────────╮        ╭───────────────────────────────────────────╮
    │   0  1   2   3   4   5   6   7   8   9 │        │  LT4 LT3 LT2 LT1 LT0  RT0 RT1 RT2 RT3 RT4 │
    │  10 11  12  13  14  15  16  17  18  19 │        │  LM4 LM3 LM2 LM1 LM0  RM0 RM1 RM2 RM3 RM4 │
    │  20 21  22  23  24  25  26  27  28  29 │        │  LB4 LB3 LB2 LB1 LB0  RB0 RB1 RB2 RB3 RB4 │
    │  30         31  32  33  34          35 │        │  LH2         LH1 LH0  RH0 RH1         RH2 │
    ╰────────────────────────────────────────╯        ╰───────────────────────────────────────────╯

*/

#pragma once

// left-top row
#define LT4  0
#define LT3  1
#define LT2  2
#define LT1  3
#define LT0  4

// right-top row
#define RT0  5
#define RT1  6
#define RT2  7
#define RT3  8
#define RT4  9

// left-middle row
#define LM4 10
#define LM3 11
#define LM2 12
#define LM1 13
#define LM0 14

// right-middle row
#define RM0 15
#define RM1 16
#define RM2 17
#define RM3 18
#define RM4 19

// left-bottom row
#define LB4 20
#define LB3 21
#define LB2 22
#define LB1 23
#define LB0 24

// right-bottom row
#define RB0 25
#define RB1 26
#define RB2 27
#define RB3 28
#define RB4 29

// left thumb keys + far pinky
#define LH2 30
#define LH1 31
#define LH0 32

// right thumb keys + far pinky
#define RH0 33
#define RH1 34
#define RH2 35

#define KEYS_L LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4 LB0 LB1 LB2 LB3 LB4 LH0 LH1 LH2
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RB0 RB1 RB2 RB3 RB4 RH0 RH1 RH2
#define KEYS_T LH0 LH1 LH2 RH0 RH1 RH2
