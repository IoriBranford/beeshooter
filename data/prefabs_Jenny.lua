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
  nextlayerid = 9,
  nextobjectid = 31,
  properties = {},
  tilesets = {
    {
      name = "Jenny",
      firstgid = 1,
      tilewidth = 32,
      tileheight = 32,
      spacing = 0,
      margin = 0,
      columns = 9,
      image = "tilesets/Jenny.png",
      imagewidth = 288,
      imageheight = 32,
      objectalignment = "center",
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
                type = "",
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
                type = "",
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
                type = "",
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
                type = "",
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
    }
  },
  layers = {
    {
      type = "objectgroup",
      draworder = "topdown",
      id = 3,
      name = "JennyShotA1",
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
          id = 2,
          name = "JennyShotA11",
          type = "JennyShot",
          shape = "rectangle",
          x = -6,
          y = 0,
          width = 32,
          height = 32,
          rotation = -90,
          gid = 3,
          visible = true,
          properties = {}
        },
        {
          id = 3,
          name = "JennyShotA12",
          type = "JennyShot",
          shape = "rectangle",
          x = 6,
          y = 0,
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
      id = 5,
      name = "JennyShotA2",
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
          id = 8,
          name = "JennyShotA22",
          type = "JennyShot",
          shape = "rectangle",
          x = 6,
          y = 0,
          width = 32,
          height = 32,
          rotation = -90,
          gid = 3,
          visible = true,
          properties = {}
        },
        {
          id = 11,
          name = "JennyShotA21",
          type = "JennyShot",
          shape = "rectangle",
          x = 0,
          y = 0,
          width = 32,
          height = 32,
          rotation = -135,
          gid = 3,
          visible = true,
          properties = {}
        },
        {
          id = 9,
          name = "JennyShotA23",
          type = "JennyShot",
          shape = "rectangle",
          x = -6,
          y = 0,
          width = 32,
          height = 32,
          rotation = -90,
          gid = 3,
          visible = true,
          properties = {}
        },
        {
          id = 10,
          name = "JennyShotA24",
          type = "JennyShot",
          shape = "rectangle",
          x = 0,
          y = 0,
          width = 32,
          height = 32,
          rotation = -45,
          gid = 3,
          visible = true,
          properties = {}
        }
      }
    },
    {
      type = "objectgroup",
      draworder = "topdown",
      id = 7,
      name = "JennyShotA3",
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
          id = 16,
          name = "JennyShotA31",
          type = "JennyShot",
          shape = "rectangle",
          x = -6,
          y = 0,
          width = 32,
          height = 32,
          rotation = -90,
          gid = 3,
          visible = true,
          properties = {}
        },
        {
          id = 17,
          name = "JennyShotA32",
          type = "JennyShot",
          shape = "rectangle",
          x = 0,
          y = 0,
          width = 32,
          height = 32,
          rotation = -135,
          gid = 3,
          visible = true,
          properties = {}
        },
        {
          id = 21,
          name = "JennyShotA33",
          type = "JennyShot",
          shape = "rectangle",
          x = 0,
          y = 0,
          width = 32,
          height = 32,
          rotation = 135,
          gid = 3,
          visible = true,
          properties = {}
        },
        {
          id = 18,
          name = "JennyShotA34",
          type = "JennyShot",
          shape = "rectangle",
          x = 6,
          y = 0,
          width = 32,
          height = 32,
          rotation = -90,
          gid = 3,
          visible = true,
          properties = {}
        },
        {
          id = 19,
          name = "JennyShotA35",
          type = "JennyShot",
          shape = "rectangle",
          x = 0,
          y = 0,
          width = 32,
          height = 32,
          rotation = -45,
          gid = 3,
          visible = true,
          properties = {}
        },
        {
          id = 20,
          name = "JennyShotA36",
          type = "JennyShot",
          shape = "rectangle",
          x = 0,
          y = 0,
          width = 32,
          height = 32,
          rotation = 45,
          gid = 3,
          visible = true,
          properties = {}
        }
      }
    },
    {
      type = "objectgroup",
      draworder = "topdown",
      id = 4,
      name = "JennyShotB1",
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
          id = 6,
          name = "JennyShotB11",
          type = "JennyShot",
          shape = "rectangle",
          x = 0,
          y = 0,
          width = 32,
          height = 32,
          rotation = -90,
          gid = 3,
          visible = true,
          properties = {}
        },
        {
          id = 7,
          name = "JennyShotB12",
          type = "JennyShot",
          shape = "rectangle",
          x = 0,
          y = 0,
          width = 32,
          height = 32,
          rotation = 90,
          gid = 3,
          visible = true,
          properties = {}
        }
      }
    },
    {
      type = "objectgroup",
      draworder = "topdown",
      id = 6,
      name = "JennyShotB2",
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
          id = 12,
          name = "JennyShotB21",
          type = "JennyShot",
          shape = "rectangle",
          x = 0,
          y = 0,
          width = 32,
          height = 32,
          rotation = -90,
          gid = 3,
          visible = true,
          properties = {}
        },
        {
          id = 15,
          name = "JennyShotB22",
          type = "JennyShot",
          shape = "rectangle",
          x = 0,
          y = 0,
          width = 32,
          height = 32,
          rotation = 0,
          gid = 3,
          visible = true,
          properties = {}
        },
        {
          id = 13,
          name = "JennyShotB23",
          type = "JennyShot",
          shape = "rectangle",
          x = 0,
          y = 0,
          width = 32,
          height = 32,
          rotation = 90,
          gid = 3,
          visible = true,
          properties = {}
        },
        {
          id = 14,
          name = "JennyShotB24",
          type = "JennyShot",
          shape = "rectangle",
          x = 0,
          y = 0,
          width = 32,
          height = 32,
          rotation = 180,
          gid = 3,
          visible = true,
          properties = {}
        }
      }
    },
    {
      type = "objectgroup",
      draworder = "topdown",
      id = 8,
      name = "JennyShotB3",
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
          id = 22,
          name = "JennyShotB31",
          type = "JennyShot",
          shape = "rectangle",
          x = 0,
          y = 0,
          width = 32,
          height = 32,
          rotation = -90,
          gid = 3,
          visible = true,
          properties = {}
        },
        {
          id = 23,
          name = "JennyShotB32",
          type = "JennyShot",
          shape = "rectangle",
          x = 0,
          y = 0,
          width = 32,
          height = 32,
          rotation = 0,
          gid = 3,
          visible = true,
          properties = {}
        },
        {
          id = 24,
          name = "JennyShotB33",
          type = "JennyShot",
          shape = "rectangle",
          x = 0,
          y = 0,
          width = 32,
          height = 32,
          rotation = 90,
          gid = 3,
          visible = true,
          properties = {}
        },
        {
          id = 25,
          name = "JennyShotB34",
          type = "JennyShot",
          shape = "rectangle",
          x = 0,
          y = 0,
          width = 32,
          height = 32,
          rotation = 180,
          gid = 3,
          visible = true,
          properties = {}
        },
        {
          id = 28,
          name = "JennyShotB35",
          type = "JennyShot",
          shape = "rectangle",
          x = 0,
          y = 0,
          width = 32,
          height = 32,
          rotation = -135,
          gid = 3,
          visible = true,
          properties = {}
        },
        {
          id = 29,
          name = "JennyShotB36",
          type = "JennyShot",
          shape = "rectangle",
          x = 0,
          y = 0,
          width = 32,
          height = 32,
          rotation = -45,
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
          type = "",
          shape = "rectangle",
          x = 0,
          y = 0,
          width = 32,
          height = 32,
          rotation = 0,
          gid = 4,
          visible = true,
          properties = {
            ["lifetime"] = 12
          }
        },
        {
          id = 1,
          name = "Jenny",
          type = "",
          shape = "rectangle",
          x = 0,
          y = 0,
          width = 32,
          height = 32,
          rotation = 0,
          gid = 2,
          visible = true,
          properties = {}
        }
      }
    }
  }
}
