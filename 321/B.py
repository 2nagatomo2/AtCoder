N, X = map(int, input().split())
A = list(map(int, input().split()))

A = sorted(A)
max = sum(A[1:N-1])
min = sum(A[0: N-2])
mid = sum(A[1:N-2])

if min >= X:
    ans = 0
elif max < X:
    ans = -1
elif X - mid <= 100:
    ans = X - mid

print(ans)