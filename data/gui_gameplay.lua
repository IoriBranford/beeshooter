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
  nextlayerid = 6,
  nextobjectid = 19,
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
      type = "objectgroup",
      draworder = "index",
      id = 2,
      name = "hud",
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
          properties = {}
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
          properties = {}
        },
        {
          id = 5,
          name = "weaponA",
          class = "",
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
          class = "",
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
          class = "",
          shape = "rectangle",
          x = 228,
          y = 200,
          width = 16,
          height = 16,
          rotation = 0,
          gid = 8,
          visible = true,
          properties = {
            ["z"] = 1
          }
        },
        {
          id = 11,
          name = "weaponcursor2",
          class = "",
          shape = "rectangle",
          x = 212,
          y = 200,
          width = 16,
          height = 16,
          rotation = 90,
          gid = 8,
          visible = true,
          properties = {
            ["z"] = 1
          }
        },
        {
          id = 12,
          name = "weaponcursor3",
          class = "",
          shape = "rectangle",
          x = 212,
          y = 184,
          width = 16,
          height = 16,
          rotation = 180,
          gid = 8,
          visible = true,
          properties = {
            ["z"] = 1
          }
        },
        {
          id = 13,
          name = "weaponcursor4",
          class = "",
          shape = "rectangle",
          x = 228,
          y = 184,
          width = 16,
          height = 16,
          rotation = 270,
          gid = 8,
          visible = true,
          properties = {
            ["z"] = 1
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
            ["pressaction"] = "resumeGame"
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
            ["pressaction"] = "endGame"
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
    }
  }
}
