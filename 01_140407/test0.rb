def test(i, j)
    return i*j
end

def main()
    i = 3
    j = 2
    k = test(3, 2)
    if k > 5
        print(">5\n")
    else
        print("<=5\n")
    end
end

main()
