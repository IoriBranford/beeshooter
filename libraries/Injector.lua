return function(from)
    return function(to)
        for k, v in pairs(from) do
            to[k] = v
        end
    end
end