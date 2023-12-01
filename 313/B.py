N, M = map(int, input().split())
member = set(i for i in range(1, N+1))
loser = set()
for i in range(M):
    A, B = map(int, input().split())
    loser.add(B)

if len(loser) == N - 1:
    print(*(member - loser))
else:
    print(-1)