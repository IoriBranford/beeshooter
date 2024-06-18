#include "types.h"
#include "maths.h"

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

u16 approximateAtan(fix16 x) {
    // adapted from:
    // https://www-labs.iro.umontreal.ca/~mignotte/IFT2425/Documents/EfficientApproximationArctgFunction.pdf

    const fix16 C = FIX16(172.492); // pi/4 * 512/pi + .273*512/pi
    const fix16 D = FIX16(44.492); // .273*512/pi
    s16 atan = fix16ToInt(fix16Mul(x, C - fix16Mul(abs(x), D)));
    if (atan < 0)
        return 1024 + atan;
    return atan;
}
