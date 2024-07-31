# Honey Soldier MD Postmortem

Last week I released my first Sega Genesis game, Honey Soldier MD. I want to document my development experience in the hope that it will be useful and inspiring to other developers.

## Background

Decades ago, my parents bought me a Sega Genesis model 1, my first console. It was love at first sight with the fast and smooth arcade action of Sonic, Shinobi, Thunder Force, Alien Soldier and more. Meanwhile in 2006, Gens emulator developer Stephane Dallongeville released the tools that over time evolved into [SGDK](https://github.com/Stephane-D/SGDK), keeping the platform not only surviving but thriving, with even fully-fledged commercial titles like [Earthion](https://twitter.com/yuzokoshiro/status/1813937567743791326) still coming out to this day.

In 2022 I made [Honey Soldier](https://www.ioribranford.com/honeysoldier) for the [Gunner Parade game jam](https://itch.io/jam/gunner-parade-22). As usual, the presentation was loosely inspired by 90's console games without regard for their actual hardware limitations. Still, I had been Genesis-curious for some time, and two years later, I happened to notice SGDK was in version 2.00. As I looked over the many features and conveniences it offered, the idea of porting Honey Soldier began to form.

## Development environment

SGDK is provided in source and Windows binary form on [GitHub](https://github.com/Stephane-D/SGDK). Its key components are a resource compiling tool and a C API and toolchain.

On Windows, it is easily installed by following the [wiki](https://github.com/Stephane-D/SGDK/wiki) instructions. For Linux, there is [MARSDEV](https://github.com/andwn/marsdev), a cross-platform toolchain which has the option to build SGDK and should work on Mac OS as well.

For working in VS Code, there is the extension [Genesis Code](https://marketplace.visualstudio.com/items?itemName=zerasul.genesis-code). I used it to create the project, with came with skeleton code and all the needed project configurations.

Probably the best Genesis development emulator is [BlastEm](https://www.retrodev.com/blastem/), which supports GDB remote debugging. The Genesis Code extension has a "Gens path" setting, which should be set to the BlastEm executable path. 

[Aseprite](https://www.aseprite.org/) is the current king of pixel graphic tools. Its many conveniences make creating for Genesis and other retro consoles a breeze.

The original game's level was made in [Tiled](https://www.mapeditor.org/). I wrote a Tiled plugin to export the level data to C source code. This solution gave me the most control over the output, plus the Genesis lacks a file system and the standard XML or JSON format would be too big and slow for the Genesis to parse.

Any performance issues can be investigated with [md-profiler](https://github.com/Tails8521/md-profiler) and a special [profiling version of BlastEm](https://github.com/Tails8521/blastem).

Altogether these tools provided a development experience that studios of the time, maybe even Sega themselves, could have only dreamed of.

## The code

The most obvious major task was reimplementing the game in C. SGDK comes with some handy modules to start a game engine with.

### Map module

An easy tile map engine for rendering the world into the Genesis' two tile planes: background and foreground. The engine streams new map data from ROM into each plane as you scroll it, supporting worlds larger than the hardware limit (4096 tiles of 8x8 pixels per plane).

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

Converting graphics to 16 colors with Aseprite

Importing sounds and music

Adapting the UI

## Challenges

Precalculating for performance

Palette sharing

Bullet sprite angles

## The results

How long it took

## Conclusion

Takeaways from this project

What next
