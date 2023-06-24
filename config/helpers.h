#pragma once

// alias
#define ___ &trans

// shift modifier helper
#include "../zmk-nodefree-config/helper.h"

#define DEF_LSHFT_KP_MORPH(NAME, CODE, MOD_CODE) \ 
     ZMK_BEHAVIOR(NAME, mod_morph, \
               bindings = <&kp CODE>, <&kp MOD_CODE>; \
               mods = <(MOD_LSFT)>; \
     )

#define DEF_LT_DISABLED_ON_SFT(NAME, LAYER, CODE) \ 
     ZMK_BEHAVIOR(NAME, mod_morph, \
               bindings = <&lt LAYER CODE>, <&kp CODE>; \
               mods = <(MOD_LSFT)>; \
     )

// Home Row mode optimizer
#include "../zmk-nodefree-config/keypos_def/keypos_42keys.h"

#define LEFT_KEYS LT0 LT1 LT2 LT3 LT4 LT5 LM0 LM1 LM2 LM3 LM4 LM5 LB0 LB1 LB2 LB3 LB4 LB5
#define RIGHT_KEYS RT0 RT1 RT2 RT3 RT4 RT5 RM0 RM1 RM2 RM3 RM4 RM5 RB0 RB1 RB2 RB3 RB4 RB5
#define THUMBS LH2 LH1 LH0 RH0 RH1 RH2

#define MAKE_HOME_ROW_MODE(NAME, HOLD, TAP, TRIGGER_POS) \
    ZMK_BEHAVIOR(NAME, hold_tap, \
        flavor = "balanced"; \
        tapping-term-ms = <280>; \
        quick-tap-ms = <175>; \
        global-quick-tap-ms = <150>; \
        bindings = <HOLD>, <TAP>; \
        hold-trigger-key-positions = <TRIGGER_POS>; \
        hold-trigger-on-release; \
    )

MAKE_HOME_ROW_MODE(lhr, &kp, &kp, RIGHT_KEYS THUMBS)
MAKE_HOME_ROW_MODE(rhr, &kp, &kp, LEFT_KEYS THUMBS)
