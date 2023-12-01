N, M, D = map(int, input().split())

A = list(map(int, input().split()))
B = list(map(int, input().split()))
A.sort()
B.sort()
cnt = 0

for i in range(N):
    for j in range(cnt, M):
        if abs(A[N-i-1] - B[M-j-1]) <= D:
            print(A[N-i-1] + B[M-j-1])
            exit()
        elif A[N-i-1] > B[M-j-1]:
            break
        elif A[N-i-1] < B[M-j-1]:
            cnt += 1
print(-1)