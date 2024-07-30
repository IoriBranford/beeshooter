# Honey Soldier MD Postmortem

Last week I released my first Sega Genesis game, Honey Soldier MD. I want to document my development experience in the hope that it will be useful and inspiring to other developers.

## Background

Decades ago, my parents bought me a Sega Genesis model 1, my first console. It was love at first sight with the fast and smooth arcade action of Sonic, Shinobi, Thunder Force, Alien Soldier and more. Meanwhile in 2006, Gens emulator developer Stephane Dallongeville released the tools that over time evolved into [SGDK](https://github.com/Stephane-D/SGDK), keeping the platform not only surviving but thriving, with new titles including fully-fledged commercial games like [Earthion](https://twitter.com/yuzokoshiro/status/1813937567743791326) still coming out to this day.

In 2022 I made [Honey Soldier](https://www.ioribranford.com/honeysoldier) for the [Gunner Parade game jam](https://itch.io/jam/gunner-parade-22). The presentation was in my usual "between Genesis and Saturn" style without regard for their actual technical limitations. Still, I had been Genesis-curious for some time, and two years later, I happened to notice SGDK was in version 2.00. As I looked over the many features and conveniences it offered, the idea of porting Honey Soldier began to form.

## Development environment

SGDK is provided in source and Windows binary form on [GitHub](https://github.com/Stephane-D/SGDK). Its key components are a resource compiling tool and a C API and toolchain.

On Windows, it is easily installed by following the [wiki](https://github.com/Stephane-D/SGDK/wiki) instructions. For Linux, there is [MARSDEV](https://github.com/andwn/marsdev), a cross-platform toolchain which has the option to build SGDK and should work on Mac OS as well.

For working in VS Code, there is the extension [Genesis Code](https://marketplace.visualstudio.com/items?itemName=zerasul.genesis-code). I used it to create the project, with came with skeleton code and all the needed project configurations.

Probably the best Genesis development emulator is [BlastEm](https://www.retrodev.com/blastem/), which supports GDB remote debugging. The Genesis Code extension has a "Gens path" setting, which should be set to the BlastEm executable path. 

[Aseprite](https://www.aseprite.org/) is the current king of pixel graphic tools. Its many conveniences make creating for Genesis and other retro consoles a breeze.

As with the original game, the level was made in [Tiled](https://www.mapeditor.org/). A custom plugin exported the level data to C source code, since the Genesis lacks a file system and the standard XML or JSON format would be too big and slow for the Genesis to parse.

Any performance issues can be investigated with [md-profiler](https://github.com/Tails8521/md-profiler) and a special [profiling version of BlastEm](https://github.com/Tails8521/blastem).

Altogether these tools provided a development experience that studios of the time, maybe even Sega themselves, could have only dreamed of.

## The work

Lua is not much more complex or feature-rich than C, so the translation of the game code was not too difficult.

The Lua-exclusive features most used in the original code are:
- The table data structure, a composite of C++'s vector and unordered_map, or JavaScript's array and object, or Python's list and dictionary. Every object in the game is a table.
- The coroutine. Used for scripted behaviors like the player's death and respawn.

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
