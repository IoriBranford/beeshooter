# Honey Soldier MD Postmortem

Decades ago, my parents bought me a Sega Genesis model 1. It was love at first sight with the fast and smooth arcade action of Sonic, Shinobi, Thunder Force, Alien Soldier and more.

This summer, I made Honey Soldier MD, my own Sega Genesis game. I want to document my development experience in the hope that it will be useful and inspiring to other developers.

Readers with experience in C programming, vector math, trigonometry, and game development will get the most out of this article.

# Origins

In 2006, Gens emulator developer Stephane Dallongeville released the tools that over time evolved into [SGDK](https://github.com/Stephane-D/SGDK). Since then, the Genesis platform has not only survived but thrived, with even fully-fledged commercial titles like [Earthion](https://twitter.com/yuzokoshiro/status/1813937567743791326) still coming out to this day.

In 2022 I made [Honey Soldier](https://www.ioribranford.com/honeysoldier) for the [Gunner Parade game jam](https://itch.io/jam/gunner-parade-22). It targeted modern PC and mobile platforms, but the presentation was loosely inspired by 90's console games, without regard for their actual hardware limitations. Still, I had been Genesis-curious for some time, and two years later, I happened to notice SGDK was in version 2.00. As I looked over the many features and conveniences it offered, the idea of porting Honey Soldier began to form.

![](honey-soldier-reviews.jpg)

# Reasons

Technically, porting Honey Soldier was the most natural choice for a first Genesis project. Besides being one of my stronger titles, it is small enough to port in a relatively short time (for game development, that is). And many of its specs matched the Genesis specs or at least were not too much of a leap, such as viewport resolution (256x224) and background tile size (16x16, a multiple of Genesis' 8x8).

I had no specific goal in mind going into the port. I just started playing with SGDK out of curiosity and had Honey Soldier's files on hand to work with. But once I got going, it was hard to stop. Something about developing with SGDK was powerfully addicting - maybe how quick and easy it was to make most things work, and how it worked together so well with my other game tools. In any case, I took it as an opportunity to get another finished project on my belt, and to enjoy my childhood console from the other side. So I seized upon this momentum to get it done.

<!-- I think what excited me was how relatively quick and simple it was to do things with SGDK and other tools, as well as the prospect of seeing how my "16-bit inspired" game could work on an actual 16-bit machine.

But then, who's going to play it? What value is there in developing for a platform the majority of gamers have sold off, thrown out, or left to gather dust 30 years ago, if they were even alive then? -->

# Tools

SGDK is provided in source and Windows binary form on [GitHub](https://github.com/Stephane-D/SGDK). Its key components are a resource compiling tool and a C API and toolchain.

On Windows, it is easily installed by following the [wiki](https://github.com/Stephane-D/SGDK/wiki) instructions. For Linux, there is [MARSDEV](https://github.com/andwn/marsdev), a cross-platform toolchain which has the option to build SGDK and should work on Mac OS as well.

For working in VS Code, there is the extension [Genesis Code](https://marketplace.visualstudio.com/items?itemName=zerasul.genesis-code). I used it to create the project, with came with skeleton code and all the needed project configurations.

Probably the best Genesis development emulator is [BlastEm](https://www.retrodev.com/blastem/), which supports GDB remote debugging. The Genesis Code extension has a "Gens path" setting, which should be set to the BlastEm executable path. 

[Aseprite](https://www.aseprite.org/) is the current king of pixel graphic tools. Its many conveniences make creating for Genesis and other retro consoles a breeze.

The original game's level was made in [Tiled](https://www.mapeditor.org/). It offers a [JavaScript API](https://www.mapeditor.org/docs/scripting/) which I used to write a plugin exporting the level in the game's level format.

Any performance issues can be investigated with [md-profiler](https://github.com/Tails8521/md-profiler) and a special [profiling version of BlastEm](https://github.com/Tails8521/blastem).

Altogether these tools provided a development experience that studios of the time, maybe even Sega themselves, could have only dreamed of.

# Asset pipeline

The original asset files are PNG images, MP3 sounds, and Ogg music, but the Genesis predates those formats. SGDK comes with the rescomp tool for compiling many types of assets into Genesis-compatible data.

In one or more resource files, list your asset files and import parameters. Whenever you build the game, rescomp automatically makes C object code and header files out of the listed assets. In your source code, include these header files and you can access the assets.

# Audio

SGDK provides five audio drivers. They vary in supported sound quality, number of available channels, and support for FM synth music. You can switch between drivers to support different audio needs in each game phase.

My first choice was XGM2, the latest driver with FM music support. Though easy to use, it seemed to be a work in progress still. What did not work for me was the priority feature: when sending two sounds with different priorities to play on the same channel, the priorities seemed to have no effect. A higher-priority sound could be cut off by a lower-priority one, or would refuse to cut off a lower-priority one.

I tried switching to the older XGM driver. Its way of playing sounds is a little more roundabout. First assign each sound an integer ID, then pass an integer ID to play a sound. But priorities worked as they were supposed to.

For each audio asset, you specify a driver to play it with. My musician [Tytanium654](https://tytanium654.neocities.org/) provided the Deflemask project file for his song [Funk Buster](https://www.youtube.com/watch?v=QGkhsiXLJEg), from which I exported a [VGM](https://vgmrips.net) file, which rescomp compiles into XGM music data. The MP3 sounds only had to be converted to WAVs in [Audacity](https://www.audacityteam.org), and rescomp automatically downsamples WAVs to a supported sample rate.

Probably the biggest audio problem I faced was the music volume. The song was originally made for standalone listening; in-game, it tended to drown out lower sound effects. Additional complicating factors were the lack of volume controls in the XGM driver and rescomp not supporting volumes set in VGM files. Per Tytanium's suggestion, I grabbed a copy of the [Furnace](https://tildearrow.org/furnace/) tracker and lowered each instrument's Operator 4 level. A reduction of around -10 each sounded about right.

![](lower-instrument-level.png)

# Graphics

Out of all the things to port, the graphic assets demanded the most thought and creativity. Converting the assets to the Genesis' 16-color indexed format was only the first step.

There are four 16-color palettes in the Genesis. In order to show many types of variously-colored objects at once - background, player, enemies, bullets, powerups - objects must share palettes with other objects that appear alongside them. This means further reducing colors per object, rearranging colors to better organize them (or to make objects palette-swappable), and copying colors between images to keep their palettes in sync.

<!-- Each object ended up between 3 and 8 colors. -->

Aseprite comes to the rescue with its highly manipulatable palette. You can move, copy, paste, and sort the colors however you need. If your change discolors any pixels, a Remap Palette button can fix them with one click.

![](aseprite.png)

Imagine what 90's game artists with primitive paint tools would suffer if such palette changes occurred mid-development. It would have taken careful planning from the start with tight limits on art and level design to avoid a catastrophe.

Once images have been made Genesis-friendly, you can define several types of resources from them. The most common in this port is SPRITE, a free-moving object with animation frames. Some sprite images were also used as PALETTE resources; PALETTE is an array of the colors from the image palette. The background was exported from Tiled as an image and imported as a TILESET resource and a MAP resource. The font is another TILESET.

Finally there is one IMAGE resource for the title picture. IMAGE is meant for a full-screen graphic using all four palettes. The image must be convertible to a tile map where all colors in each 8x8 tile are from a single palette. I explored options for converting hooksnfangs' cover illustration to fit in those constraints, but realized the editing work to accomplish it was prohibitive (never mind making it look good in the Genesis color space). Instead I traced a portion of the hero Jenny in 16 colors as best I could.

All graphics resources support compression, letting you save ROM space at the expense of some CPU time for decompression. I've learned you should wait to use this until you know you need it and you know how to mitigate the cost. At first I tried AUTO compression on my resources, but this had performance consequences when combined with the default sprite animation system detailed in [Engine](#engine).

# Level

The level contains background tile layers, enemies and other objects that will appear, and triggers that make object spawns and other game events happen when the camera reaches them. There are two copies in the project: one in Tiled's native TMX format for editing, and one in Lua code for the game to load.

On the Genesis, of course, either format would take a huge portion of ROM and many seconds to parse at runtime. Fortunately, the background is already handled as TILESET and MAP graphic resources. Now how to get at the objects and triggers?

Rescomp offers an OBJECTS resource type, pulling layers of objects and their properties from TMX files. But my level's structure made it less than fit for this method. It has over 100 object layers, each representing a group of some objects to spawn and one or more spawn triggers, which would mean a 100+ layer long resource file.

Having the [dubious](https://www.youtube.com/watch?v=aXOChLn5ZdQ) privilege of knowing some JavaScript, I took the more flexible and powerful option of writing an [export plugin](https://github.com/IoriBranford/beeshooter/blob/genesis/game/data/extensions/export-genesis.js) for Tiled. I wrote out all the groups of objects and triggers as C data structures immediately usable by the game engine, in a similar fashion to how rescomp makes resources (except I output C source code while rescomp outputs binary object code).

# Engine

SGDK comes with some handy modules to start a game engine with.

The easy tile map engine constructs a Map out of MAP and TILESET resources. As you scroll the Map, it streams new map data from ROM into the Genesis' two tile layers: background and foreground, supporting worlds larger than the hardware limit (total of 4096 tiles per layer, 8x8 pixels per tile).

<!-- At its simplest, all you have to do is
1. Create Map objects from compiled MAP resources, assigning each Map to one of the two planes.
2. Set each Map's scroll position during gameplay.
3. Free the Maps at the end of gameplay.

And this was all I needed. -->

For some extra flair when the boss appears, I also played with the horizontal scanline scrolling mode. The Genesis can horizontally scroll full plane, per row (8px tall), or per scanline, and vertically scroll full plane or per column (16px wide).

The sophisticated sprite engine implements software sprites to get around limitations of Genesis hardware sprites. For example, the maximum hardware sprite size is 4x4 tiles; a larger object must be made of multiple hardware sprites. The sprite engine takes care of that when you use SPRITE resources larger than 4x4.

By default, sprites animate automatically, but transfer a lot of data in the process. The sprite engine loads a copy of every sprite instance's current frame into the video memory. It's a quick way to get objects moving onscreen, but sooner or later, you'll want to manually preload the frames into memory and point your sprite instances to them, eliminiating the constant data transfer and freeing up CPU. This is what I eventually did, dividing the sprite resources into "common", "stage part 1", "stage part 2", and "stage boss" groups and placing level triggers to load each group as needed.

<!-- Note the duplicate frames when there are many instances of the same sprite.

![](blastem-auto-upload-tiles.png) -->

Preloading is even more necessary if you compress your sprite resources. Otherwise the default auto animation decompresses every new animation frame, hurting the game performance even further. This happened to me before implementing the preloading, because my sprite resources initially had AUTO compression as mentioned in [Graphics](#graphics). Preloading alone would fix most of the problem except that the mid-game loads might take noticeably long. So I dropped the compression.

Sprites also need their colors loaded into a palette in order to look right. Based on the combinations of objects appearing in the level, I devoted one palette to permanent objects (player, powerup, background, GUI) and the other three to temporary objects (enemies, containers, bullets). I managed the temporary object palettes using an LRU cache. If an object spawned and its colors were not already in a palette, the least recently used colors were overwritten.

<!-- ### Object module -->

The provided object pool data structure is convenient for allocating and managing temporary objects such as enemies and bullets. This was my first exposure to [anonymous structs](https://learn.microsoft.com/en-us/cpp/cpp/anonymous-class-types?view=msvc-170#anonymous-structs), a C language extension enabling data inheritance. Game objects that you want in the pool will inherit from a base Object struct. The most important inherited member is the update callback, called when you update the entire pool.

<!-- It is enabled in gcc with the `-fms-extensions` argument. -->

```c
typedef struct GameObject
{
    Object;
    Vect2D_f16 pos, vel;
    Sprite* sprite;
    /* etc. */
} GameObject;

void updateGameObject(GameObject *gobj);

Pool *gobjPool = OBJ_createObjectPool(NUM_OBJECTS, sizeof(GameObject));
GameObject *gobj = (GameObject*) OBJ_create(gobjPool);
gobj->update = (ObjectCallback*) &updateGameObject;
OBJ_updateAll(gobjPool);
```

The GUI is a simple one made mostly of text. SGDK has text drawing functions which are specialized tile drawing functions, converting characters to tiles in a built-in 8x8px font tileset. You can overwrite the font tileset with your own, and apply tile properties like palette and flipping to the letters using the more advanced text drawing function. It's up to you to adapt these functions to draw larger fonts if you need them to.

# Math

The Genesis does not provide hardware rotation, so bullets and some enemies have pre-rotated sprite frames. In most cases, only the desired angles from right (0 degrees) to down (90 degrees) are needed; horizontal and vertical flipping produces the other angles. The beetle enemy, who is not symmetrical like the bullets, also needed a 135-degree frame in order to climb up onto ledges properly.

When enemies must fire bullets at the player, who can be at an arbitrary angle, the 

# Optimizing

Precalculating for performance

# The results

The port took seven weeks.

# Conclusion

Takeaways from this project

What next
