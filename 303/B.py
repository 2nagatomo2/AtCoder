N, M = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(M)]
dict = {}
num = 0
for i in range(N):
    for j in range(N):
        if i == j:
            continue
        else:
            dict[i+1, j+1] = num
            dict[j+1, i+1] = num
            num += 1

pair = set()

for i in range(M):
    for j in range(N-1):
        pair.add(dict[a[i][j], a[i][j+1]])

ans = N * (N-1) // 2 - len(pair)
print(ans)