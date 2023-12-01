import bisect

N = int(input())
A = list(map(int, input().split()))
Q = int(input())

accumulation = [0]
for i in range(1, N):
    if i % 2 == 1:
        accumulation.append(accumulation[i-1])
    else:
        accumulation.append(accumulation[i-1] + A[i] - A[i-1])

for i in range(Q):
    l, r = map(int, input().split())
    ans = 0
    num1 = bisect.bisect_left(A, l)
    if num1 % 2 == 1:
        ans -= accumulation[num1]
    else:
        ans -= accumulation[num1] - A[num1] + l
    
    num2 = bisect.bisect_left(A, r)
    if num2 % 2 == 1:
        ans += accumulation[num2]
    else:
        ans += accumulation[num2] + r - A[num2]
    
    print(ans)