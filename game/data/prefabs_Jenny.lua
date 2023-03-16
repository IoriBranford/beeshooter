return {
  version = "1.9",
  luaversion = "5.1",
  tiledversion = "1.9.0",
  class = "",
  orientation = "orthogonal",
  renderorder = "right-down",
  width = 30,
  height = 20,
  tilewidth = 16,
  tileheight = 16,
  nextlayerid = 10,
  nextobjectid = 42,
  properties = {},
  tilesets = {
    {
      name = "Jenny",
      firstgid = 1,
      class = "",
      tilewidth = 32,
      tileheight = 32,
      spacing = 0,
      margin = 0,
      columns = 9,
      image = "tilesets/Jenny.png",
      imagewidth = 288,
      imageheight = 32,
      objectalignment = "center",
      tilerendersize = "tile",
      fillmode = "stretch",
      tileoffset = {
        x = 0,
        y = 0
      },
      grid = {
        orientation = "orthogonal",
        width = 32,
        height = 32
      },
      properties = {},
      wangsets = {},
      tilecount = 9,
      tiles = {
        {
          id = 0,
          properties = {
            ["name"] = "flyfastA"
          },
          objectGroup = {
            type = "objectgroup",
            draworder = "index",
            id = 3,
            name = "",
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
                id = 2,
                name = "hitbox",
                class = "",
                shape = "rectangle",
                x = 12,
                y = 12,
                width = 8,
                height = 8,
                rotation = 0,
                visible = true,
                properties = {
                  ["ishitbox"] = true
                }
              },
              {
                id = 3,
                name = "sting",
                class = "",
                shape = "point",
                x = 16,
                y = 28,
                width = 0,
                height = 0,
                rotation = 0,
                visible = true,
                properties = {}
              }
            }
          },
          animation = {
            {
              tileid = 0,
              duration = 50
            },
            {
              tileid = 1,
              duration = 50
            }
          }
        },
        {
          id = 1,
          properties = {
            ["name"] = "flyslowA"
          },
          objectGroup = {
            type = "objectgroup",
            draworder = "topdown",
            name = "",
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
                name = "sting",
                class = "",
                shape = "point",
                x = 16,
                y = 28,
                width = 0,
                height = 0,
                rotation = 0,
                visible = true,
                properties = {}
              },
              {
                id = 2,
                name = "hitbox",
                class = "",
                shape = "rectangle",
                x = 12,
                y = 12,
                width = 8,
                height = 8,
                rotation = 0,
                visible = true,
                properties = {
                  ["ishitbox"] = true
                }
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
        },
        {
          id = 2,
          objectGroup = {
            type = "objectgroup",
            draworder = "index",
            id = 2,
            name = "",
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
                name = "hitbox",
                class = "",
                shape = "rectangle",
                x = 10,
                y = 10,
                width = 12,
                height = 12,
                rotation = 0,
                visible = true,
                properties = {
                  ["ishitbox"] = true
                }
              }
            }
          }
        },
        {
          id = 3,
          properties = {
            ["name"] = "die"
          },
          animation = {
            {
              tileid = 3,
              duration = 50
            },
            {
              tileid = 4,
              duration = 50
            },
            {
              tileid = 5,
              duration = 50
            },
            {
              tileid = 6,
              duration = 50
            }
          }
        },
        {
          id = 7,
          properties = {
            ["name"] = "flyfastB"
          },
          animation = {
            {
              tileid = 7,
              duration = 50
            },
            {
              tileid = 8,
              duration = 50
            }
          }
        },
        {
          id = 8,
          properties = {
            ["name"] = "flyslowB"
          },
          animation = {
            {
              tileid = 7,
              duration = 100
            },
            {
              tileid = 8,
              duration = 100
            }
          }
        }
      }
    },
    {
      name = "JennyKill",
      firstgid = 10,
      class = "",
      tilewidth = 64,
      tileheight = 64,
      spacing = 0,
      margin = 0,
      columns = 13,
      image = "tilesets/JennyKill.png",
      imagewidth = 832,
      imageheight = 64,
      objectalignment = "bottom",
      tilerendersize = "tile",
      fillmode = "stretch",
      tileoffset = {
        x = 0,
        y = 0
      },
      grid = {
        orientation = "orthogonal",
        width = 64,
        height = 64
      },
      properties = {},
      wangsets = {},
      tilecount = 13,
      tiles = {
        {
          id = 0,
          animation = {
            {
              tileid = 0,
              duration = 50
            },
            {
              tileid = 1,
              duration = 50
            },
            {
              tileid = 2,
              duration = 50
            },
            {
              tileid = 3,
              duration = 50
            },
            {
              tileid = 4,
              duration = 50
            },
            {
              tileid = 5,
              duration = 50
            },
            {
              tileid = 6,
              duration = 50
            },
            {
              tileid = 7,
              duration = 50
            },
            {
              tileid = 8,
              duration = 50
            },
            {
              tileid = 9,
              duration = 50
            },
            {
              tileid = 10,
              duration = 50
            },
            {
              tileid = 11,
              duration = 50
            },
            {
              tileid = 12,
              duration = 50
            }
          }
        }
      }
    }
  },
  layers = {
    {
      type = "objectgroup",
      draworder = "topdown",
      id = 9,
      name = "JennyShot",
      class = "",
      visible = true,
      opacity = 1,
      offsetx = 0,
      offsety = 0,
      parallaxx = 1,
      parallaxy = 1,
      properties = {
        ["z"] = 99
      },
      objects = {
        {
          id = 32,
          name = "JennyShotU",
          class = "JennyShot",
          shape = "rectangle",
          x = 0,
          y = -6,
          width = 32,
          height = 32,
          rotation = -90,
          gid = 3,
          visible = true,
          properties = {}
        },
        {
          id = 35,
          name = "JennyShotD",
          class = "JennyShot",
          shape = "rectangle",
          x = 0,
          y = 6,
          width = 32,
          height = 32,
          rotation = 90,
          gid = 3,
          visible = true,
          properties = {}
        },
        {
          id = 34,
          name = "JennyShotUL",
          class = "JennyShot",
          shape = "rectangle",
          x = -6,
          y = -6,
          width = 32,
          height = 32,
          rotation = -135,
          gid = 3,
          visible = true,
          properties = {}
        },
        {
          id = 37,
          name = "JennyShotUR",
          class = "JennyShot",
          shape = "rectangle",
          x = 6,
          y = -6,
          width = 32,
          height = 32,
          rotation = -45,
          gid = 3,
          visible = true,
          properties = {}
        },
        {
          id = 40,
          name = "JennyShotL",
          class = "JennyShot",
          shape = "rectangle",
          x = -6,
          y = 0,
          width = 32,
          height = 32,
          rotation = 180,
          gid = 3,
          visible = true,
          properties = {}
        },
        {
          id = 41,
          name = "JennyShotR",
          class = "JennyShot",
          shape = "rectangle",
          x = 6,
          y = 0,
          width = 32,
          height = 32,
          rotation = 0,
          gid = 3,
          visible = true,
          properties = {}
        },
        {
          id = 39,
          name = "JennyShotDL",
          class = "JennyShot",
          shape = "rectangle",
          x = -6,
          y = 6,
          width = 32,
          height = 32,
          rotation = 135,
          gid = 3,
          visible = true,
          properties = {}
        },
        {
          id = 38,
          name = "JennyShotDR",
          class = "JennyShot",
          shape = "rectangle",
          x = 6,
          y = 6,
          width = 32,
          height = 32,
          rotation = 45,
          gid = 3,
          visible = true,
          properties = {}
        },
        {
          id = 36,
          name = "JennyShotU1",
          class = "JennyShot",
          shape = "rectangle",
          x = -6,
          y = -6,
          width = 32,
          height = 32,
          rotation = -90,
          gid = 3,
          visible = true,
          properties = {}
        },
        {
          id = 33,
          name = "JennyShotU2",
          class = "JennyShot",
          shape = "rectangle",
          x = 6,
          y = -6,
          width = 32,
          height = 32,
          rotation = -90,
          gid = 3,
          visible = true,
          properties = {}
        }
      }
    },
    {
      type = "objectgroup",
      draworder = "topdown",
      id = 2,
      name = "Jenny",
      class = "",
      visible = true,
      opacity = 1,
      offsetx = 0,
      offsety = 0,
      parallaxx = 1,
      parallaxy = 1,
      properties = {
        ["z"] = 100
      },
      objects = {
        {
          id = 30,
          name = "JennyKilled",
          class = "",
          shape = "rectangle",
          x = 0,
          y = 0,
          width = 32,
          height = 32,
          rotation = 0,
          gid = 4,
          visible = true,
          properties = {
            ["lifetime"] = "animation"
          }
        },
        {
          id = 1,
          name = "Jenny",
          class = "",
          shape = "rectangle",
          x = 0,
          y = 0,
          width = 32,
          height = 32,
          rotation = 0,
          gid = 2,
          visible = true,
          properties = {}
        },
        {
          id = 31,
          name = "JennyKilledSplat",
          class = "",
          shape = "rectangle",
          x = 0,
          y = 8,
          width = 64,
          height = 64,
          rotation = 0,
          gid = 10,
          visible = true,
          properties = {
            ["lifetime"] = "animation"
          }
        }
      }
    }
  }
}
