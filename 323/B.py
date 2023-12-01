"""
N = int(input())
rank = []
for i in range(N):
    S = input()
    rank.append([i+1, S.count('o')])

for i in range(N):
    for j in range(i):
        if rank[i][1] > rank[j][1]:
            tmp = rank[j]
            rank[j] = rank[i]
            rank[i] = tmp
        elif rank[i][1] == rank[j][1] and rank[i][0] < rank[j][0]:
            tmp = rank[j]
            rank[j] = rank[i]
            rank[i] = tmp

for i in range(N):
    print(rank[i][0], end=' ')
"""
N = int(input())

G = [[] for _ in range(N)]
for p in range(1, N + 1):
    S = input()
    win_cnt = S.count('o')
    G[win_cnt].append(p)
    print(G)

for i in range(N - 1, -1, -1):
    for p in G[i]:
        # 小さいプレイヤー番号から順に格納していたので、
        # ソートしなくてもG[i]はすでに小さい順に並んでる。
        print(p, end=' ')