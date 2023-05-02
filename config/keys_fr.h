/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */
#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>

#define FR_E_ACCENT (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT))

/* Keyboard a and A */
#define FR_A (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Q))

/* Keyboard m and M */
#define FR_M (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SEMICOLON_AND_COLON))

/* Keyboard q and Q */
#define FR_Q (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_A))

/* Keyboard w and W */
#define FR_W (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Z))

/* Keyboard z and Z */
#define FR_Z (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_W))

/* Keyboard 1 and ! (Exclamation) */
#define FR_NUMBER_1 (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_1_AND_EXCLAMATION)))
#define FR_N1 (NUMBER_1)

/* Keyboard ! (Exclamation) */
#define FR_EXCLAMATION (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SLASH_AND_QUESTION_MARK))
#define FR_EXCL (EXCLAMATION)

/* Keyboard 2 and @ (At sign) */
#define FR_NUMBER_2 (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT)))
#define FR_N2 (NUMBER_2)

/* Keyboard @ (At sign) */
#define FR_AT_SIGN (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS)))
#define FR_AT (AT_SIGN)

/* Keyboard 3 and # (Hash/Number) */
#define FR_NUMBER_3 (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH)))
#define FR_N3 (NUMBER_3)

/* Keyboard # (Hash/Number) */
#define FR_HASH (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH)))
#define FR_POUND (HASH)

/* Keyboard 4 and $ (Dollar) */
#define FR_NUMBER_4 (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR)))
#define FR_N4 (NUMBER_4)

/* Keyboard $ (Dollar) */
#define FR_DOLLAR (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE))
#define FR_DLLR (DOLLAR)

/* Keyboard 5 and % (Percent) */
#define FR_NUMBER_5 (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT)))
#define FR_N5 (NUMBER_5)

/* Keyboard % (Percent) */
#define FR_PERCENT (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_APOSTROPHE_AND_QUOTE)))
#define FR_PRCNT (PERCENT)

/* Keyboard 6 and ^ (Caret) */
#define FR_NUMBER_6 (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_6_AND_CARET)))
#define FR_N6 (NUMBER_6)

/* Keyboard ^ (Caret) */
#define FR_CARET (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE))
#define FR_DIAE (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE)))
#define FR_CCED (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS)))



/* Keyboard 7 and & (Ampersand) */
#define FR_NUMBER_7 (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND)))
#define FR_N7 (NUMBER_7)

/* Keyboard & (Ampersand) */
#define FR_AMPERSAND (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_1_AND_EXCLAMATION))
#define FR_AMPS (AMPERSAND)

/* Keyboard 8 and * (Asterisk) */
#define FR_NUMBER_8 (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK)))
#define FR_N8 (NUMBER_8)

/* Keyboard * (Asterisk) */
#define FR_ASTERISK (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_NON_US_HASH_AND_TILDE))
#define FR_ASTRK (ASTERISK)
#define FR_STAR (ASTERISK)

/* Keyboard 9 and ( (Left Parenthesis) */
#define FR_NUMBER_9 (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS)))
#define FR_N9 (NUMBER_9)

/* Keyboard ( (Left Parenthesis) */
#define FR_LEFT_PARENTHESIS (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT))
#define FR_LPAR (LEFT_PARENTHESIS)

/* Keyboard 0 and ) (Right Parenthesis) */
#define FR_NUMBER_0 (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS)))
#define FR_N0 (NUMBER_0)

/* Keyboard ) (Right Parenthesis) */
#define FR_RIGHT_PARENTHESIS (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE))
#define FR_RPAR (RIGHT_PARENTHESIS)

/* Keyboard - and _ (Minus and Underscore) */
#define FR_MINUS (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_6_AND_CARET))

/* Keyboard _ (Underscore) */
#define FR_UNDERSCORE (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK))
#define FR_UNDER (UNDERSCORE)

/* Keyboard [ and { (Left Bracket and Left Brace) */
#define FR_LEFT_BRACKET                                                                               \
    (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT)))
#define FR_LBKT (LEFT_BRACKET)

/* Keyboard { (Left Brace) */
#define FR_LEFT_BRACE                                                                                 \
    (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYPAD_4_AND_LEFT_ARROW)))
#define FR_LBRC (LEFT_BRACE)

/* Keyboard ] and } (Right Bracket and Right Brace) */
#define FR_RIGHT_BRACKET                                                                              \
    (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE)))
#define FR_RBKT (RIGHT_BRACKET)

/* Keyboard } (Right Brace) */
#define FR_RIGHT_BRACE                                                                                \
    (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS)))
#define FR_RBRC (RIGHT_BRACE)

/* Keyboard \ and | (Backslash and Pipe) */
#define FR_BACKSLASH (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK)))
#define FR_BSLH (BACKSLASH)

/* Keyboard | (Pipe) */
#define FR_PIPE (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_6_AND_CARET)))

/* Keyboard Non-US # and ~ (Non-US Hash/Number and Tilde) */
#define FR_NON_US_HASH (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_NON_US_HASH_AND_TILDE))
#define FR_NUHS (NON_US_HASH)

/* Keyboard ~ (Tilde) */
#define FR_TILDE2 (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_NON_US_HASH_AND_TILDE)))

/* Keyboard ; and : (Semicolon and Colon) */
#define FR_SEMICOLON (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_COMMA_AND_LESS_THAN))
#define FR_SEMI (SEMICOLON)

/* Keyboard : (Colon) */
#define FR_COLON (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_PERIOD_AND_GREATER_THAN)))

/* Keyboard ' and " (Apostrophe and Quote) */
#define FR_SINGLE_QUOTE (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYPAD_4_AND_LEFT_ARROW))
#define FR_SQT (SINGLE_QUOTE)
#define FR_APOSTROPHE (SINGLE_QUOTE)
#define FR_APOS (SINGLE_QUOTE)

/* Keyboard " (Quote) */
#define FR_DOUBLE_QUOTES                                                                              \
    (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH))
#define FR_DQT (DOUBLE_QUOTES)

/* Keyboard ` and ~ (Grave Accent and Tilde) */
#define FR_GRAVE (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND)))

/* Keyboard ~ (Tilde) */
#define FR_TILDE (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT)))

/* Keyboard , and < (Comma and Less Than) */
#define FR_COMMA (ZMK_HID_USAGE(HID_USAGE_KEY,  HID_USAGE_KEY_KEYBOARD_M))

/* Keyboard < (Less Than) */
#define FR_LESS_THAN (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE))
#define FR_LT (LESS_THAN)

/* Keyboard . and > (Period and Greater Than) */
#define FR_PERIOD (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_COMMA_AND_LESS_THAN)))
#define FR_DOT (PERIOD)

/* Keyboard > (Greater Than) */
#define FR_GREATER_THAN                                                                               \
    (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE)))
#define FR_GT (GREATER_THAN)

/* Keyboard / and ? (Forward Slash and Question) */
#define FR_SLASH (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_PERIOD_AND_GREATER_THAN)))
#define FR_FSLH (SLASH)

/* Keyboard ? (Question) */
#define FR_QUESTION (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_M)))
#define FR_QMARK (QUESTION)
