return {
  version = "1.9",
  luaversion = "5.1",
  tiledversion = "1.9.2",
  class = "",
  orientation = "orthogonal",
  renderorder = "right-down",
  width = 16,
  height = 14,
  tilewidth = 16,
  tileheight = 16,
  nextlayerid = 14,
  nextobjectid = 48,
  properties = {},
  tilesets = {
    {
      name = "Weapons",
      firstgid = 1,
      class = "",
      tilewidth = 16,
      tileheight = 16,
      spacing = 0,
      margin = 0,
      columns = 8,
      image = "tilesets/Weapons.png",
      imagewidth = 128,
      imageheight = 16,
      objectalignment = "center",
      tilerendersize = "tile",
      fillmode = "stretch",
      tileoffset = {
        x = 0,
        y = 0
      },
      grid = {
        orientation = "orthogonal",
        width = 16,
        height = 16
      },
      properties = {},
      wangsets = {},
      tilecount = 8,
      tiles = {
        {
          id = 0,
          properties = {
            ["name"] = "1A"
          }
        },
        {
          id = 1,
          properties = {
            ["name"] = "1B"
          }
        },
        {
          id = 2,
          properties = {
            ["name"] = "2A"
          }
        },
        {
          id = 3,
          properties = {
            ["name"] = "2B"
          }
        },
        {
          id = 4,
          properties = {
            ["name"] = "3A"
          }
        },
        {
          id = 5,
          properties = {
            ["name"] = "3B"
          }
        },
        {
          id = 6,
          properties = {
            ["name"] = "border"
          }
        },
        {
          id = 7,
          properties = {
            ["name"] = "cursorcorner"
          }
        }
      }
    }
  },
  layers = {
    {
      type = "group",
      id = 7,
      name = "hud",
      class = "",
      visible = true,
      opacity = 1,
      offsetx = 0,
      offsety = 0,
      parallaxx = 1,
      parallaxy = 1,
      properties = {},
      layers = {
        {
          type = "objectgroup",
          draworder = "index",
          id = 2,
          name = "status",
          class = "",
          visible = true,
          opacity = 1,
          offsetx = 0,
          offsety = 0,
          parallaxx = 1,
          parallaxy = 1,
          properties = {
            ["z"] = 0
          },
          objects = {
            {
              id = 1,
              name = "score",
              class = "",
              shape = "text",
              x = 8,
              y = 8,
              width = 112,
              height = 8,
              rotation = 0,
              visible = true,
              text = "00000000",
              fontfamily = "Press Start 2P",
              pixelsize = 8,
              wrap = true,
              color = { 255, 255, 255 },
              halign = "right",
              properties = {}
            },
            {
              id = 3,
              name = "lives",
              class = "",
              shape = "text",
              x = 8,
              y = 208,
              width = 80,
              height = 8,
              rotation = 0,
              visible = true,
              text = "♥♥♥♥♥♥♥♥♥",
              fontfamily = "Press Start 2P",
              pixelsize = 8,
              wrap = true,
              color = { 255, 255, 255 },
              properties = {}
            },
            {
              id = 4,
              name = "speed",
              class = "",
              shape = "text",
              x = 184,
              y = 208,
              width = 64,
              height = 8,
              rotation = 0,
              visible = true,
              text = "Speed ▶▶",
              fontfamily = "Press Start 2P",
              pixelsize = 8,
              wrap = true,
              color = { 255, 255, 255 },
              properties = {}
            },
            {
              id = 2,
              name = "time",
              class = "",
              shape = "text",
              x = 136,
              y = 8,
              width = 112,
              height = 8,
              rotation = 0,
              visible = true,
              text = "00:00:00",
              fontfamily = "Press Start 2P",
              pixelsize = 8,
              wrap = true,
              color = { 255, 255, 255 },
              properties = {}
            },
            {
              id = 19,
              name = "bonus",
              class = "BeeShooter.Gui.BonusText",
              shape = "text",
              x = 8,
              y = 24,
              width = 112,
              height = 16,
              rotation = 0,
              visible = true,
              text = "SECRET BONUS!\n25000",
              fontfamily = "Press Start 2P",
              pixelsize = 8,
              wrap = true,
              color = { 255, 255, 255 },
              halign = "right",
              properties = {}
            }
          }
        },
        {
          type = "objectgroup",
          draworder = "index",
          id = 6,
          name = "weapons",
          class = "Gui.Menu",
          visible = true,
          opacity = 1,
          offsetx = 0,
          offsety = 0,
          parallaxx = 1,
          parallaxy = 1,
          properties = {
            ["z"] = 0
          },
          objects = {
            {
              id = 8,
              name = "weaponbackA",
              class = "",
              shape = "rectangle",
              x = 220,
              y = 192,
              width = 16,
              height = 16,
              rotation = 0,
              gid = 7,
              visible = true,
              properties = {
                ["z"] = -1
              }
            },
            {
              id = 9,
              name = "weaponbackB",
              class = "",
              shape = "rectangle",
              x = 240,
              y = 192,
              width = 16,
              height = 16,
              rotation = 0,
              gid = 7,
              visible = true,
              properties = {
                ["z"] = -1
              }
            },
            {
              id = 5,
              name = "weaponA",
              class = "Gui.Button",
              shape = "rectangle",
              x = 220,
              y = 192,
              width = 16,
              height = 16,
              rotation = 0,
              gid = 5,
              visible = true,
              properties = {
                ["z"] = 1
              }
            },
            {
              id = 6,
              name = "weaponB",
              class = "Gui.Button",
              shape = "rectangle",
              x = 240,
              y = 192,
              width = 16,
              height = 16,
              rotation = 0,
              gid = 2,
              visible = true,
              properties = {
                ["z"] = 1
              }
            },
            {
              id = 10,
              name = "weaponcursor1",
              class = "Gui.Cursor",
              shape = "rectangle",
              x = 228,
              y = 200,
              width = 16,
              height = 16,
              rotation = 0,
              gid = 8,
              visible = true,
              properties = {
                ["offsetx"] = 8,
                ["offsety"] = 8,
                ["z"] = 1
              }
            },
            {
              id = 11,
              name = "weaponcursor2",
              class = "Gui.Cursor",
              shape = "rectangle",
              x = 212,
              y = 200,
              width = 16,
              height = 16,
              rotation = 90,
              gid = 8,
              visible = true,
              properties = {
                ["offsetx"] = -8,
                ["offsety"] = 8,
                ["z"] = 1
              }
            },
            {
              id = 12,
              name = "weaponcursor3",
              class = "Gui.Cursor",
              shape = "rectangle",
              x = 212,
              y = 184,
              width = 16,
              height = 16,
              rotation = 180,
              gid = 8,
              visible = true,
              properties = {
                ["offsetx"] = -8,
                ["offsety"] = -8,
                ["z"] = 1
              }
            },
            {
              id = 13,
              name = "weaponcursor4",
              class = "Gui.Cursor",
              shape = "rectangle",
              x = 228,
              y = 184,
              width = 16,
              height = 16,
              rotation = 270,
              gid = 8,
              visible = true,
              properties = {
                ["offsetx"] = 8,
                ["offsety"] = -8,
                ["z"] = 1
              }
            }
          }
        }
      }
    },
    {
      type = "objectgroup",
      draworder = "topdown",
      id = 5,
      name = "pausemenu",
      class = "Gui.Menu",
      visible = true,
      opacity = 1,
      offsetx = 0,
      offsety = 0,
      parallaxx = 1,
      parallaxy = 1,
      properties = {},
      objects = {
        {
          id = 14,
          name = "PAUSE!",
          class = "",
          shape = "text",
          x = 80,
          y = 56,
          width = 96,
          height = 8,
          rotation = 0,
          visible = true,
          text = "PAUSE!",
          fontfamily = "Press Start 2P",
          pixelsize = 8,
          wrap = true,
          color = { 255, 255, 255 },
          halign = "center",
          properties = {}
        },
        {
          id = 15,
          name = "Resume",
          class = "BeeShooter.Gui.Button",
          shape = "text",
          x = 104,
          y = 88,
          width = 64,
          height = 8,
          rotation = 0,
          visible = true,
          text = "Resume",
          fontfamily = "Press Start 2P",
          pixelsize = 8,
          wrap = true,
          color = { 255, 255, 255 },
          properties = {
            ["action"] = "resumeGame"
          }
        },
        {
          id = 16,
          name = "End",
          class = "BeeShooter.Gui.Button",
          shape = "text",
          x = 104,
          y = 104,
          width = 64,
          height = 8,
          rotation = 0,
          visible = true,
          text = "End",
          fontfamily = "Press Start 2P",
          pixelsize = 8,
          wrap = true,
          color = { 255, 255, 255 },
          properties = {
            ["action"] = "endGame"
          }
        },
        {
          id = 18,
          name = "cursor",
          class = "Gui.Cursor",
          shape = "text",
          x = 88,
          y = 88,
          width = 8,
          height = 8,
          rotation = 0,
          visible = true,
          text = "▶",
          fontfamily = "Press Start 2P",
          pixelsize = 8,
          wrap = true,
          color = { 255, 255, 255 },
          properties = {
            ["offsetx"] = -16
          }
        }
      }
    },
    {
      type = "group",
      id = 10,
      name = "hud_touch",
      class = "",
      visible = true,
      opacity = 1,
      offsetx = 0,
      offsety = 0,
      parallaxx = 1,
      parallaxy = 1,
      properties = {},
      layers = {
        {
          type = "objectgroup",
          draworder = "topdown",
          id = 9,
          name = "controls",
          class = "",
          visible = true,
          opacity = 1,
          offsetx = 0,
          offsety = 0,
          parallaxx = 1,
          parallaxy = 1,
          properties = {},
          objects = {
            {
              id = 20,
              name = "",
              class = "",
              shape = "rectangle",
              x = -8,
              y = -48,
              width = 272,
              height = 480,
              rotation = 0,
              visible = false,
              properties = {}
            },
            {
              id = 34,
              name = "touchpad",
              class = "",
              shape = "rectangle",
              x = 0,
              y = 288,
              width = 128,
              height = 128,
              rotation = 0,
              visible = true,
              properties = {}
            },
            {
              id = 35,
              name = "fireA",
              class = "",
              shape = "rectangle",
              x = 152,
              y = 288,
              width = 104,
              height = 64,
              rotation = 0,
              visible = true,
              properties = {}
            },
            {
              id = 36,
              name = "fireB",
              class = "",
              shape = "rectangle",
              x = 152,
              y = 352,
              width = 104,
              height = 64,
              rotation = 0,
              visible = true,
              properties = {}
            },
            {
              id = 37,
              name = "",
              class = "",
              shape = "text",
              x = 184,
              y = 304,
              width = 64,
              height = 32,
              rotation = 0,
              visible = true,
              text = "FIRE\nPRIMARY",
              fontfamily = "Unifont",
              wrap = true,
              color = { 255, 255, 255 },
              properties = {}
            },
            {
              id = 41,
              name = "",
              class = "",
              shape = "text",
              x = 96,
              y = 240,
              width = 64,
              height = 32,
              rotation = 0,
              visible = true,
              text = "PAUSE",
              fontfamily = "Unifont",
              wrap = true,
              color = { 255, 255, 255 },
              halign = "center",
              valign = "center",
              properties = {}
            },
            {
              id = 38,
              name = "",
              class = "",
              shape = "text",
              x = 184,
              y = 368,
              width = 72,
              height = 32,
              rotation = 0,
              visible = true,
              text = "FIRE\nSECONDARY",
              fontfamily = "Unifont",
              wrap = true,
              color = { 255, 255, 255 },
              properties = {}
            },
            {
              id = 39,
              name = "",
              class = "",
              shape = "text",
              x = 0,
              y = 336,
              width = 128,
              height = 32,
              rotation = 0,
              visible = true,
              text = "MOVE",
              fontfamily = "Unifont",
              wrap = true,
              color = { 255, 255, 255 },
              halign = "center",
              valign = "center",
              properties = {}
            },
            {
              id = 40,
              name = "pause",
              class = "",
              shape = "rectangle",
              x = 96,
              y = 240,
              width = 64,
              height = 32,
              rotation = 0,
              visible = true,
              properties = {}
            }
          }
        },
        {
          type = "objectgroup",
          draworder = "index",
          id = 11,
          name = "status",
          class = "",
          visible = true,
          opacity = 1,
          offsetx = 0,
          offsety = 0,
          parallaxx = 1,
          parallaxy = 1,
          properties = {
            ["z"] = 0
          },
          objects = {
            {
              id = 21,
              name = "score",
              class = "",
              shape = "text",
              x = 8,
              y = -24,
              width = 112,
              height = 16,
              rotation = 0,
              visible = true,
              text = "00000000",
              fontfamily = "Unifont",
              wrap = true,
              color = { 255, 255, 255 },
              halign = "right",
              properties = {}
            },
            {
              id = 22,
              name = "lives",
              class = "",
              shape = "text",
              x = 0,
              y = 224,
              width = 80,
              height = 16,
              rotation = 0,
              visible = true,
              text = "♥♥♥♥♥♥♥♥♥",
              fontfamily = "Unifont",
              wrap = true,
              color = { 255, 255, 255 },
              properties = {}
            },
            {
              id = 23,
              name = "speed",
              class = "",
              shape = "text",
              x = 184,
              y = 232,
              width = 64,
              height = 8,
              rotation = 0,
              visible = false,
              text = "Speed ▶▶",
              fontfamily = "Press Start 2P",
              pixelsize = 8,
              wrap = true,
              color = { 255, 255, 255 },
              properties = {}
            },
            {
              id = 24,
              name = "time",
              class = "",
              shape = "text",
              x = 136,
              y = -24,
              width = 112,
              height = 16,
              rotation = 0,
              visible = true,
              text = "00:00:00",
              fontfamily = "Unifont",
              wrap = true,
              color = { 255, 255, 255 },
              properties = {}
            },
            {
              id = 25,
              name = "bonus",
              class = "BeeShooter.Gui.BonusText",
              shape = "text",
              x = 8,
              y = -40,
              width = 112,
              height = 16,
              rotation = 0,
              visible = true,
              text = "BONUS! 25000",
              fontfamily = "Unifont",
              wrap = true,
              color = { 255, 255, 255 },
              halign = "right",
              properties = {}
            }
          }
        },
        {
          type = "objectgroup",
          draworder = "index",
          id = 12,
          name = "weapons",
          class = "Gui.Menu",
          visible = true,
          opacity = 1,
          offsetx = 0,
          offsety = 0,
          parallaxx = 1,
          parallaxy = 1,
          properties = {
            ["z"] = 0
          },
          objects = {
            {
              id = 26,
              name = "weaponbackA",
              class = "",
              shape = "rectangle",
              x = 168,
              y = 320,
              width = 16,
              height = 16,
              rotation = 0,
              gid = 7,
              visible = true,
              properties = {
                ["z"] = -1
              }
            },
            {
              id = 27,
              name = "weaponbackB",
              class = "",
              shape = "rectangle",
              x = 168,
              y = 384,
              width = 16,
              height = 16,
              rotation = 0,
              gid = 7,
              visible = true,
              properties = {
                ["z"] = -1
              }
            },
            {
              id = 28,
              name = "weaponA",
              class = "Gui.Button",
              shape = "rectangle",
              x = 168,
              y = 320,
              width = 16,
              height = 16,
              rotation = 0,
              gid = 5,
              visible = true,
              properties = {
                ["z"] = 1
              }
            },
            {
              id = 29,
              name = "weaponB",
              class = "Gui.Button",
              shape = "rectangle",
              x = 168,
              y = 384,
              width = 16,
              height = 16,
              rotation = 0,
              gid = 2,
              visible = true,
              properties = {
                ["z"] = 1
              }
            },
            {
              id = 30,
              name = "weaponcursor1",
              class = "Gui.Cursor",
              shape = "rectangle",
              x = 176,
              y = 328,
              width = 16,
              height = 16,
              rotation = 0,
              gid = 8,
              visible = true,
              properties = {
                ["offsetx"] = 8,
                ["offsety"] = 8,
                ["z"] = 1
              }
            },
            {
              id = 31,
              name = "weaponcursor2",
              class = "Gui.Cursor",
              shape = "rectangle",
              x = 160,
              y = 328,
              width = 16,
              height = 16,
              rotation = 90,
              gid = 8,
              visible = true,
              properties = {
                ["offsetx"] = -8,
                ["offsety"] = 8,
                ["z"] = 1
              }
            },
            {
              id = 32,
              name = "weaponcursor3",
              class = "Gui.Cursor",
              shape = "rectangle",
              x = 160,
              y = 312,
              width = 16,
              height = 16,
              rotation = 180,
              gid = 8,
              visible = true,
              properties = {
                ["offsetx"] = -8,
                ["offsety"] = -8,
                ["z"] = 1
              }
            },
            {
              id = 33,
              name = "weaponcursor4",
              class = "Gui.Cursor",
              shape = "rectangle",
              x = 176,
              y = 312,
              width = 16,
              height = 16,
              rotation = 270,
              gid = 8,
              visible = true,
              properties = {
                ["offsetx"] = 8,
                ["offsety"] = -8,
                ["z"] = 1
              }
            }
          }
        }
      }
    },
    {
      type = "objectgroup",
      draworder = "topdown",
      id = 13,
      name = "pausemenu_touch",
      class = "",
      visible = true,
      opacity = 1,
      offsetx = 0,
      offsety = 0,
      parallaxx = 1,
      parallaxy = 1,
      properties = {},
      objects = {
        {
          id = 46,
          name = "resume",
          class = "",
          shape = "rectangle",
          x = 160,
          y = 240,
          width = 64,
          height = 32,
          rotation = 0,
          visible = true,
          properties = {}
        },
        {
          id = 47,
          name = "end",
          class = "",
          shape = "rectangle",
          x = 32,
          y = 240,
          width = 64,
          height = 32,
          rotation = 0,
          visible = true,
          properties = {}
        },
        {
          id = 42,
          name = "PAUSE!",
          class = "",
          shape = "text",
          x = 80,
          y = 104,
          width = 96,
          height = 16,
          rotation = 0,
          visible = false,
          text = "PAUSE!",
          fontfamily = "Unifont",
          wrap = true,
          color = { 255, 255, 255 },
          halign = "center",
          properties = {}
        },
        {
          id = 43,
          name = "Resume",
          class = "BeeShooter.Gui.Button",
          shape = "text",
          x = 160,
          y = 240,
          width = 64,
          height = 32,
          rotation = 0,
          visible = true,
          text = "RESUME",
          fontfamily = "Unifont",
          wrap = true,
          color = { 255, 255, 255 },
          halign = "center",
          valign = "center",
          properties = {
            ["action"] = "resumeGame"
          }
        },
        {
          id = 44,
          name = "End",
          class = "BeeShooter.Gui.Button",
          shape = "text",
          x = 32,
          y = 240,
          width = 64,
          height = 32,
          rotation = 0,
          visible = true,
          text = "END",
          fontfamily = "Unifont",
          wrap = true,
          color = { 255, 255, 255 },
          halign = "center",
          valign = "center",
          properties = {
            ["action"] = "endGame"
          }
        }
      }
    }
  }
}
