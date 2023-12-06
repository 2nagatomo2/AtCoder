# dfs(深さ優先探索)を使用して実装
# CPythonでは通らなかったがPyPyでは通った
# この二つの違い何？？
N, M = map(int, input().split())

G = [[0] * (N+1) for _ in range(N+1)]

for _ in range(M):
    a, b , c = map(int, input().split())
    G[a][b] = c
    G[b][a] = c

ans = 0
visited = [False] * (N+1)

def dfs(pos, dist):
    global ans
    visited[pos] = True
    ans = max(ans, dist)
    for i in range(1, N+1):
        if not visited[i] and G[pos][i] != 0:
            dfs(i, dist+G[pos][i])
    visited[pos] = False

for i in range(1, N+1):
    dfs(i, 0)

print(ans)