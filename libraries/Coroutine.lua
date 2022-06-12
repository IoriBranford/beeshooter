function coroutine.wait(n)
    for i = 1, n do
        coroutine.yield()
    end
end

function coroutine.waitfor(f, ...)
    local a,b,c,d,e
    repeat
        coroutine.yield()
        a,b,c,d,e = f(...)
    until a
    return a,b,c,d,e
end