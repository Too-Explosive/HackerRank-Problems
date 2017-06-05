x = int(input())
mx2 = -102
mx = -101
b = input().split()
for a in range(0, len(b)):
    if int(b[a]) > mx:
        mx2 = mx
        mx = int(b[a])
    elif int(b[a]) > mx2 and int(b[a]) < mx:
        mx2 = int(b[a])
print(mx2)
