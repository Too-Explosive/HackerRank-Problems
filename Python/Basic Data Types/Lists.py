lst = []
x = int(input())
for a in range(0, x):
    b = input().split()
    if b[0] == "insert":
        lst.insert(int(b[1]), int(b[2]))
    elif b[0] == "print":
        print(lst)
    elif b[0] == "remove":
        lst.remove(int(b[1]))
    elif b[0] == "append":
        lst.append(int(b[1]))
    elif b[0] == "sort":
        lst.sort()
    elif b[0] == "pop":
        lst.pop()
    elif b[0] == "reverse":
        lst.reverse()
