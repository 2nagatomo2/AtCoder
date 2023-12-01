import sys
sys.setrecursionlimit(100000)
N, D = map(int, input().split())
dat = []
ans = [False] * N

for i in range(N):
    dat.append(tuple(map(int, input().split())))

def func(n):
    x1, y1 = dat[n]
    for i in range(N):
        x2, y2 = dat[i]
        if ans[i]:
            continue
        if (x1 - x2) ** 2 + (y1 - y2) ** 2 <= D ** 2:
            ans[i] = True
            func(i)
ans[0] = True
func(0)
for i in range(N):
    if ans[i]:
        print('Yes')
    else:
        print('No')