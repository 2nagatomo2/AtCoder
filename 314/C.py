from collections import deque

N, M = map(int, input().split())
S = input()
C = list(map(int, input().split()))
deque_array = [deque() for _ in range(M)]

for i in range(N):
    deque_array[C[i]-1].append(S[i])

for i in range(M):
    deque_array[i].rotate()

ans = ''

for i in range(N):
    ans += deque_array[C[i]-1].popleft()
    
print(ans)