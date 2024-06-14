/**
 * Hello World Example
 * Created With Genesis-Code extension for Visual Studio Code
 * Use "Genesis Code: Compile" command to compile this program.
 **/
#include <genesis.h>
#include "sounddef.h"

int gameplay();

int main()
{
    VDP_setScreenWidth256();
    SPR_init();
    SND_initSoundDefs();

    while (1)
        gameplay();

    return (0);
}
