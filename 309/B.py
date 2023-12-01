N = int(input())
A = [input() for _ in range(N)]
tmp = []
tmp.append(A[0][N-1])

A[0] = A[1][0] + A[0][0:N-1]
for i in range(1, N-1):
    tmp.append(A[i][N-1])
    A[i] = A[i+1][0] + A[i][1:N-1] + tmp[i-1]
A[N-1] = A[N-1][1:N] + tmp[N-2]

for i in range(N):
    print(A[i])