# Honey Soldier MD Postmortem

## Intro

This is a postmortem of Honey Soldier MD, the port of Honey Guardian to Sega Genesis/Megadrive

## Background

Decades ago, my parents bought me a Sega Genesis model 1, my first console. It was love at first sight with the fast and smooth arcade action of Sonic, Shinobi, Thunder Force, Alien Soldier and more. Meanwhile in 2006, Gens emulator developer Stephane Dallongeville released the tools that over time evolved into [SGDK](https://github.com/Stephane-D/SGDK), keeping the platform not only surviving but thriving, with new titles including fully-fledged commercial games like [Earthion](https://twitter.com/yuzokoshiro/status/1813937567743791326) still coming out to this day.

In 2022 I made Honey Guardian for the [Gunner Parade game jam](https://itch.io/jam/gunner-parade-22). The presentation was in my usual "between Genesis and Saturn" style without regard for their actual technical limitations. Still, I had been Genesis-curious for some time, and two years later, I happened to notice SGDK was in version 2.00. As I looked over the many features and conveniences it offered, the idea of porting Honey Guardian began to form.

## Getting started

Setting up SGDK and tools
Combined with Aseprite and Tiled, unlocked a development experience that even Sega could have only dreamed of at the time.

Starting the project

Tools used

## The work

Translating game engine and logic from Lua to C

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
