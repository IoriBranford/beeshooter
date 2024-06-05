/**
 * Hello World Example
 * Created With Genesis-Code extension for Visual Studio Code
 * Use "Genesis Code: Compile" command to compile this program.
 **/
#include <genesis.h>

#include "res_gfx.h"

int main()
{
    VDP_setScreenWidth256();
    DMA_setBufferSize(8192);
    DMA_setMaxTransferSize(8192);
    
    PAL_setPalette(PAL0, bgPalette.data, DMA);

    VDP_loadTileSet(&bgTileset, TILE_USER_INDEX, DMA);
    Map *bg = MAP_create(&bgMap, BG_A,
        TILE_ATTR_FULL(0, FALSE, FALSE, FALSE, TILE_USER_INDEX));

    VDP_setBackgroundColor(1);
    
    fix32 y = FIX32(4352);
    while(1)
    {
        MAP_scrollTo(bg, 0, fix32ToInt(y));
        y += -FIX32(3) / 4;
        SYS_doVBlankProcess();
    }
    return (0);
}
