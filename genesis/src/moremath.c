#include "moremath.h"

u16 approximateAtan2(fix16 y, fix16 x) {
    if (!y && !x)
        return 0x7FFF;

    // O1: y > 0, x > 0, abs(y) < abs(x)
    // O2: y > 0, x > 0, abs(y) > abs(x)
    // O3: y > 0, x < 0, abs(y) > abs(x)
    // O4: y > 0, x < 0, abs(y) < abs(x)
    // O5: y < 0, x < 0, abs(y) < abs(x)
    // O6: y < 0, x < 0, abs(y) > abs(x)
    // O7: y < 0, x > 0, abs(y) > abs(x)
    // O8: y < 0, x > 0, abs(y) < abs(x)

    const fix16 C = FIX16(.28125);
    const u16 radToAng = 163; // 512/pi

    fix16 yx = fix16Mul(y, x) * radToAng;
    fix16 ysq = fix16Mul(y, y);
    fix16 xsq = fix16Mul(x, x);

    s16 a;
    if (abs(y) < abs(x)) {
        a = fix16ToInt(fix16Div(yx, ysq + fix16Mul(C, xsq)));
        if (x < 0) {
            // O4 or O5
            a += 512;
        } else {
            // O1 or O8
            if (a < 0)
                a += 1024;
        }
    } else {
        a = fix16ToInt(fix16Div(yx, xsq + fix16Mul(C, ysq)));
        if (y < 0) {
            // O6 or O7
            a += 768;
        } else {
            // O2 or O3
            a += 256;
        }
    }
    return (u16)a;
}