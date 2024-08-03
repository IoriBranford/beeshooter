# Honey Soldier MD Postmortem

Last week I released my first Sega Genesis game, Honey Soldier MD. I want to document my development experience in the hope that it will be useful and inspiring to other developers.

Readers with experience in C programming, vector math, trigonometry, and game development will get the most out of this article.

## Background

Decades ago, my parents bought me a Sega Genesis model 1, my first console. It was love at first sight with the fast and smooth arcade action of Sonic, Shinobi, Thunder Force, Alien Soldier and more. Meanwhile in 2006, Gens emulator developer Stephane Dallongeville released the tools that over time evolved into [SGDK](https://github.com/Stephane-D/SGDK), keeping the platform not only surviving but thriving, with even fully-fledged commercial titles like [Earthion](https://twitter.com/yuzokoshiro/status/1813937567743791326) still coming out to this day.

In 2022 I made [Honey Soldier](https://www.ioribranford.com/honeysoldier) for the [Gunner Parade game jam](https://itch.io/jam/gunner-parade-22). As usual, the presentation was loosely inspired by 90's console games without regard for their actual hardware limitations. Still, I had been Genesis-curious for some time, and two years later, I happened to notice SGDK was in version 2.00. As I looked over the many features and conveniences it offered, the idea of porting Honey Soldier began to form.

## Why

Technically, porting Honey Soldier was the most natural choice for a first Genesis project. Besides being one of my stronger titles, it is small enough to port in a relatively short time (for game development, that is). And many of its specs matched the Genesis specs or at least were not too much of a leap, such as viewport resolution (256x224) and background tile size (16x16, a multiple of Genesis' 8x8).

I had no specific goal in mind going into the port. I just started playing with SGDK out of curiosity and had Honey Soldier's files on hand to work with. But once I got going, it was hard to stop. Something about developing with SGDK was powerfully addicting - maybe how quick and easy it was to make most things work, and how it worked together so well with my other game tools. In any case, it was a prime opportunity to get another finished project on my belt, and to enjoy my childhood console from the developer side. So I seized upon this momentum to get it done.

<!-- I think what excited me was how relatively quick and simple it was to do things with SGDK and other tools, as well as the prospect of seeing how my "16-bit inspired" game could work on an actual 16-bit machine.

But then, who's going to play it? What value is there in developing for a platform the majority of gamers have sold off, thrown out, or left to gather dust 30 years ago, if they were even alive then? -->

## Development environment

SGDK is provided in source and Windows binary form on [GitHub](https://github.com/Stephane-D/SGDK). Its key components are a resource compiling tool and a C API and toolchain.

On Windows, it is easily installed by following the [wiki](https://github.com/Stephane-D/SGDK/wiki) instructions. For Linux, there is [MARSDEV](https://github.com/andwn/marsdev), a cross-platform toolchain which has the option to build SGDK and should work on Mac OS as well.

For working in VS Code, there is the extension [Genesis Code](https://marketplace.visualstudio.com/items?itemName=zerasul.genesis-code). I used it to create the project, with came with skeleton code and all the needed project configurations.

Probably the best Genesis development emulator is [BlastEm](https://www.retrodev.com/blastem/), which supports GDB remote debugging. The Genesis Code extension has a "Gens path" setting, which should be set to the BlastEm executable path. 

[Aseprite](https://www.aseprite.org/) is the current king of pixel graphic tools. Its many conveniences make creating for Genesis and other retro consoles a breeze.

The original game's level was made in [Tiled](https://www.mapeditor.org/). It offers a JavaScript extension API which I used to write an exporter to C source code.

Any performance issues can be investigated with [md-profiler](https://github.com/Tails8521/md-profiler) and a special [profiling version of BlastEm](https://github.com/Tails8521/blastem).

Altogether these tools provided a development experience that studios of the time, maybe even Sega themselves, could have only dreamed of.

## Asset pipeline

The original asset files are PNG images, MP3 sounds, and Ogg music, but the Genesis predates those formats. SGDK comes with the rescomp tool for compiling many types of assets into Genesis-compatible data.

In one or more resource files, list your asset files and import parameters. Whenever you build the game, rescomp automatically makes C object code and header files out of the listed assets. In your source code, include these header files and you can access the assets.

## Audio

SGDK provides five audio drivers. They vary in supported sound quality, number of available channels, and whether they play FM synth music. You can switch between drivers to support different audio needs in each game phase.

My first choice was XGM2, the latest driver with FM music support. Though easy to use, it seemed to be a work in progress still. What did not work for me was the priority feature: when sending two sounds with different priorities to play on the same channel, the priorities seemed to have no effect. A higher-priority sound could be cut off by a lower-priority one, or would refuse to cut off a lower-priority one.

I tried switching to the older XGM driver. Its way of playing sounds is a little more roundabout. First assign each sound an integer ID, then pass an integer ID to play a sound. But priorities worked as they were supposed to.

For each audio asset, you specify a driver to play it with. My musician [Tytanium654](https://tytanium654.neocities.org/) provided the Deflemask project file for his song [Funk Buster](https://www.youtube.com/watch?v=QGkhsiXLJEg), from which I exported a [VGM](https://vgmrips.net) file, which rescomp compiles into XGM music data. The MP3 sounds only had to be converted to WAVs in [Audacity](https://www.audacityteam.org), and rescomp automatically downsamples WAVs to a supported sample rate.

Probably the biggest audio problem I faced was the music volume. The song was originally made for standalone listening; in-game, it tended to drown out lower sound effects. Additional complicating factors were the lack of volume controls in the XGM driver and rescomp not supporting volumes set in VGM files. Per Tytanium's suggestion, I grabbed a copy of the [Furnace](https://tildearrow.org/furnace/) tracker and lowered each instrument's Operator 4 level. A reduction of around -10 each sounded about right.

## Graphics

Out of all the things to port, the graphic assets demanded the most thought and creativity. Converting the assets to the Genesis' 16-color indexed format was only the first step.

There are four 16-color palettes in the Genesis. In order to show many types of variously-colored objects at once - background, player, enemies, bullets, powerups - objects must share palettes with other objects that appear alongside them. This means further reducing colors per object, rearranging colors to better organize them (or to make objects palette-swappable), and copying colors between images to keep their palettes in sync.

<!-- Each object ended up between 3 and 8 colors. -->

Aseprite comes to the rescue with its highly manipulatable palette. You can move, copy, paste, and sort the colors however you need. If your change discolors any pixels, a Remap Palette button can fix them with one click. Imagine what 90's game artists with primitive paint tools would suffer if such palette changes occurred mid-development. It would have taken careful planning from the start with tight limits on art and level design to avoid a catastrophe.

Once images have been made Genesis-friendly, you can define several types of resources from them. The most common in this port is SPRITE, a free-moving object with animation frames. Some sprite images were also used as PALETTE resources; PALETTE is an array of the colors from the image palette. The background was exported from Tiled as an image and imported as a TILESET resource and a MAP resource. The font is another TILESET.

Finally there is one IMAGE resource for the title picture. IMAGE is meant for a full-screen graphic using all four palettes. The image must be convertible to a tile map where each 8x8 tile uses one 16-color palette. I explored options for converting hooksnfangs' cover illustration to fit in those constraints, but realized the editing work to accomplish it was prohibitive (never mind making it look good in the Genesis color space). Instead I traced a portion of the hero Jenny in 16 colors as best I could.

In game, based on the combinations of objects appearing in the level - not only those placed in the level, but any bullets or effects they would create - I settled on one palette for permanent objects (player, powerup, background, UI) and the other three for temporary objects (enemies, containers, bullets). An LRU cache kept track of which temporary object colors were in the palettes. If an object spawned and its colors were not already in a palette, the least recently used colors were overwritten.

## Level

The level contains background tile layers, enemies and other objects that will appear, and triggers that make object spawns and other game events happen when the camera reaches them. There are two copies in the project: one in Tiled's native TMX format for editing, and one in Lua code for the game to load.

On the Genesis, of course, either format would take a huge portion of ROM and many seconds to parse at runtime. Fortunately, the background is already handled as TILESET and MAP graphic resources. Now how to get at the objects and triggers?

Rescomp offers an OBJECTS resource type, pulling layers of objects and their properties from TMX files. But my level structure wasn't a fit for this method (or my preference for avoiding repetitive data entry). I had over 100 object layers, each representing a spawn group containing some objects to spawn and one or more spawn triggers, which would mean a 100+ layer long resource file.

<!-- Having the [dubious](https://www.youtube.com/watch?v=aXOChLn5ZdQ) privilege of knowing JavaScript, I turned to the Tiled extension API. Although the JavaScript for the Tiled plugin was well over 100 lines, -->

## The code

The most obvious major task was reimplementing the game in C. SGDK comes with some handy modules to start a game engine with.

I loaded my background MAP and TILESET resources into a Map object. SGDK's easy tile map engine streams new map data from ROM to memory as you scroll, supporting worlds larger than the hardware limit (total of 4096 tiles, 8x8 pixels per tile).

<!-- At its simplest, all you have to do is
1. Create Map objects from compiled MAP resources, assigning each Map to one of the two planes.
2. Set each Map's scroll position during gameplay.
3. Free the Maps at the end of gameplay.

And this was all I needed. For some extra flair when the boss appears, I also played with the horizontal scanline scrolling mode. The Genesis can horizontally scroll full plane, per row (8px tall), or per scanline, and vertically scroll full plane or per column (16px wide). -->

<!-- ### Object module -->

SGDK offers an object pool. You can conveniently allocate and manage temporary objects such as enemies and bullets. This module was my introduction to [anonymous structs](https://learn.microsoft.com/en-us/cpp/cpp/anonymous-class-types?view=msvc-170#anonymous-structs), used here to let you inherit from a base Object struct. The most important inherited member is the update callback, called when you update all objects in the pool.

<!-- , a C extension enabling data inheritance of structs.  With this mechanism, each object to be stored in the pool inherits the fields of a base type Object. The most important Object field is the update function pointer to be called when updating all objects. -->

<!-- It is enabled in gcc with the `-fms-extensions` argument. -->

<!-- ```c
// Example from object.h
struct entity_
{
    Object;
    fix16 posX;
    fix16 posY;
    Sprite* sprite;
    ...
};
struct entity_ e;
e.update = &updateEntity; // update is a field in Object
``` -->

Adapting the UI

## Challenges

Precalculating for performance

Palette sharing

Bullet sprite angles

## The results

The port took seven weeks.

## Conclusion

Takeaways from this project

What next
