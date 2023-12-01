N, D = map(int, input().split())
S = [input() for _ in range(N)]
ans = 0
days = 0
for i in range(D):
    free = 0
    for j in range(N):
        if S[j][i] == 'o':
            free += 1
        else:
            days = 0
            break
        if free == N:
            days += 1
            ans = max(ans, days)

print(ans)