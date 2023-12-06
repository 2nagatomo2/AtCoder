# itertoolsを使い、順列を全通り列挙し、全探索する。
# 計算量は O(NN!+N!)

import itertools

N, M = map(int, input().split())
tmp = [i for i in range(1, N+1)]
loads = list(itertools.permutations(tmp))
G = [[0 for _ in range(N+1)] for _ in range(N+1)]

for i in range(M):
    a, b, c = map(int, input().split())
    G[a][b] = c
    G[b][a] = c
ans = 0

for i in loads:
    dist = 0
    for j in range(N-1):
        start = i[j]
        end = i[j+1]
        if G[start][end] != 0:
            dist += G[start][end]
        else:
            break
    ans = max(ans, dist)

print(ans)