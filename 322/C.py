N, M = map(int, input().split())
A = list(map(int, input().split()))

for i in range(1,A[0]+1):
    print(A[0]-i)

for i in range(1,M):
    for j in range(A[i-1],A[i]):
        print(A[i]-j-1)
