require "Math"
require "Coroutine"
local Audio = require "System.Audio"
local Config = require "System.Config"
local Time   = require "System.Time"
local Controls= require "System.Controls"
local cute = require "cute"
local haslldebugger, lldebugger = pcall(require, "lldebugger")
if not haslldebugger then
    lldebugger = nil
end

local profile
local game
local dsecs = 0
local dfixed = 0
local numfixed = 0
local fixedfrac = 0
local fixedrate = Time.FixedUpdateRate
local fixedlimit = 1
local variableupdate = true

local blankphase = {}
function blankphase.loadphase() end
function blankphase.fixedupdate() end
function blankphase.update(dsecs, fixedfrac) end
function blankphase.draw(fixedfrac) end
function blankphase.quitphase() end

function blankphase.displayrotated(index, orientation) end
function blankphase.directorydropped(path) end
function blankphase.filedropped(file) end
function blankphase.focus(focus) end
function blankphase.mousefocus(focus) end
function blankphase.resize(w, h) end
function blankphase.visible(visible) end

function blankphase.keypressed(key, scancode, isrepeat) end
function blankphase.keyreleased(key, scancode) end
function blankphase.textedited(text, start, length) end
function blankphase.textinput(text) end

function blankphase.mousemoved(x, y, dx, dy, istouch) end
function blankphase.mousepressed(x, y, button, istouch, presses) end
function blankphase.mousereleased(x, y, button, istouch, presses) end
function blankphase.wheelmoved(x, y) end

function blankphase.joystickadded(joystick) end
function blankphase.joystickremoved(joystick) end
function blankphase.gamepadaxis(joystick, axis, value) end
function blankphase.gamepadpressed(joystick, button) end
function blankphase.gamepadreleased(joystick, button) end

function blankphase.touchmoved(id, x, y, dx, dy, pressure) end
function blankphase.touchpressed(id, x, y, dx, dy, pressure) end
function blankphase.touchreleased(id, x, y, dx, dy, pressure) end

function love.event.loadphase(name, ...)
    love.event.push("loadphase", name, ...)
end

function love.handlers.loadphase(name, ...)
    local nextphase = require(name)
    if love.quitphase then
        love.quitphase()
    end
    for k, v in pairs(blankphase) do
        love[k] = nextphase[k] or v
    end
    if love.loadphase then
        love.loadphase(...)
    end
    collectgarbage()
    if love.timer then
        love.timer.step()
        fixedfrac = 0
    end
end

local keypressedhandler = love.handlers.keypressed
function love.handlers.keypressed(...)
    keypressedhandler(...)
    Controls.keypressed(...)
    cute.keypressed(...)
end

local gamepadpressedhandler = love.handlers.gamepadpressed
function love.handlers.gamepadpressed(...)
    gamepadpressedhandler(...)
    Controls.gamepadpressed(...)
end

function love.quit()
    if love.quitphase then
        love.quitphase()
    end
    Audio.stop()
    Config.save()
	if profile then
		local filename = os.date("profile_%Y-%m-%d_%H-%M-%S")..".txt"
		love.filesystem.write(filename, profile.report())
	end
end

function love.run()
    require("pl.strict").module("_G", _G)
    cute.go(love.arg.parseGameArguments(arg))

    Config.load(game.defaultconfig)
    Controls.init()

    local cli = love.filesystem.getIdentity()..[[

        --console               Output to a console window
        --version               Print LOVE version
        --fused                 Force running in fused mode
        --debug                 Debug in Zerobrane Studio
        --cute                  Run Cute unit tests
        --fullscreen            Start in fullscreen mode
        --windowed              Start in windowed mode
        --drawstats             Draw performance stats
        --profile               Profile code performance
        --exclusive             Exclusive fullscreen
    ]]
    if not love.filesystem.isFused() then
        cli = cli ..
    [[
        <game> (string)         Game assets location
    ]]
    end
    if game.cli then
        cli = cli..game.cli
    end

	local lapp = require "pl.lapp"
	lapp.slack = true
	local args = lapp (cli)

	if args.profile then
        profile = require "profile"
		profile.start()
	end

    Config.debug = args.debug
	if args.debug and lldebugger then
		lldebugger.start()
		-- lldebugger.off()
	end

    if love.load then
        love.load(args)--love.arg.parseGameArguments(arg), arg)
    end
    collectgarbage()

    -- We don't want the first frame's dsecs to include time taken by love.load.
    if love.timer then
        love.timer.step()
    end

    local mainloop = function()
        -- Process events.
        if love.event then
            love.event.pump()
            for name, a, b, c, d, e, f in love.event.poll() do
                if name == "quit" then
                    if not love.quit or not love.quit() then
                        return a or 0
                    end
                else
                    love.handlers[name](a, b, c, d, e, f)
                end
            end
        end

        -- Update dsecs, as we'll be passing it to update
        if love.timer then
            dsecs = love.timer.step()
        end

        variableupdate = Config.variableupdate

        -- Call update and draw
        if love.fixedupdate then
            dfixed = dsecs * fixedrate
            fixedfrac = fixedfrac + dfixed
            numfixed, fixedfrac = math.modf(fixedfrac)
            numfixed = math.min(numfixed, fixedlimit)
            for i = 1, numfixed do
                love.fixedupdate()
                Controls.clearButtonsPressed()
            end
        end

        if love.update then
            if variableupdate then
                love.update(dsecs, fixedfrac)
            elseif numfixed > 0 then
                love.update(numfixed / fixedrate, 0)
            end
        end -- will pass 0 if love.timer is disabled

        if love.graphics and love.graphics.isActive() then
            love.graphics.origin()
            love.graphics.clear(love.graphics.getBackgroundColor())

            if love.draw then
                love.draw(variableupdate and fixedfrac or 0)
                love.graphics.setColor(1,1,1)
                cute.draw()
            end

            if Config.drawstats then
                love.graphics.printf(tostring(love.timer.getFPS()).." fps", 0, 0, love.graphics.getWidth(), "right")
                love.graphics.printf(tostring(math.floor(collectgarbage("count"))).." kb", 0, 16, love.graphics.getWidth(), "right")
            end

            love.graphics.present()
        end

        collectgarbage("step", 1)
        if love.timer then
            love.timer.sleep(0.001)
        end
    end

    return mainloop
end

return function(gamename)
    game = require(gamename)
end