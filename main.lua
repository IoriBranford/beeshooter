love.filesystem.setRequirePath("code/?.lua;code/?/init.lua;libraries/?.lua;libraries/?/init.lua;"..love.filesystem.getRequirePath())
require("System.Main")("BeeShooter")