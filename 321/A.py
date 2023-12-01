N = int(input())
num = N

if N < 10:
    print('Yes')
    exit()

while num >= 10:
    x = num % 10
    y = (num // 10) % 10
    if x < y:
        num //= 10
    else:
        print('No')
        exit()

print('Yes')