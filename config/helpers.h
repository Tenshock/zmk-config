#pragma once

#include "../zmk-nodefree-config/helper.h"

#define ___ &trans

#define DEF_MORPH(NAME, MODS, CODE, MOD_CODE) \ 
     ZMK_BEHAVIOR(NAME, mod_morph, \
               bindings = <&kp CODE>, <&kp MOD_CODE>; \
               mods = <(MODS)>; \
     )

#define DEF_LSHFT_MORPH(NAME, CODE, MOD_CODE) \ 
    DEF_MORPH(NAME, MOD_LSFT, CODE, MOD_CODE)
