def factorial(a)
    if a == 1
        return 1
    else
        return a * factorial(a - 1)
    end
end
x = gets.chomp.to_i
puts factorial(x)