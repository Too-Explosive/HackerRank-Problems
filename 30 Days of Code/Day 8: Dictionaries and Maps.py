ha = {}
x = int(input())
for a in range(0, x):
    t = input().split()
    ha[t[0]] = t[1]
while 1:
    try:
        c = input()
    except EOFError:
        c = ''
        break
    if c in ha.keys():
        print(c + '=' + ha[c])
    else:
        print("Not found")
