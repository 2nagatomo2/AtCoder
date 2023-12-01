N = int(input())
A = list(map(int, input().split()))
dict = {}
ans = []
for i in range(1,N+1):
    dict[i] = 0

for i in range(3 * N):
    dict[A[i]] += 1
    if dict[A[i]] == 2:
        ans.append(A[i])

print(*ans)