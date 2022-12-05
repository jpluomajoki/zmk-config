#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

// Swedish definitions

#define SE_AE    LBKT        // Å
#define SE_AA    SQT         // Ä
#define SE_OO    SEMI        // Ö
#define SE_EXCL  LS(N1)      // !
#define SE_AT    RA(N2)      // @
#define SE_HASH  LS(N3)      // #
#define SE_DLLR  RA(N4)      // $
#define SE_PRCNT LS(N5)      // %
#define SE_AMPS  LS(N6)      // &
#define SE_FSLH  LS(N7)      // /
#define SE_STAR  LS(BSLH)    // *
#define SE_CARET RBRC        // ^
#define SE_LPAR  LS(N8)      // (
#define SE_RPAR  LS(N9)      // )
#define SE_LBKT  RA(N8)      // [
#define SE_RBKT  RA(N9)      // ]
#define SE_LBRC  RA(N7)      // {
#define SE_RBRC  RA(N0)      // }
#define SE_PLUS  MINUS       // +
#define SE_DASH  FSLH        // -
#define SE_EQUAL LS(N0)      // =
#define SE_QMARK LS(SE_PLUS) // ?
#define SE_UNDER LS(SE_DASH) // _
#define SE_DQT   LS(N2)      // "
#define SE_SQT   BSLH        // '
#define SE_GRAVE PLUS        // ´
#define SE_TILDE RA(RBKT)    // ~
#define SE_LT    NON_US_BACKSLASH // <
#define SE_GT    LS(SE_LT)   // >
#define SE_PIPE  RA(SE_LT)   // |
#define SE_BSLH  RA(SE_PLUS) // \
