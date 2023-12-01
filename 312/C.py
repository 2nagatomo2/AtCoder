import bisect
N, M = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

A = sorted(A)
B = sorted(B)

l = min(min(A), min(B))
r = max(max(A), max(B))

while l <= r:
    mid = (l + r) // 2
    f = bisect.bisect_right(A, mid)
    g = M - bisect.bisect_left(B, mid)
    if f >= g:
        r = mid - 1
    else:
        l = mid + 1
print(l)