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
  nextlayerid = 5,
  nextobjectid = 10,
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
      objectalignment = "unspecified",
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
          id = 6,
          animation = {
            {
              tileid = 6,
              duration = 100
            }
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
      properties = {},
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
          x = 216,
          y = 200,
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
          x = 232,
          y = 200,
          width = 16,
          height = 16,
          rotation = 0,
          gid = 8,
          visible = true,
          properties = {}
        },
        {
          id = 5,
          name = "weaponA",
          class = "",
          shape = "rectangle",
          x = 216,
          y = 200,
          width = 16,
          height = 16,
          rotation = 0,
          gid = 5,
          visible = true,
          properties = {}
        },
        {
          id = 6,
          name = "weaponB",
          class = "",
          shape = "rectangle",
          x = 232,
          y = 200,
          width = 16,
          height = 16,
          rotation = 0,
          gid = 6,
          visible = true,
          properties = {}
        }
      }
    }
  }
}