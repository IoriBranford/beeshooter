# Honey Soldier MD Postmortem

Last week I released my first Sega Genesis game, Honey Soldier MD. I want to document my development experience in the hope that it will be useful and inspiring to other developers.

Readers with experience in C programming, vector math, trigonometry, and game development will get the most out of this article.

## Background

Decades ago, my parents bought me a Sega Genesis model 1, my first console. It was love at first sight with the fast and smooth arcade action of Sonic, Shinobi, Thunder Force, Alien Soldier and more. Meanwhile in 2006, Gens emulator developer Stephane Dallongeville released the tools that over time evolved into [SGDK](https://github.com/Stephane-D/SGDK), keeping the platform not only surviving but thriving, with even fully-fledged commercial titles like [Earthion](https://twitter.com/yuzokoshiro/status/1813937567743791326) still coming out to this day.

In 2022 I made [Honey Soldier](https://www.ioribranford.com/honeysoldier) for the [Gunner Parade game jam](https://itch.io/jam/gunner-parade-22). As usual, the presentation was loosely inspired by 90's console games without regard for their actual hardware limitations. Still, I had been Genesis-curious for some time, and two years later, I happened to notice SGDK was in version 2.00. As I looked over the many features and conveniences it offered, the idea of porting Honey Soldier began to form.

## Why

Technically, porting Honey Soldier was the most natural choice for a first Genesis project. Besides being one of my stronger titles, it is small enough to port in a relatively short time (for game development, that is). And many of its specs matched the Genesis specs or at least were not too much of a leap, such as viewport resolution (256x224) and background tile size (16x16, a multiple of Genesis' 8x8).

I did not go into the port with specific goals in mind. I just started playing with SGDK and had Honey Soldier's files on hand to work with. But once I got going, it was hard to stop. Something about developing with SGDK was powerfully addicting - maybe how quick and easy it was to do most things with it, and how it worked together so well with my other game tools. In any case, it was a prime opportunity to get another finished project on my belt, and I used that momentum to get it done.

<!-- I think what excited me was how relatively quick and simple it was to do things with SGDK and other tools, as well as the prospect of seeing how my "16-bit inspired" game could work on an actual 16-bit machine.

But then, who's going to play it? What value is there in developing for a platform the majority of gamers have sold off, thrown out, or left to gather dust 30 years ago, if they were even alive then? -->

## Development environment

SGDK is provided in source and Windows binary form on [GitHub](https://github.com/Stephane-D/SGDK). Its key components are a resource compiling tool and a C API and toolchain.

On Windows, it is easily installed by following the [wiki](https://github.com/Stephane-D/SGDK/wiki) instructions. For Linux, there is [MARSDEV](https://github.com/andwn/marsdev), a cross-platform toolchain which has the option to build SGDK and should work on Mac OS as well.

For working in VS Code, there is the extension [Genesis Code](https://marketplace.visualstudio.com/items?itemName=zerasul.genesis-code). I used it to create the project, with came with skeleton code and all the needed project configurations.

Probably the best Genesis development emulator is [BlastEm](https://www.retrodev.com/blastem/), which supports GDB remote debugging. The Genesis Code extension has a "Gens path" setting, which should be set to the BlastEm executable path. 

[Aseprite](https://www.aseprite.org/) is the current king of pixel graphic tools. Its many conveniences make creating for Genesis and other retro consoles a breeze.

The original game's level was made in [Tiled](https://www.mapeditor.org/). I wrote a Tiled plugin to export the level data to C source code. This solution gave me the most control over the output, plus the Genesis lacks a file system and the standard XML or JSON format would be too big and slow for the Genesis to parse.

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

Probably the biggest audio problem I faced was the music volume. The song was originally made for standalone listening; in-game, it tended to drown out lower sound effects. Additional complicating factors were the lack of volume controls in the XGM driver and rescomp not supporting volumes set in VGM files. Per Tytanium's suggestion, I grabbed a copy of the [Furnace](https://tildearrow.org/furnace/) tracker and lowered the level of Operator 4 on each instrument. A reduction of around -10 per instrument sounded about right.

## Graphics

Converting graphics to 16 colors with Aseprite

## The code

The most obvious major task was reimplementing the game in C. SGDK comes with some handy modules to start a game engine with.

### Map module

An easy tile map engine for rendering the world into the Genesis' two tile planes: background and foreground. The engine streams new map data from ROM into each plane as you scroll it, supporting worlds larger than the hardware limit (total of 4096 tiles, 8x8 pixels per tile).

At its simplest, all you have to do is
1. Create Map objects from compiled map layer resources, assigning each Map to one of the two planes.
2. Set each Map's scroll position during gameplay.
3. Free the Maps at the end of gameplay.

And this was all I needed. For some extra flair when the boss appears, I also played with the horizontal scanline scrolling mode. The Genesis can horizontally scroll full plane, per row (8px tall), or per scanline, and vertically scroll full plane or per column (16px wide).

### Object module

Convenient pool allocation for temporary objects such as enemies and bullets. Key operations are creating and releasing an object and updating all objects.

It was here that I learned about the [anonymous struct](https://learn.microsoft.com/en-us/cpp/cpp/anonymous-class-types?view=msvc-170#anonymous-structs), a C extension enabling data inheritance of structs. It is enabled in gcc with the `-fms-extensions` argument. With this mechanism, each object to be stored in the pool inherits the fields of a base type Object. The most important Object field is the update function pointer to be called when updating all objects.

```c
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
```

Exporting Tiled map to C code

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
