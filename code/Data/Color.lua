local Color = {
    Red     = "ffff0000",
    Green   = "ff00ff00",
    Blue    = "ff0000ff",
    Cyan    = "ff00ffff",
    Magenta = "ffff00ff",
    Yellow  = "ffffff00",
    White   = "ffffffff",
    Black   = "ff000000",
}

function Color.normalize(r, g, b, a)
    if type(r) == "table" then
        g = r[2]
        b = r[3]
        a = r[4] or 255
        r = r[1]
    end
    r = r and (r / 256) or 1
    g = g and (g / 256) or 1
    b = b and (b / 256) or 1
    a = a and (a / 256) or 1
    return r, g, b, a
end

function Color.parseARGBString(color)
    local a, r, g, b = string.match(color, "(%x%x)(%x%x)(%x%x)(%x%x)")
    if not a then
        return 1, 1, 1, 1
    end
    r = tonumber(r, 16)
    g = tonumber(g, 16)
    b = tonumber(b, 16)
    a = tonumber(a, 16)
    return Color.normalize(r,g,b,a)
end

function Color.parseARGBInt(color)
    local a = math.floor(color / 0x1000000)
    local r = math.floor(color / 0x10000  ) % 256
    local g = math.floor(color / 0x100    ) % 256
    local b = color % 256
    return Color.normalize(r,g,b,a)
end

function Color.unpack(color)
    if type(color) == "string" then
        return Color.parseARGBString(color)
    elseif type(color) == "number" then
        return Color.parseARGBInt(color)
    elseif type(color) == "table" then
        return color[1] or 1, color[2] or 1, color[3] or 1, color[4] or 1
    end
    return 1, 1, 1, 1
end

function Color.fromHSV(h, s, v)
    local function f(n)
        local k = (n + h*3/math.pi) % 6
        return v - v*s*math.max(0, math.min(k, 4-k, 1))
    end
    return f(5), f(3), f(1)
end

return Color