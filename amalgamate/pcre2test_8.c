
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#undef PCRE2_CODE_UNIT_WIDTH 
#define PCRE2_CODE_UNIT_WIDTH 8

#define PCRE2_AMALGAMETE 1

#undef SUPPORT_PCRE2_8
#define SUPPORT_PCRE2_8 1
#undef SUPPORT_PCRE2_16
#undef SUPPORT_PCRE2_32
#include "../src/pcre2test.c"
