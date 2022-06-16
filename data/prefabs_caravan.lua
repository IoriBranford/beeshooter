return {
  version = "1.5",
  luaversion = "5.1",
  tiledversion = "1.8.5",
  orientation = "orthogonal",
  renderorder = "right-down",
  width = 30,
  height = 20,
  tilewidth = 16,
  tileheight = 16,
  nextlayerid = 4,
  nextobjectid = 6,
  properties = {},
  tilesets = {
    {
      name = "AntBigParts",
      firstgid = 1,
      tilewidth = 24,
      tileheight = 24,
      spacing = 0,
      margin = 0,
      columns = 2,
      image = "tilesets/AntBigParts.png",
      imagewidth = 48,
      imageheight = 24,
      objectalignment = "center",
      tileoffset = {
        x = 0,
        y = 0
      },
      grid = {
        orientation = "orthogonal",
        width = 24,
        height = 24
      },
      properties = {},
      wangsets = {},
      tilecount = 2,
      tiles = {
        {
          id = 0,
          objectGroup = {
            type = "objectgroup",
            draworder = "index",
            id = 2,
            name = "",
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
                name = "hitbox",
                type = "",
                shape = "rectangle",
                x = 4,
                y = 4,
                width = 16,
                height = 16,
                rotation = 0,
                visible = true,
                properties = {}
              }
            }
          }
        },
        {
          id = 1,
          objectGroup = {
            type = "objectgroup",
            draworder = "index",
            id = 2,
            name = "",
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
                name = "hitbox",
                type = "",
                shape = "rectangle",
                x = 4,
                y = 4,
                width = 16,
                height = 16,
                rotation = 0,
                visible = true,
                properties = {}
              }
            }
          }
        }
      }
    },
    {
      name = "AntBig",
      firstgid = 3,
      tilewidth = 60,
      tileheight = 40,
      spacing = 0,
      margin = 0,
      columns = 3,
      image = "tilesets/AntBig.png",
      imagewidth = 180,
      imageheight = 40,
      objectalignment = "center",
      tileoffset = {
        x = 0,
        y = 0
      },
      grid = {
        orientation = "orthogonal",
        width = 60,
        height = 40
      },
      properties = {},
      wangsets = {},
      tilecount = 3,
      tiles = {
        {
          id = 0,
          objectGroup = {
            type = "objectgroup",
            draworder = "index",
            id = 2,
            name = "",
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
                name = "hitbox",
                type = "",
                shape = "rectangle",
                x = 6,
                y = 8,
                width = 48,
                height = 24,
                rotation = 0,
                visible = true,
                properties = {}
              }
            }
          },
          animation = {
            {
              tileid = 0,
              duration = 100
            },
            {
              tileid = 1,
              duration = 100
            }
          }
        }
      }
    },
    {
      name = "BeehiveObjects",
      firstgid = 6,
      tilewidth = 16,
      tileheight = 32,
      spacing = 0,
      margin = 0,
      columns = 12,
      image = "tilesets/BeehiveObjects.png",
      imagewidth = 192,
      imageheight = 32,
      objectalignment = "center",
      tileoffset = {
        x = 0,
        y = 0
      },
      grid = {
        orientation = "orthogonal",
        width = 16,
        height = 32
      },
      properties = {},
      wangsets = {},
      tilecount = 12,
      tiles = {}
    }
  },
  layers = {
    {
      type = "objectgroup",
      draworder = "topdown",
      id = 2,
      name = "defeatdrops_AntBig",
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
          name = "AntBigCorpse",
          type = "",
          shape = "rectangle",
          x = 0,
          y = 0,
          width = 60,
          height = 40,
          rotation = 0,
          gid = 5,
          visible = true,
          properties = {
            ["z"] = 1
          }
        },
        {
          id = 2,
          name = "AntBigHead",
          type = "",
          shape = "rectangle",
          x = 24,
          y = -8,
          width = 24,
          height = 24,
          rotation = 0,
          gid = 1,
          visible = true,
          properties = {
            ["z"] = 10
          }
        },
        {
          id = 3,
          name = "AntBigAbdomen",
          type = "",
          shape = "rectangle",
          x = -24,
          y = -8,
          width = 24,
          height = 24,
          rotation = 0,
          gid = 2,
          visible = true,
          properties = {
            ["z"] = 10
          }
        }
      }
    },
    {
      type = "objectgroup",
      draworder = "topdown",
      id = 3,
      name = "defeatdrops_HoneyPot",
      visible = true,
      opacity = 1,
      offsetx = 0,
      offsety = 0,
      parallaxx = 1,
      parallaxy = 1,
      properties = {},
      objects = {
        {
          id = 4,
          name = "HoneyPotOpen",
          type = "",
          shape = "rectangle",
          x = 0,
          y = 0,
          width = 16,
          height = 32,
          rotation = 0,
          gid = 7,
          visible = true,
          properties = {
            ["z"] = 1
          }
        },
        {
          id = 5,
          name = "PowerUp",
          type = "",
          shape = "rectangle",
          x = 0,
          y = 0,
          width = 16,
          height = 32,
          rotation = 0,
          gid = 10,
          visible = true,
          properties = {}
        }
      }
    }
  }
}
