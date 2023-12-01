S = list(map(int, input().split()))
sorted_S = sorted(S)

if S != sorted_S:
    print('No')
    exit()

if S[0] < 100 or S[7] > 675:
    print('No')
    exit()

for i in range(8):
    if S[i] % 25 != 0:
        print('No')
        exit()

print('Yes')