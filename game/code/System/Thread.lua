local Thread = {}

function Thread.compile(code, name, env)
    local func, err = loadstring(code, name)
    if func and env then
        setfenv(func, env)
    end
    return func, err
end

function Thread.create(func)
    return coroutine.create(func)
end

function Thread.run(thread)
    if type(thread) == "function" then
        thread = coroutine.create(thread)
    end

    if not thread then
        return
    end

    local ok, result = coroutine.resume(thread)

    if ok and coroutine.status(thread) ~= "dead" then
        return thread
    end

    return ok, result
end

return Thread