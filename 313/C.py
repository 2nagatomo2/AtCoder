N = int(input())
A = list(map(int, input().split()))
add = 0
subtract = 0
ave = sum(A) // N

if ave == sum(A) / N:
    _max = _min = ave
else:
    _max = ave + 1
    _min = ave

for i in range(N):
    if A[i] >= _max:
        subtract += A[i] - _max
    else:
        add += _min - A[i]

print(max(add, subtract))