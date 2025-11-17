#ifndef _CONFIG_VARS_H_
#define _CONFIG_VARS_H_
#include <stdint.h>

#define string(a, b)  extern char *a;
#define real(a, b)    extern double a;
#define real3(a, b)   extern double a[3];
#define integer(a, b) extern int64_t a;

#include "config.template.h"

#undef string
#undef integer
#undef real
#undef real3

#define MAX_SCALE_BINS   50
#define MIN_PART_PER_BIN 15
#define MIN_SCALE_PART   (100)

#endif /* _CONFIG_VARS_H_ */
