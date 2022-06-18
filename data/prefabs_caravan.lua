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
  nextlayerid = 6,
  nextobjectid = 12,
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
                x = 0,
                y = 12,
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
                x = 0,
                y = 16,
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
          id = 4,
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
                x = 0,
                y = 6,
                width = 16,
                height = 20,
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
      name = "FlyBullet",
      firstgid = 18,
      tilewidth = 16,
      tileheight = 8,
      spacing = 0,
      margin = 0,
      columns = 2,
      image = "tilesets/FlyBullet.png",
      imagewidth = 32,
      imageheight = 8,
      objectalignment = "center",
      tileoffset = {
        x = 0,
        y = 0
      },
      grid = {
        orientation = "orthogonal",
        width = 16,
        height = 8
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
                x = 6,
                y = 2,
                width = 4,
                height = 4,
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
      name = "Ant",
      firstgid = 20,
      tilewidth = 16,
      tileheight = 16,
      spacing = 0,
      margin = 0,
      columns = 2,
      image = "tilesets/Ant.png",
      imagewidth = 32,
      imageheight = 16,
      objectalignment = "center",
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
                x = 0,
                y = 2,
                width = 16,
                height = 12,
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
      name = "Aliens",
      firstgid = 22,
      tilewidth = 24,
      tileheight = 16,
      spacing = 0,
      margin = 0,
      columns = 6,
      image = "tilesets/Aliens.png",
      imagewidth = 144,
      imageheight = 32,
      objectalignment = "center",
      tileoffset = {
        x = 0,
        y = 0
      },
      grid = {
        orientation = "orthogonal",
        width = 24,
        height = 16
      },
      properties = {},
      wangsets = {},
      tilecount = 12,
      tiles = {
        {
          id = 0,
          properties = {
            ["name"] = "gun_walk"
          },
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
                x = 2,
                y = 2,
                width = 20,
                height = 12,
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
            },
            {
              tileid = 2,
              duration = 100
            },
            {
              tileid = 3,
              duration = 100
            }
          }
        },
        {
          id = 4,
          properties = {
            ["name"] = "gun_stand"
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
                name = "hitbox",
                type = "",
                shape = "rectangle",
                x = 2,
                y = 2,
                width = 20,
                height = 12,
                rotation = 0,
                visible = true,
                properties = {}
              }
            }
          },
          animation = {
            {
              tileid = 4,
              duration = 100
            },
            {
              tileid = 5,
              duration = 100
            }
          }
        },
        {
          id = 6,
          properties = {
            ["name"] = "claw_walk"
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
                name = "hitbox",
                type = "",
                shape = "rectangle",
                x = 2,
                y = 2,
                width = 20,
                height = 12,
                rotation = 0,
                visible = true,
                properties = {}
              }
            }
          },
          animation = {
            {
              tileid = 6,
              duration = 100
            },
            {
              tileid = 7,
              duration = 100
            },
            {
              tileid = 8,
              duration = 100
            },
            {
              tileid = 9,
              duration = 100
            }
          }
        },
        {
          id = 10,
          properties = {
            ["name"] = "claw_scrape"
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
                name = "hitbox",
                type = "",
                shape = "rectangle",
                x = 2,
                y = 2,
                width = 20,
                height = 12,
                rotation = 0,
                visible = true,
                properties = {}
              }
            }
          },
          animation = {
            {
              tileid = 10,
              duration = 100
            },
            {
              tileid = 11,
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
            ["velx"] = 0.125,
            ["vely"] = -4,
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
            ["velx"] = -0.125,
            ["vely"] = -4,
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
          name = "Powerup",
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
    },
    {
      type = "objectgroup",
      draworder = "topdown",
      id = 4,
      name = "enemybullets",
      visible = true,
      opacity = 1,
      offsetx = 0,
      offsety = 0,
      parallaxx = 1,
      parallaxy = 1,
      properties = {},
      objects = {
        {
          id = 6,
          name = "FlyBullet",
          type = "",
          shape = "rectangle",
          x = 0,
          y = 0,
          width = 16,
          height = 8,
          rotation = 0,
          gid = 18,
          visible = true,
          properties = {
            ["z"] = 20
          }
        }
      }
    },
    {
      type = "objectgroup",
      draworder = "topdown",
      id = 5,
      name = "enemies",
      visible = true,
      opacity = 1,
      offsetx = 0,
      offsety = 0,
      parallaxx = 1,
      parallaxy = 1,
      properties = {},
      objects = {
        {
          id = 8,
          name = "Ant",
          type = "Ant",
          shape = "rectangle",
          x = 0,
          y = 0,
          width = 16,
          height = 16,
          rotation = 0,
          gid = 20,
          visible = true,
          properties = {
            ["z"] = 1
          }
        },
        {
          id = 10,
          name = "AlienGunner",
          type = "AlienGunner",
          shape = "rectangle",
          x = 0,
          y = 0,
          width = 24,
          height = 16,
          rotation = 0,
          gid = 22,
          visible = true,
          properties = {}
        },
        {
          id = 11,
          name = "AlienPillager",
          type = "AlienPillager",
          shape = "rectangle",
          x = 0,
          y = 0,
          width = 24,
          height = 16,
          rotation = 0,
          gid = 28,
          visible = true,
          properties = {}
        }
      }
    }
  }
}
