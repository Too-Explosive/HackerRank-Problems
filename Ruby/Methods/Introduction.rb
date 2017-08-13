def prime? (x)
    if x === 2
        return true
    end
    if x === 1 or x === 0
        return false
    end
    if
        for y in 2...x
            if x % y === 0
                return false
            end
        end
    end
    return true
end
