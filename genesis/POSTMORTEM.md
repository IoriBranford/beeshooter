# Honey Soldier MD Postmortem

## Intro

This is a postmortem of Honey Soldier MD, the port of Honey Guardian to Sega Genesis/Megadrive

## Background

Decades ago, my parents bought me a Sega Genesis model 1, my first console. It was love at first sight with the fast and smooth arcade action of Sonic, Shinobi, and more. But the fun didn't stop there. As a young adult, I discovered even more hits that I couldn't have afforded or appreciated as a child, like Thunder Force and Alien Soldier, thanks to the rise of emulation.

Meanwhile, the author of the Gens emulator

> [got bored with Gens development...and gain interests in developing directly on the Sega Megadrive. Available tools were almost inexistent or really poor and buggy so i decided to create my owns development tools....my goal was to have a free and fully  functional development kit but still to keep it as small as possible.](https://www.patreon.com/posts/sgdk-history-26594202)

In 2006 Stephane Dallongeville released the tools that over time would evolve into [SGDK](https://github.com/Stephane-D/SGDK). The [explosion of Genesis software](https://segaretro.org/List_of_Sega_Mega_Drive_homebrew_games) since then, including [full-fledged original titles from professional studios](https://twitter.com/yuzokoshiro/status/1813937567743791326), is strong testament to SGDK's success.

In 2022 I made Honey Guardian for the [Gunner Parade game jam](https://itch.io/jam/gunner-parade-22). While the presentation style was influenced by 16-bit consoles, there was no thought of respecting 16-bit technical limits.

Still, I had been Genesis-curious for some time, and two years later, I happened to notice SGDK was in version 2.00. Seeing all its features and conveniences, ideas for porting Honey Guardian began to come together.

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
