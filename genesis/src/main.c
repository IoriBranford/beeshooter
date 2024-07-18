/**
 * Hello World Example
 * Created With Genesis-Code extension for Visual Studio Code
 * Use "Genesis Code: Compile" command to compile this program.
 **/
#include "userdata.h"
#include <genesis.h>
#include "res_gfx.h"
#include "sounddef.h"

int title();

int main()
{
    VDP_setScreenWidth256();
    SPR_init();
    SND_initSoundDefs();

    VDP_loadFont(&font, DMA);
    VDP_setTextPriority(1);

    USERDATA_init();
    
    while (1) {
        title();
        SYS_reset();
    }

    return (0);
}
