x = int(input())
for z in range(0, x):
    s = input()
    a = ""
    b = ""
    for q in range(len(s)):
        if q % 2 == 0:
            a += s[q]
        else:
            b += s[q]
    print(a + ' ' + b)
