#include "ui.h"

void bcdsnprint(char *s, u32 n, u32 bcd) {
    s[n] = '\0';
    for (int i = n-1; i >= 0; --i) {
        s[i] = '0' + (bcd & 0xF);
        bcd >>= 4;
    }
}