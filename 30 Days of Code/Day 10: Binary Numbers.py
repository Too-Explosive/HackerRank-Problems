x = int(input())
mx = 0
count = 0
for a in range(0, len(bin(x))):
    if bin(x)[a] == '1':
        count = count + 1
        if count > mx:
            mx = count
    else:
        count = 0
print(mx)
