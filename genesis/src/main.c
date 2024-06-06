/**
 * Hello World Example
 * Created With Genesis-Code extension for Visual Studio Code
 * Use "Genesis Code: Compile" command to compile this program.
 **/
#include <genesis.h>

#include "res_gfx.h"
#include "res_audio.h"

int gameplay();

int main()
{
    VDP_setScreenWidth256();
    SPR_init();

    while (1)
        gameplay();

    return (0);
}
