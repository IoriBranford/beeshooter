#include "moremath.h"

extern const fix16 tantab_f16[256];

fix16 tanFix16(u16 x) {
    if (x >= 768)
        x = 1023 - (x % 1024);
    else if (x >= 512)
        x = x - 512;
    else if (x >= 256)
        x = 511 - x;
    return tantab_f16[x];
}