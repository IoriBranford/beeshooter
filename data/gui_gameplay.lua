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
  nextlayerid = 32,
  nextobjectid = 198,
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
    },
    {
      name = "MoveCursor",
      firstgid = 9,
      class = "",
      tilewidth = 8,
      tileheight = 8,
      spacing = 0,
      margin = 0,
      columns = 1,
      image = "tilesets/MoveCursor.png",
      imagewidth = 8,
      imageheight = 8,
      objectalignment = "center",
      tilerendersize = "tile",
      fillmode = "stretch",
      tileoffset = {
        x = 0,
        y = 0
      },
      grid = {
        orientation = "orthogonal",
        width = 8,
        height = 8
      },
      properties = {},
      wangsets = {},
      tilecount = 1,
      tiles = {}
    },
    {
      name = "Jenny",
      firstgid = 10,
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
      name = "BeehiveObjects",
      firstgid = 19,
      class = "",
      tilewidth = 16,
      tileheight = 32,
      spacing = 0,
      margin = 0,
      columns = 16,
      image = "tilesets/BeehiveObjects.png",
      imagewidth = 256,
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
        width = 16,
        height = 32
      },
      properties = {},
      wangsets = {},
      tilecount = 16,
      tiles = {
        {
          id = 0,
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
          id = 3,
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
          id = 4,
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
        },
        {
          id = 7,
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
        },
        {
          id = 9,
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
                x = 8,
                y = 6,
                width = 8,
                height = 20,
                rotation = 0,
                visible = true,
                properties = {}
              }
            }
          }
        },
        {
          id = 11,
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
                x = 4,
                y = 0,
                width = 8,
                height = 20,
                rotation = 0,
                visible = true,
                properties = {}
              }
            }
          }
        },
        {
          id = 13,
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
                x = 0,
                y = 6,
                width = 8,
                height = 20,
                rotation = 0,
                visible = true,
                properties = {}
              }
            }
          }
        },
        {
          id = 15,
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
                x = 4,
                y = 0,
                width = 8,
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
      name = "Ant",
      firstgid = 35,
      class = "",
      tilewidth = 16,
      tileheight = 16,
      spacing = 0,
      margin = 0,
      columns = 4,
      image = "tilesets/Ant.png",
      imagewidth = 64,
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
      tilecount = 4,
      tiles = {
        {
          id = 0,
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
        },
        {
          id = 2,
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
                name = "hitbox",
                class = "",
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
              tileid = 2,
              duration = 100
            },
            {
              tileid = 3,
              duration = 100
            }
          }
        }
      }
    },
    {
      name = "KillSmall",
      firstgid = 39,
      class = "",
      tilewidth = 32,
      tileheight = 32,
      spacing = 0,
      margin = 0,
      columns = 15,
      image = "tilesets/KillSmall.png",
      imagewidth = 480,
      imageheight = 32,
      objectalignment = "bottom",
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
      tilecount = 15,
      tiles = {
        {
          id = 0,
          animation = {
            {
              tileid = 0,
              duration = 33
            },
            {
              tileid = 1,
              duration = 33
            },
            {
              tileid = 2,
              duration = 33
            },
            {
              tileid = 3,
              duration = 33
            },
            {
              tileid = 4,
              duration = 33
            },
            {
              tileid = 5,
              duration = 33
            },
            {
              tileid = 6,
              duration = 33
            },
            {
              tileid = 7,
              duration = 33
            },
            {
              tileid = 8,
              duration = 33
            },
            {
              tileid = 9,
              duration = 33
            },
            {
              tileid = 10,
              duration = 33
            },
            {
              tileid = 11,
              duration = 33
            },
            {
              tileid = 12,
              duration = 33
            },
            {
              tileid = 13,
              duration = 33
            },
            {
              tileid = 14,
              duration = 33
            }
          }
        }
      }
    },
    {
      name = "JennyKill",
      firstgid = 54,
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
    },
    {
      name = "Fly",
      firstgid = 67,
      class = "",
      tilewidth = 32,
      tileheight = 32,
      spacing = 0,
      margin = 0,
      columns = 16,
      image = "tilesets/Fly.png",
      imagewidth = 512,
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
      tilecount = 16,
      tiles = {
        {
          id = 0,
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
                x = 4,
                y = 6,
                width = 24,
                height = 20,
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
            },
            {
              tileid = 13,
              duration = 50
            },
            {
              tileid = 14,
              duration = 50
            },
            {
              tileid = 15,
              duration = 50
            }
          }
        }
      }
    },
    {
      name = "FlyBullet",
      firstgid = 83,
      class = "",
      tilewidth = 16,
      tileheight = 8,
      spacing = 0,
      margin = 0,
      columns = 2,
      image = "tilesets/FlyBullet.png",
      imagewidth = 32,
      imageheight = 8,
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
      name = "Controls",
      firstgid = 85,
      class = "",
      tilewidth = 16,
      tileheight = 16,
      spacing = 0,
      margin = 0,
      columns = 1,
      image = "tilesets/Controls.png",
      imagewidth = 16,
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
      tilecount = 1,
      tiles = {}
    }
  },
  layers = {
    {
      type = "imagelayer",
      image = "titleart.png",
      id = 29,
      name = "titleart",
      class = "",
      visible = true,
      opacity = 1,
      offsetx = 0,
      offsety = 0,
      parallaxx = 1,
      parallaxy = 1,
      repeatx = false,
      repeaty = false,
      properties = {}
    },
    {
      type = "objectgroup",
      draworder = "topdown",
      id = 31,
      name = "mainmenu",
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
          id = 188,
          name = "Start",
          class = "BeeShooter.Gui.Button",
          shape = "text",
          x = 112,
          y = 160,
          width = 64,
          height = 8,
          rotation = 0,
          visible = true,
          text = "Start",
          fontfamily = "Press Start 2P",
          pixelsize = 8,
          wrap = true,
          color = { 255, 255, 255 },
          properties = {
            ["action"] = "startGame",
            ["color"] = "",
            ["linecolor"] = "",
            ["presssound"] = "",
            ["roundcorners"] = 0,
            ["selectsound"] = ""
          }
        },
        {
          id = 189,
          name = "Title",
          class = "",
          shape = "text",
          x = 64,
          y = 16,
          width = 128,
          height = 16,
          rotation = 0,
          visible = true,
          text = "HONEY SOLDIER",
          fontfamily = "Press Start 2P",
          pixelsize = 8,
          wrap = true,
          color = { 255, 255, 255 },
          halign = "center",
          valign = "center",
          properties = {}
        },
        {
          id = 192,
          name = "Title",
          class = "",
          shape = "text",
          x = 16,
          y = 200,
          width = 224,
          height = 8,
          rotation = 0,
          visible = true,
          text = "© 2022-2023 IoriBranford",
          fontfamily = "Press Start 2P",
          pixelsize = 8,
          wrap = true,
          color = { 255, 255, 255 },
          halign = "center",
          valign = "center",
          properties = {}
        },
        {
          id = 190,
          name = "Quit",
          class = "BeeShooter.Gui.Button",
          shape = "text",
          x = 112,
          y = 176,
          width = 64,
          height = 8,
          rotation = 0,
          visible = true,
          text = "Quit",
          fontfamily = "Press Start 2P",
          pixelsize = 8,
          wrap = true,
          color = { 255, 255, 255 },
          properties = {
            ["action"] = "quitGame",
            ["color"] = "",
            ["linecolor"] = "",
            ["presssound"] = "",
            ["roundcorners"] = 0,
            ["selectsound"] = ""
          }
        },
        {
          id = 191,
          name = "cursor",
          class = "Gui.Cursor",
          shape = "text",
          x = 96,
          y = 160,
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
            ["offsetx"] = -16,
            ["offsety"] = 0,
            ["roundcorners"] = 0
          }
        }
      }
    },
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
          properties = {},
          objects = {
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
                ["name"] = "3A"
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
                ["name"] = "1B"
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
                ["name"] = "cursorcorner",
                ["offsetx"] = 8,
                ["offsety"] = 8,
                ["roundcorners"] = 0
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
                ["name"] = "cursorcorner",
                ["offsetx"] = -8,
                ["offsety"] = 8,
                ["roundcorners"] = 0
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
                ["name"] = "cursorcorner",
                ["offsetx"] = -8,
                ["offsety"] = -8,
                ["roundcorners"] = 0
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
                ["name"] = "cursorcorner",
                ["offsetx"] = 8,
                ["offsety"] = -8,
                ["roundcorners"] = 0
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
            ["action"] = "resumeGame",
            ["color"] = "",
            ["linecolor"] = "",
            ["presssound"] = "",
            ["roundcorners"] = 0,
            ["selectsound"] = ""
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
            ["action"] = "endGame",
            ["color"] = "",
            ["linecolor"] = "",
            ["presssound"] = "",
            ["roundcorners"] = 0,
            ["selectsound"] = ""
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
            ["offsetx"] = -16,
            ["offsety"] = 0,
            ["roundcorners"] = 0
          }
        }
      }
    },
    {
      type = "group",
      id = 10,
      name = "touch",
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
          id = 15,
          name = "screen",
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
              x = -72,
              y = 0,
              width = 400,
              height = 224,
              rotation = 0,
              visible = false,
              properties = {}
            }
          }
        },
        {
          type = "objectgroup",
          draworder = "topdown",
          id = 9,
          name = "controls",
          class = "BeeShooter.Gui.TouchController",
          visible = true,
          opacity = 1,
          offsetx = 0,
          offsety = 0,
          parallaxx = 1,
          parallaxy = 1,
          properties = {},
          objects = {
            {
              id = 36,
              name = "changeweapon",
              class = "BeeShooter.Gui.Button",
              shape = "polygon",
              x = 288,
              y = 156,
              width = 0,
              height = 0,
              rotation = 0,
              visible = true,
              polygon = {
                { x = 4, y = 0 },
                { x = -24, y = 16 },
                { x = -24, y = 48 },
                { x = 4, y = 64 },
                { x = 32, y = 48 },
                { x = 32, y = 16 }
              },
              properties = {
                ["action"] = "changeWeapon",
                ["color"] = "#80ffaa00",
                ["linecolor"] = "#ffffedb7",
                ["pressedcolor"] = "#80aa5500",
                ["presssound"] = "",
                ["roundcorners"] = 0,
                ["selectsound"] = ""
              }
            },
            {
              id = 40,
              name = "",
              class = "BeeShooter.Gui.Button",
              shape = "polygon",
              x = 292,
              y = 8,
              width = 0,
              height = 0,
              rotation = 0,
              visible = true,
              polygon = {
                { x = 0, y = 0 },
                { x = -24, y = 16 },
                { x = -24, y = 40 },
                { x = 0, y = 56 },
                { x = 24, y = 40 },
                { x = 24, y = 16 }
              },
              properties = {
                ["action"] = "touchPauseGame",
                ["color"] = "#80ffaa00",
                ["linecolor"] = "#ffffedb7",
                ["pressedcolor"] = "#80aa5500",
                ["presssound"] = "",
                ["roundcorners"] = 0,
                ["selectsound"] = ""
              }
            },
            {
              id = 41,
              name = "Pause",
              class = "",
              shape = "text",
              x = 264,
              y = 32,
              width = 56,
              height = 8,
              rotation = 0,
              visible = true,
              text = "PAUSE",
              fontfamily = "Press Start 2P",
              pixelsize = 8,
              wrap = true,
              color = { 255, 255, 255 },
              halign = "center",
              valign = "center",
              properties = {}
            },
            {
              id = 48,
              name = "movecursor",
              class = "",
              shape = "rectangle",
              x = 128,
              y = 192,
              width = 8,
              height = 8,
              rotation = 0,
              gid = 9,
              visible = true,
              properties = {}
            },
            {
              id = 59,
              name = "Change",
              class = "",
              shape = "text",
              x = 268,
              y = 184,
              width = 48,
              height = 8,
              rotation = 0,
              visible = true,
              text = "CHANGE",
              fontfamily = "Press Start 2P",
              pixelsize = 8,
              wrap = true,
              color = { 255, 255, 255 },
              halign = "center",
              valign = "center",
              properties = {}
            }
          }
        },
        {
          type = "group",
          id = 17,
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
              id = 16,
              name = "status",
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
                  id = 49,
                  name = "score",
                  class = "",
                  shape = "text",
                  x = -68,
                  y = 24,
                  width = 64,
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
                  id = 50,
                  name = "lives",
                  class = "",
                  shape = "text",
                  x = -16,
                  y = 128,
                  width = 8,
                  height = 88,
                  rotation = 0,
                  visible = true,
                  text = "♥♥♥♥♥♥♥♥♥",
                  fontfamily = "Press Start 2P",
                  pixelsize = 8,
                  wrap = true,
                  color = { 255, 255, 255 },
                  halign = "right",
                  valign = "bottom",
                  properties = {}
                },
                {
                  id = 52,
                  name = "time",
                  class = "",
                  shape = "text",
                  x = -68,
                  y = 96,
                  width = 64,
                  height = 8,
                  rotation = 0,
                  visible = true,
                  text = "00:00:00",
                  fontfamily = "Press Start 2P",
                  pixelsize = 8,
                  wrap = true,
                  color = { 255, 255, 255 },
                  halign = "right",
                  properties = {}
                },
                {
                  id = 56,
                  name = "Time",
                  class = "",
                  shape = "text",
                  x = -68,
                  y = 80,
                  width = 64,
                  height = 8,
                  rotation = 0,
                  visible = true,
                  text = "TIME",
                  fontfamily = "Press Start 2P",
                  pixelsize = 8,
                  wrap = true,
                  color = { 255, 255, 255 },
                  properties = {}
                },
                {
                  id = 57,
                  name = "Score",
                  class = "",
                  shape = "text",
                  x = -68,
                  y = 8,
                  width = 64,
                  height = 8,
                  rotation = 0,
                  visible = true,
                  text = "SCORE",
                  fontfamily = "Press Start 2P",
                  pixelsize = 8,
                  wrap = true,
                  color = { 255, 255, 255 },
                  properties = {}
                },
                {
                  id = 53,
                  name = "bonus",
                  class = "BeeShooter.Gui.BonusText",
                  shape = "text",
                  x = -68,
                  y = 40,
                  width = 64,
                  height = 32,
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
              id = 12,
              name = "weapons",
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
                  id = 28,
                  name = "weaponA",
                  class = "Gui.Button",
                  shape = "rectangle",
                  x = 280,
                  y = 136,
                  width = 16,
                  height = 16,
                  rotation = 0,
                  gid = 5,
                  visible = true,
                  properties = {
                    ["name"] = "3A"
                  }
                },
                {
                  id = 29,
                  name = "weaponB",
                  class = "Gui.Button",
                  shape = "rectangle",
                  x = 304,
                  y = 136,
                  width = 16,
                  height = 16,
                  rotation = 0,
                  gid = 2,
                  visible = true,
                  properties = {
                    ["name"] = "1B"
                  }
                },
                {
                  id = 30,
                  name = "weaponcursor1",
                  class = "Gui.Cursor",
                  shape = "rectangle",
                  x = 288,
                  y = 144,
                  width = 16,
                  height = 16,
                  rotation = 0,
                  gid = 8,
                  visible = true,
                  properties = {
                    ["name"] = "cursorcorner",
                    ["offsetx"] = 8,
                    ["offsety"] = 8,
                    ["roundcorners"] = 0
                  }
                },
                {
                  id = 31,
                  name = "weaponcursor2",
                  class = "Gui.Cursor",
                  shape = "rectangle",
                  x = 272,
                  y = 144,
                  width = 16,
                  height = 16,
                  rotation = 90,
                  gid = 8,
                  visible = true,
                  properties = {
                    ["name"] = "cursorcorner",
                    ["offsetx"] = -8,
                    ["offsety"] = 8,
                    ["roundcorners"] = 0
                  }
                },
                {
                  id = 32,
                  name = "weaponcursor3",
                  class = "Gui.Cursor",
                  shape = "rectangle",
                  x = 272,
                  y = 128,
                  width = 16,
                  height = 16,
                  rotation = 180,
                  gid = 8,
                  visible = true,
                  properties = {
                    ["name"] = "cursorcorner",
                    ["offsetx"] = -8,
                    ["offsety"] = -8,
                    ["roundcorners"] = 0
                  }
                },
                {
                  id = 33,
                  name = "weaponcursor4",
                  class = "Gui.Cursor",
                  shape = "rectangle",
                  x = 288,
                  y = 128,
                  width = 16,
                  height = 16,
                  rotation = 270,
                  gid = 8,
                  visible = true,
                  properties = {
                    ["name"] = "cursorcorner",
                    ["offsetx"] = 8,
                    ["offsety"] = -8,
                    ["roundcorners"] = 0
                  }
                },
                {
                  id = 55,
                  name = "Weapon",
                  class = "",
                  shape = "text",
                  x = 264,
                  y = 112,
                  width = 56,
                  height = 8,
                  rotation = 0,
                  visible = true,
                  text = "WEAPON",
                  fontfamily = "Press Start 2P",
                  pixelsize = 8,
                  wrap = true,
                  color = { 255, 255, 255 },
                  halign = "center",
                  valign = "center",
                  properties = {}
                }
              }
            }
          }
        },
        {
          type = "objectgroup",
          draworder = "topdown",
          id = 13,
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
              id = 46,
              name = "",
              class = "BeeShooter.Gui.Button",
              shape = "polygon",
              x = 292,
              y = 8,
              width = 0,
              height = 0,
              rotation = 0,
              visible = true,
              polygon = {
                { x = 0, y = 0 },
                { x = -24, y = 16 },
                { x = -24, y = 40 },
                { x = 0, y = 56 },
                { x = 24, y = 40 },
                { x = 24, y = 16 }
              },
              properties = {
                ["action"] = "touchResumeGame",
                ["color"] = "#80ffaa00",
                ["linecolor"] = "#ffffedb7",
                ["pressedcolor"] = "#80aa5500",
                ["presssound"] = "",
                ["roundcorners"] = 0,
                ["selectsound"] = ""
              }
            },
            {
              id = 47,
              name = "",
              class = "BeeShooter.Gui.Button",
              shape = "polygon",
              x = 220,
              y = 8,
              width = 0,
              height = 0,
              rotation = 0,
              visible = true,
              polygon = {
                { x = 0, y = 0 },
                { x = -24, y = 16 },
                { x = -24, y = 40 },
                { x = 0, y = 56 },
                { x = 24, y = 40 },
                { x = 24, y = 16 }
              },
              properties = {
                ["action"] = "endGame",
                ["color"] = "#80ffaa00",
                ["linecolor"] = "#ffffedb7",
                ["pressedcolor"] = "#80aa5500",
                ["presssound"] = "",
                ["roundcorners"] = 0,
                ["selectsound"] = ""
              }
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
              visible = true,
              text = "PAUSE!",
              fontfamily = "Press Start 2P",
              pixelsize = 8,
              wrap = true,
              color = { 255, 255, 255 },
              halign = "center",
              valign = "center",
              properties = {}
            },
            {
              id = 43,
              name = "Resume",
              class = "",
              shape = "text",
              x = 264,
              y = 32,
              width = 56,
              height = 8,
              rotation = 0,
              visible = true,
              text = "RESUME",
              fontfamily = "Press Start 2P",
              pixelsize = 8,
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
              class = "",
              shape = "text",
              x = 192,
              y = 32,
              width = 56,
              height = 8,
              rotation = 0,
              visible = true,
              text = "END",
              fontfamily = "Press Start 2P",
              pixelsize = 8,
              wrap = true,
              color = { 255, 255, 255 },
              halign = "center",
              valign = "center",
              properties = {
                ["action"] = "endGame"
              }
            }
          }
        },
        {
          type = "objectgroup",
          draworder = "topdown",
          id = 18,
          name = "mainmenu",
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
              id = 62,
              name = "",
              class = "BeeShooter.Gui.Button",
              shape = "polygon",
              x = 56,
              y = 112,
              width = 0,
              height = 0,
              rotation = 0,
              visible = true,
              polygon = {
                { x = 16, y = 24 },
                { x = -32, y = 40 },
                { x = -32, y = 64 },
                { x = 16, y = 80 },
                { x = 64, y = 64 },
                { x = 64, y = 40 }
              },
              properties = {
                ["action"] = "startGame",
                ["color"] = "#80ffaa00",
                ["linecolor"] = "#ffffedb7",
                ["pressedcolor"] = "#80aa5500",
                ["presssound"] = "",
                ["roundcorners"] = 0,
                ["selectsound"] = ""
              }
            },
            {
              id = 68,
              name = "",
              class = "BeeShooter.Gui.Button",
              shape = "polygon",
              x = 168,
              y = 112,
              width = 0,
              height = 0,
              rotation = 0,
              visible = true,
              polygon = {
                { x = 16, y = 24 },
                { x = -32, y = 40 },
                { x = -32, y = 64 },
                { x = 16, y = 80 },
                { x = 64, y = 64 },
                { x = 64, y = 40 }
              },
              properties = {
                ["action"] = "touchOpenHelp",
                ["color"] = "#80ffaa00",
                ["linecolor"] = "#ffffedb7",
                ["pressedcolor"] = "#80aa5500",
                ["presssound"] = "",
                ["roundcorners"] = 0,
                ["selectsound"] = ""
              }
            },
            {
              id = 65,
              name = "Start",
              class = "",
              shape = "text",
              x = 24,
              y = 152,
              width = 96,
              height = 24,
              rotation = 0,
              visible = true,
              text = "START GAME",
              fontfamily = "Press Start 2P",
              pixelsize = 8,
              wrap = true,
              color = { 255, 255, 255 },
              halign = "center",
              valign = "center",
              properties = {}
            },
            {
              id = 181,
              name = "Title",
              class = "",
              shape = "text",
              x = 64,
              y = 16,
              width = 128,
              height = 16,
              rotation = 0,
              visible = true,
              text = "HONEY SOLDIER",
              fontfamily = "Press Start 2P",
              pixelsize = 8,
              wrap = true,
              color = { 255, 255, 255 },
              halign = "center",
              valign = "center",
              properties = {}
            },
            {
              id = 69,
              name = "Help",
              class = "",
              shape = "text",
              x = 136,
              y = 152,
              width = 96,
              height = 24,
              rotation = 0,
              visible = true,
              text = "HOW TO PLAY",
              fontfamily = "Press Start 2P",
              pixelsize = 8,
              wrap = true,
              color = { 255, 255, 255 },
              halign = "center",
              valign = "center",
              properties = {}
            },
            {
              id = 193,
              name = "Title",
              class = "",
              shape = "text",
              x = 16,
              y = 200,
              width = 224,
              height = 8,
              rotation = 0,
              visible = true,
              text = "© 2022-2023 IoriBranford",
              fontfamily = "Press Start 2P",
              pixelsize = 8,
              wrap = true,
              color = { 255, 255, 255 },
              halign = "center",
              valign = "center",
              properties = {}
            }
          }
        },
        {
          type = "group",
          id = 19,
          name = "help",
          class = "BeeShooter.Gui.HelpScreen",
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
              id = 21,
              name = "controls",
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
                  id = 77,
                  name = "backing",
                  class = "",
                  shape = "rectangle",
                  x = 0,
                  y = 0,
                  width = 256,
                  height = 224,
                  rotation = 0,
                  visible = true,
                  properties = {
                    ["color"] = "#e0000000"
                  }
                },
                {
                  id = 73,
                  name = "",
                  class = "BeeShooter.Gui.Button",
                  shape = "polygon",
                  x = 288,
                  y = 80,
                  width = 0,
                  height = 0,
                  rotation = 0,
                  visible = true,
                  polygon = {
                    { x = 4, y = 0 },
                    { x = -24, y = 16 },
                    { x = -24, y = 48 },
                    { x = 4, y = 64 },
                    { x = 32, y = 48 },
                    { x = 32, y = 16 }
                  },
                  properties = {
                    ["action"] = "nextHelpPage",
                    ["color"] = "#80ffaa00",
                    ["linecolor"] = "#ffffedb7",
                    ["pressedcolor"] = "#80aa5500",
                    ["presssound"] = "",
                    ["roundcorners"] = 0,
                    ["selectsound"] = ""
                  }
                },
                {
                  id = 74,
                  name = "",
                  class = "BeeShooter.Gui.Button",
                  shape = "polygon",
                  x = -40,
                  y = 80,
                  width = 0,
                  height = 0,
                  rotation = 0,
                  visible = true,
                  polygon = {
                    { x = 4, y = 0 },
                    { x = -24, y = 16 },
                    { x = -24, y = 48 },
                    { x = 4, y = 64 },
                    { x = 32, y = 48 },
                    { x = 32, y = 16 }
                  },
                  properties = {
                    ["action"] = "previousHelpPage",
                    ["color"] = "#80ffaa00",
                    ["linecolor"] = "#ffffedb7",
                    ["pressedcolor"] = "#80aa5500",
                    ["presssound"] = "",
                    ["roundcorners"] = 0,
                    ["selectsound"] = ""
                  }
                },
                {
                  id = 78,
                  name = "nextarrow",
                  class = "",
                  shape = "polygon",
                  x = 276,
                  y = 96,
                  width = 0,
                  height = 0,
                  rotation = 0,
                  visible = true,
                  polygon = {
                    { x = 0, y = 0 },
                    { x = 0, y = 32 },
                    { x = 32, y = 16 }
                  },
                  properties = {
                    ["color"] = "#ffffff7f"
                  }
                },
                {
                  id = 79,
                  name = "prevarrow",
                  class = "",
                  shape = "polygon",
                  x = -20,
                  y = 96,
                  width = 0,
                  height = 0,
                  rotation = 0,
                  visible = true,
                  polygon = {
                    { x = 0, y = 0 },
                    { x = 0, y = 32 },
                    { x = -32, y = 16 }
                  },
                  properties = {
                    ["color"] = "#ffffff7f"
                  }
                },
                {
                  id = 81,
                  name = "page",
                  class = "BeeShooter.Gui.Button",
                  shape = "text",
                  x = 80,
                  y = 208,
                  width = 96,
                  height = 16,
                  rotation = 0,
                  visible = true,
                  text = " 1 / 10",
                  fontfamily = "Press Start 2P",
                  pixelsize = 8,
                  wrap = true,
                  color = { 255, 255, 255 },
                  halign = "center",
                  valign = "center",
                  properties = {
                    ["action"] = "endGame",
                    ["color"] = "",
                    ["linecolor"] = "",
                    ["presssound"] = "",
                    ["roundcorners"] = 0,
                    ["selectsound"] = ""
                  }
                },
                {
                  id = 179,
                  name = "",
                  class = "BeeShooter.Gui.Button",
                  shape = "polygon",
                  x = 292,
                  y = 8,
                  width = 0,
                  height = 0,
                  rotation = 0,
                  visible = true,
                  polygon = {
                    { x = 0, y = 0 },
                    { x = -24, y = 16 },
                    { x = -24, y = 40 },
                    { x = 0, y = 56 },
                    { x = 24, y = 40 },
                    { x = 24, y = 16 }
                  },
                  properties = {
                    ["action"] = "touchCloseHelp",
                    ["color"] = "#80ffaa00",
                    ["linecolor"] = "#ffffedb7",
                    ["pressedcolor"] = "#80aa5500",
                    ["presssound"] = "",
                    ["roundcorners"] = 0,
                    ["selectsound"] = ""
                  }
                },
                {
                  id = 180,
                  name = "Close",
                  class = "",
                  shape = "text",
                  x = 264,
                  y = 32,
                  width = 56,
                  height = 8,
                  rotation = 0,
                  visible = true,
                  text = "CLOSE",
                  fontfamily = "Press Start 2P",
                  pixelsize = 8,
                  wrap = true,
                  color = { 255, 255, 255 },
                  halign = "center",
                  valign = "center",
                  properties = {
                    ["action"] = "resumeGame"
                  }
                }
              }
            },
            {
              type = "group",
              id = 22,
              name = "pages",
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
                  id = 20,
                  name = "move",
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
                      id = 67,
                      name = "instruction",
                      class = "BeeShooter.Gui.Button",
                      shape = "text",
                      x = 8,
                      y = 152,
                      width = 240,
                      height = 48,
                      rotation = 0,
                      visible = true,
                      text = "Drag anywhere on the screen to move Jenny's target position.",
                      fontfamily = "Press Start 2P",
                      pixelsize = 8,
                      wrap = true,
                      color = { 255, 255, 255 },
                      properties = {
                        ["action"] = "endGame",
                        ["color"] = "",
                        ["linecolor"] = "",
                        ["presssound"] = "",
                        ["roundcorners"] = 0,
                        ["selectsound"] = ""
                      }
                    },
                    {
                      id = 99,
                      name = "Move",
                      class = "BeeShooter.Gui.Button",
                      shape = "text",
                      x = 8,
                      y = 16,
                      width = 240,
                      height = 8,
                      rotation = 0,
                      visible = true,
                      text = "MOVEMENT",
                      fontfamily = "Press Start 2P",
                      pixelsize = 8,
                      wrap = true,
                      color = { 255, 255, 255 },
                      halign = "center",
                      properties = {
                        ["action"] = "endGame",
                        ["color"] = "",
                        ["linecolor"] = "",
                        ["presssound"] = "",
                        ["roundcorners"] = 0,
                        ["selectsound"] = ""
                      }
                    },
                    {
                      id = 72,
                      name = "↑",
                      class = "BeeShooter.Gui.Button",
                      shape = "text",
                      x = 176,
                      y = 96,
                      width = 48,
                      height = 16,
                      rotation = 0,
                      visible = true,
                      text = "→ → →",
                      fontfamily = "Press Start 2P",
                      pixelsize = 8,
                      wrap = true,
                      color = { 255, 255, 255 },
                      halign = "center",
                      valign = "center",
                      properties = {
                        ["action"] = "endGame",
                        ["color"] = "",
                        ["linecolor"] = "",
                        ["presssound"] = "",
                        ["roundcorners"] = 0,
                        ["selectsound"] = ""
                      }
                    },
                    {
                      id = 90,
                      name = "↑",
                      class = "BeeShooter.Gui.Button",
                      shape = "text",
                      x = 32,
                      y = 96,
                      width = 48,
                      height = 16,
                      rotation = 0,
                      visible = true,
                      text = "→ → →",
                      fontfamily = "Press Start 2P",
                      pixelsize = 8,
                      wrap = true,
                      color = { 255, 255, 255 },
                      halign = "center",
                      valign = "center",
                      properties = {
                        ["action"] = "endGame",
                        ["color"] = "",
                        ["linecolor"] = "",
                        ["presssound"] = "",
                        ["roundcorners"] = 0,
                        ["selectsound"] = ""
                      }
                    },
                    {
                      id = 70,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 160,
                      y = 104,
                      width = 32,
                      height = 32,
                      rotation = 0,
                      gid = 10,
                      visible = true,
                      properties = {
                        ["name"] = "flyfastA"
                      }
                    },
                    {
                      id = 71,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 224,
                      y = 104,
                      width = 8,
                      height = 8,
                      rotation = 0,
                      gid = 9,
                      visible = true,
                      properties = {}
                    },
                    {
                      id = 184,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 72,
                      y = 120,
                      width = 16,
                      height = 16,
                      rotation = 0,
                      gid = 85,
                      visible = true,
                      properties = {}
                    }
                  }
                },
                {
                  type = "objectgroup",
                  draworder = "topdown",
                  id = 24,
                  name = "shoot",
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
                      id = 83,
                      name = "instruction",
                      class = "BeeShooter.Gui.Button",
                      shape = "text",
                      x = 8,
                      y = 152,
                      width = 240,
                      height = 48,
                      rotation = 0,
                      visible = true,
                      text = "Keep your finger on the screen to fire Jenny's sting weapon at the invading insects.",
                      fontfamily = "Press Start 2P",
                      pixelsize = 8,
                      wrap = true,
                      color = { 255, 255, 255 },
                      properties = {
                        ["action"] = "endGame",
                        ["color"] = "",
                        ["linecolor"] = "",
                        ["presssound"] = "",
                        ["roundcorners"] = 0,
                        ["selectsound"] = ""
                      }
                    },
                    {
                      id = 126,
                      name = "",
                      class = "",
                      shape = "ellipse",
                      x = 72,
                      y = 96,
                      width = 16,
                      height = 16,
                      rotation = 0,
                      visible = true,
                      properties = {
                        ["color"] = "#00000000",
                        ["linecolor"] = "#ffffffff"
                      }
                    },
                    {
                      id = 127,
                      name = "",
                      class = "",
                      shape = "ellipse",
                      x = 76,
                      y = 100,
                      width = 8,
                      height = 8,
                      rotation = 0,
                      visible = true,
                      properties = {
                        ["color"] = "#00000000",
                        ["linecolor"] = "#ffffffff"
                      }
                    },
                    {
                      id = 85,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 160,
                      y = 120,
                      width = 32,
                      height = 32,
                      rotation = 0,
                      gid = 10,
                      visible = true,
                      properties = {
                        ["name"] = "flyfastA"
                      }
                    },
                    {
                      id = 91,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 152,
                      y = 96,
                      width = 32,
                      height = 32,
                      rotation = 270,
                      gid = 12,
                      visible = true,
                      properties = {}
                    },
                    {
                      id = 94,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 152,
                      y = 72,
                      width = 32,
                      height = 32,
                      rotation = 270,
                      gid = 12,
                      visible = true,
                      properties = {}
                    },
                    {
                      id = 92,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 168,
                      y = 96,
                      width = 32,
                      height = 32,
                      rotation = 270,
                      gid = 12,
                      visible = true,
                      properties = {}
                    },
                    {
                      id = 93,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 168,
                      y = 72,
                      width = 32,
                      height = 32,
                      rotation = 270,
                      gid = 12,
                      visible = true,
                      properties = {}
                    },
                    {
                      id = 100,
                      name = "Shoot",
                      class = "BeeShooter.Gui.Button",
                      shape = "text",
                      x = 8,
                      y = 16,
                      width = 240,
                      height = 8,
                      rotation = 0,
                      visible = true,
                      text = "SHOOTING",
                      fontfamily = "Press Start 2P",
                      pixelsize = 8,
                      wrap = true,
                      color = { 255, 255, 255 },
                      halign = "center",
                      properties = {
                        ["action"] = "endGame",
                        ["color"] = "",
                        ["linecolor"] = "",
                        ["presssound"] = "",
                        ["roundcorners"] = 0,
                        ["selectsound"] = ""
                      }
                    },
                    {
                      id = 149,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 152,
                      y = 56,
                      width = 16,
                      height = 16,
                      rotation = 0,
                      gid = 35,
                      visible = true,
                      properties = {}
                    },
                    {
                      id = 150,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 168,
                      y = 56,
                      width = 16,
                      height = 16,
                      rotation = 0,
                      gid = 35,
                      visible = true,
                      properties = {}
                    },
                    {
                      id = 151,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 152,
                      y = 56,
                      width = 32,
                      height = 32,
                      rotation = 0,
                      gid = 39,
                      visible = true,
                      properties = {}
                    },
                    {
                      id = 152,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 168,
                      y = 56,
                      width = 32,
                      height = 32,
                      rotation = 0,
                      gid = 39,
                      visible = true,
                      properties = {}
                    },
                    {
                      id = 183,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 72,
                      y = 120,
                      width = 16,
                      height = 16,
                      rotation = 0,
                      gid = 85,
                      visible = true,
                      properties = {}
                    }
                  }
                },
                {
                  type = "objectgroup",
                  draworder = "topdown",
                  id = 25,
                  name = "change",
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
                      id = 87,
                      name = "",
                      class = "BeeShooter.Gui.Button",
                      shape = "polygon",
                      x = 288,
                      y = 156,
                      width = 0,
                      height = 0,
                      rotation = 0,
                      visible = true,
                      polygon = {
                        { x = 4, y = 0 },
                        { x = -24, y = 16 },
                        { x = -24, y = 48 },
                        { x = 4, y = 64 },
                        { x = 32, y = 48 },
                        { x = 32, y = 16 }
                      },
                      properties = {
                        ["action"] = "",
                        ["color"] = "#80ffaa00",
                        ["linecolor"] = "#ffffedb7",
                        ["pressedcolor"] = "#80aa5500",
                        ["presssound"] = "",
                        ["roundcorners"] = 0,
                        ["selectsound"] = ""
                      }
                    },
                    {
                      id = 88,
                      name = "Change",
                      class = "",
                      shape = "text",
                      x = 268,
                      y = 184,
                      width = 48,
                      height = 8,
                      rotation = 0,
                      visible = true,
                      text = "CHANGE",
                      fontfamily = "Press Start 2P",
                      pixelsize = 8,
                      wrap = true,
                      color = { 255, 255, 255 },
                      halign = "center",
                      valign = "center",
                      properties = {}
                    },
                    {
                      id = 98,
                      name = "instruction",
                      class = "BeeShooter.Gui.Button",
                      shape = "text",
                      x = 8,
                      y = 152,
                      width = 240,
                      height = 48,
                      rotation = 0,
                      visible = true,
                      text = "Tap the CHANGE button to change the weapon type.",
                      fontfamily = "Press Start 2P",
                      pixelsize = 8,
                      wrap = true,
                      color = { 255, 255, 255 },
                      properties = {
                        ["action"] = "endGame",
                        ["color"] = "",
                        ["linecolor"] = "",
                        ["presssound"] = "",
                        ["roundcorners"] = 0,
                        ["selectsound"] = ""
                      }
                    },
                    {
                      id = 101,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 160,
                      y = 104,
                      width = 32,
                      height = 32,
                      rotation = 0,
                      gid = 10,
                      visible = true,
                      properties = {
                        ["name"] = "flyfastA"
                      }
                    },
                    {
                      id = 106,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 208,
                      y = 104,
                      width = 32,
                      height = 32,
                      rotation = 0,
                      gid = 10,
                      visible = true,
                      properties = {
                        ["name"] = "flyfastA"
                      }
                    },
                    {
                      id = 102,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 152,
                      y = 80,
                      width = 32,
                      height = 32,
                      rotation = 270,
                      gid = 12,
                      visible = true,
                      properties = {}
                    },
                    {
                      id = 103,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 208,
                      y = 80,
                      width = 32,
                      height = 32,
                      rotation = 270,
                      gid = 12,
                      visible = true,
                      properties = {}
                    },
                    {
                      id = 104,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 168,
                      y = 80,
                      width = 32,
                      height = 32,
                      rotation = 270,
                      gid = 12,
                      visible = true,
                      properties = {}
                    },
                    {
                      id = 105,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 208,
                      y = 128,
                      width = 32,
                      height = 32,
                      rotation = 90,
                      gid = 12,
                      visible = true,
                      properties = {}
                    },
                    {
                      id = 107,
                      name = "↑",
                      class = "BeeShooter.Gui.Button",
                      shape = "text",
                      x = 176,
                      y = 96,
                      width = 16,
                      height = 16,
                      rotation = 0,
                      visible = true,
                      text = "→",
                      fontfamily = "Press Start 2P",
                      pixelsize = 8,
                      wrap = true,
                      color = { 255, 255, 255 },
                      halign = "center",
                      valign = "center",
                      properties = {
                        ["action"] = "endGame",
                        ["color"] = "",
                        ["linecolor"] = "",
                        ["presssound"] = "",
                        ["roundcorners"] = 0,
                        ["selectsound"] = ""
                      }
                    },
                    {
                      id = 124,
                      name = "↑",
                      class = "BeeShooter.Gui.Button",
                      shape = "text",
                      x = 64,
                      y = 96,
                      width = 16,
                      height = 16,
                      rotation = 0,
                      visible = true,
                      text = "→",
                      fontfamily = "Press Start 2P",
                      pixelsize = 8,
                      wrap = true,
                      color = { 255, 255, 255 },
                      halign = "center",
                      valign = "center",
                      properties = {
                        ["action"] = "endGame",
                        ["color"] = "",
                        ["linecolor"] = "",
                        ["presssound"] = "",
                        ["roundcorners"] = 0,
                        ["selectsound"] = ""
                      }
                    },
                    {
                      id = 114,
                      name = "weaponA",
                      class = "Gui.Button",
                      shape = "rectangle",
                      x = 48,
                      y = 104,
                      width = 16,
                      height = 16,
                      rotation = 0,
                      gid = 1,
                      visible = true,
                      properties = {
                        ["name"] = "1A"
                      }
                    },
                    {
                      id = 115,
                      name = "weaponB",
                      class = "Gui.Button",
                      shape = "rectangle",
                      x = 96,
                      y = 104,
                      width = 16,
                      height = 16,
                      rotation = 0,
                      gid = 2,
                      visible = true,
                      properties = {
                        ["name"] = "1B"
                      }
                    },
                    {
                      id = 116,
                      name = "weaponcursor1",
                      class = "Gui.Cursor",
                      shape = "rectangle",
                      x = 104,
                      y = 112,
                      width = 16,
                      height = 16,
                      rotation = 0,
                      gid = 8,
                      visible = true,
                      properties = {
                        ["name"] = "cursorcorner",
                        ["offsetx"] = 8,
                        ["offsety"] = 8,
                        ["roundcorners"] = 0
                      }
                    },
                    {
                      id = 117,
                      name = "weaponcursor2",
                      class = "Gui.Cursor",
                      shape = "rectangle",
                      x = 88,
                      y = 112,
                      width = 16,
                      height = 16,
                      rotation = 90,
                      gid = 8,
                      visible = true,
                      properties = {
                        ["name"] = "cursorcorner",
                        ["offsetx"] = -8,
                        ["offsety"] = 8,
                        ["roundcorners"] = 0
                      }
                    },
                    {
                      id = 118,
                      name = "weaponcursor3",
                      class = "Gui.Cursor",
                      shape = "rectangle",
                      x = 88,
                      y = 96,
                      width = 16,
                      height = 16,
                      rotation = 180,
                      gid = 8,
                      visible = true,
                      properties = {
                        ["name"] = "cursorcorner",
                        ["offsetx"] = -8,
                        ["offsety"] = -8,
                        ["roundcorners"] = 0
                      }
                    },
                    {
                      id = 119,
                      name = "weaponcursor4",
                      class = "Gui.Cursor",
                      shape = "rectangle",
                      x = 104,
                      y = 96,
                      width = 16,
                      height = 16,
                      rotation = 270,
                      gid = 8,
                      visible = true,
                      properties = {
                        ["name"] = "cursorcorner",
                        ["offsetx"] = 8,
                        ["offsety"] = -8,
                        ["roundcorners"] = 0
                      }
                    },
                    {
                      id = 125,
                      name = "title",
                      class = "BeeShooter.Gui.Button",
                      shape = "text",
                      x = 8,
                      y = 16,
                      width = 240,
                      height = 8,
                      rotation = 0,
                      visible = true,
                      text = "CHANGING WEAPON",
                      fontfamily = "Press Start 2P",
                      pixelsize = 8,
                      wrap = true,
                      color = { 255, 255, 255 },
                      halign = "center",
                      properties = {
                        ["action"] = "endGame",
                        ["color"] = "",
                        ["linecolor"] = "",
                        ["presssound"] = "",
                        ["roundcorners"] = 0,
                        ["selectsound"] = ""
                      }
                    },
                    {
                      id = 182,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 284,
                      y = 208,
                      width = 16,
                      height = 16,
                      rotation = 0,
                      gid = 85,
                      visible = true,
                      properties = {}
                    }
                  }
                },
                {
                  type = "objectgroup",
                  draworder = "topdown",
                  id = 26,
                  name = "powerup",
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
                      id = 129,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 104,
                      y = 56,
                      width = 16,
                      height = 32,
                      rotation = 0,
                      gid = 23,
                      visible = true,
                      properties = {}
                    },
                    {
                      id = 130,
                      name = "title",
                      class = "BeeShooter.Gui.Button",
                      shape = "text",
                      x = 8,
                      y = 16,
                      width = 240,
                      height = 8,
                      rotation = 0,
                      visible = true,
                      text = "HONEY CRYSTAL",
                      fontfamily = "Press Start 2P",
                      pixelsize = 8,
                      wrap = true,
                      color = { 255, 255, 255 },
                      halign = "center",
                      properties = {
                        ["action"] = "endGame",
                        ["color"] = "",
                        ["linecolor"] = "",
                        ["presssound"] = "",
                        ["roundcorners"] = 0,
                        ["selectsound"] = ""
                      }
                    },
                    {
                      id = 131,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 56,
                      y = 120,
                      width = 32,
                      height = 32,
                      rotation = 0,
                      gid = 10,
                      visible = true,
                      properties = {
                        ["name"] = "flyfastA"
                      }
                    },
                    {
                      id = 139,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 184,
                      y = 120,
                      width = 32,
                      height = 32,
                      rotation = 0,
                      gid = 10,
                      visible = true,
                      properties = {
                        ["name"] = "flyfastA"
                      }
                    },
                    {
                      id = 132,
                      name = "",
                      class = "BeeShooter.Gui.Button",
                      shape = "text",
                      x = 72,
                      y = 48,
                      width = 16,
                      height = 16,
                      rotation = 0,
                      visible = true,
                      text = "→",
                      fontfamily = "Press Start 2P",
                      pixelsize = 8,
                      wrap = true,
                      color = { 255, 255, 255 },
                      halign = "center",
                      valign = "center",
                      properties = {
                        ["action"] = "endGame",
                        ["color"] = "",
                        ["linecolor"] = "",
                        ["presssound"] = "",
                        ["roundcorners"] = 0,
                        ["selectsound"] = ""
                      }
                    },
                    {
                      id = 133,
                      name = "instruction",
                      class = "BeeShooter.Gui.Button",
                      shape = "text",
                      x = 8,
                      y = 152,
                      width = 240,
                      height = 48,
                      rotation = 0,
                      visible = true,
                      text = "Shoot Honey Pots to release precious Honey Crystals.\n\nWhen Jenny touches a Crystal, she gains a weapon level and a moment of invincibility.",
                      fontfamily = "Press Start 2P",
                      pixelsize = 8,
                      wrap = true,
                      color = { 255, 255, 255 },
                      properties = {
                        ["action"] = "endGame",
                        ["color"] = "",
                        ["linecolor"] = "",
                        ["presssound"] = "",
                        ["roundcorners"] = 0,
                        ["selectsound"] = ""
                      }
                    },
                    {
                      id = 134,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 56,
                      y = 56,
                      width = 16,
                      height = 32,
                      rotation = 0,
                      gid = 20,
                      visible = true,
                      properties = {}
                    },
                    {
                      id = 135,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 48,
                      y = 96,
                      width = 32,
                      height = 32,
                      rotation = 270,
                      gid = 12,
                      visible = true,
                      properties = {}
                    },
                    {
                      id = 141,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 176,
                      y = 96,
                      width = 32,
                      height = 32,
                      rotation = 270,
                      gid = 12,
                      visible = true,
                      properties = {}
                    },
                    {
                      id = 146,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 176,
                      y = 72,
                      width = 32,
                      height = 32,
                      rotation = 270,
                      gid = 12,
                      visible = true,
                      properties = {}
                    },
                    {
                      id = 143,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 168,
                      y = 104,
                      width = 32,
                      height = 32,
                      rotation = 225,
                      gid = 12,
                      visible = true,
                      properties = {}
                    },
                    {
                      id = 144,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 152,
                      y = 88,
                      width = 32,
                      height = 32,
                      rotation = 225,
                      gid = 12,
                      visible = true,
                      properties = {}
                    },
                    {
                      id = 138,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 48,
                      y = 72,
                      width = 32,
                      height = 32,
                      rotation = 270,
                      gid = 12,
                      visible = true,
                      properties = {}
                    },
                    {
                      id = 136,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 64,
                      y = 96,
                      width = 32,
                      height = 32,
                      rotation = 270,
                      gid = 12,
                      visible = true,
                      properties = {}
                    },
                    {
                      id = 140,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 192,
                      y = 96,
                      width = 32,
                      height = 32,
                      rotation = 270,
                      gid = 12,
                      visible = true,
                      properties = {}
                    },
                    {
                      id = 145,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 192,
                      y = 72,
                      width = 32,
                      height = 32,
                      rotation = 270,
                      gid = 12,
                      visible = true,
                      properties = {}
                    },
                    {
                      id = 142,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 200,
                      y = 104,
                      width = 32,
                      height = 32,
                      rotation = 315,
                      gid = 12,
                      visible = true,
                      properties = {}
                    },
                    {
                      id = 147,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 216,
                      y = 88,
                      width = 32,
                      height = 32,
                      rotation = 315,
                      gid = 12,
                      visible = true,
                      properties = {}
                    },
                    {
                      id = 137,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 64,
                      y = 72,
                      width = 32,
                      height = 32,
                      rotation = 270,
                      gid = 12,
                      visible = true,
                      properties = {}
                    }
                  }
                },
                {
                  type = "objectgroup",
                  draworder = "index",
                  id = 28,
                  name = "damage",
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
                      id = 153,
                      name = "title",
                      class = "BeeShooter.Gui.Button",
                      shape = "text",
                      x = 8,
                      y = 16,
                      width = 240,
                      height = 8,
                      rotation = 0,
                      visible = true,
                      text = "DAMAGE & DEATH",
                      fontfamily = "Press Start 2P",
                      pixelsize = 8,
                      wrap = true,
                      color = { 255, 255, 255 },
                      halign = "center",
                      properties = {
                        ["action"] = "endGame",
                        ["color"] = "",
                        ["linecolor"] = "",
                        ["presssound"] = "",
                        ["roundcorners"] = 0,
                        ["selectsound"] = ""
                      }
                    },
                    {
                      id = 154,
                      name = "lives",
                      class = "",
                      shape = "text",
                      x = -16,
                      y = 128,
                      width = 8,
                      height = 88,
                      rotation = 0,
                      visible = true,
                      text = "♥♥♥",
                      fontfamily = "Press Start 2P",
                      pixelsize = 8,
                      wrap = true,
                      color = { 255, 255, 255 },
                      halign = "right",
                      valign = "bottom",
                      properties = {}
                    },
                    {
                      id = 155,
                      name = "instruction",
                      class = "BeeShooter.Gui.Button",
                      shape = "text",
                      x = 8,
                      y = 152,
                      width = 240,
                      height = 48,
                      rotation = 0,
                      visible = true,
                      text = "If Jenny is hit by a bullet or enemy flying at her height, she loses a weapon level.\n\nIf Jenny has no more weapon levels, she loses a life.",
                      fontfamily = "Press Start 2P",
                      pixelsize = 8,
                      wrap = true,
                      color = { 255, 255, 255 },
                      properties = {
                        ["action"] = "endGame",
                        ["color"] = "",
                        ["linecolor"] = "",
                        ["presssound"] = "",
                        ["roundcorners"] = 0,
                        ["selectsound"] = ""
                      }
                    },
                    {
                      id = 156,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 96,
                      y = 112,
                      width = 32,
                      height = 32,
                      rotation = 0,
                      gid = 10,
                      visible = true,
                      properties = {
                        ["name"] = "flyfastA"
                      }
                    },
                    {
                      id = 157,
                      name = "↑",
                      class = "BeeShooter.Gui.Button",
                      shape = "text",
                      x = 168,
                      y = 56,
                      width = 16,
                      height = 16,
                      rotation = 0,
                      visible = true,
                      text = "→",
                      fontfamily = "Press Start 2P",
                      pixelsize = 8,
                      wrap = true,
                      color = { 255, 255, 255 },
                      halign = "center",
                      valign = "center",
                      properties = {
                        ["action"] = "endGame",
                        ["color"] = "",
                        ["linecolor"] = "",
                        ["presssound"] = "",
                        ["roundcorners"] = 0,
                        ["selectsound"] = ""
                      }
                    },
                    {
                      id = 171,
                      name = "↑",
                      class = "BeeShooter.Gui.Button",
                      shape = "text",
                      x = 168,
                      y = 104,
                      width = 16,
                      height = 16,
                      rotation = 0,
                      visible = true,
                      text = "→",
                      fontfamily = "Press Start 2P",
                      pixelsize = 8,
                      wrap = true,
                      color = { 255, 255, 255 },
                      halign = "center",
                      valign = "center",
                      properties = {
                        ["action"] = "endGame",
                        ["color"] = "",
                        ["linecolor"] = "",
                        ["presssound"] = "",
                        ["roundcorners"] = 0,
                        ["selectsound"] = ""
                      }
                    },
                    {
                      id = 158,
                      name = "weaponA",
                      class = "Gui.Button",
                      shape = "rectangle",
                      x = 152,
                      y = 64,
                      width = 16,
                      height = 16,
                      rotation = 0,
                      gid = 3,
                      visible = true,
                      properties = {
                        ["name"] = "2A"
                      }
                    },
                    {
                      id = 159,
                      name = "weaponB",
                      class = "Gui.Button",
                      shape = "rectangle",
                      x = 200,
                      y = 64,
                      width = 16,
                      height = 16,
                      rotation = 0,
                      gid = 1,
                      visible = true,
                      properties = {
                        ["name"] = "1A"
                      }
                    },
                    {
                      id = 168,
                      name = "weaponB",
                      class = "Gui.Button",
                      shape = "rectangle",
                      x = 152,
                      y = 112,
                      width = 16,
                      height = 16,
                      rotation = 0,
                      gid = 1,
                      visible = true,
                      properties = {
                        ["name"] = "1A"
                      }
                    },
                    {
                      id = 170,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 200,
                      y = 112,
                      width = 32,
                      height = 32,
                      rotation = 0,
                      gid = 13,
                      visible = true,
                      properties = {
                        ["name"] = "die"
                      }
                    },
                    {
                      id = 172,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 200,
                      y = 128,
                      width = 64,
                      height = 64,
                      rotation = 0,
                      gid = 54,
                      visible = true,
                      properties = {}
                    },
                    {
                      id = 173,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 56,
                      y = 72,
                      width = 32,
                      height = 32,
                      rotation = 0,
                      gid = 67,
                      visible = true,
                      properties = {}
                    },
                    {
                      id = 174,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 88,
                      y = 104,
                      width = 16,
                      height = 8,
                      rotation = 45,
                      gid = 83,
                      visible = true,
                      properties = {}
                    },
                    {
                      id = 175,
                      name = "",
                      class = "",
                      shape = "rectangle",
                      x = 72,
                      y = 88,
                      width = 16,
                      height = 8,
                      rotation = 45,
                      gid = 83,
                      visible = true,
                      properties = {}
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
