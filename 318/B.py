N = int(input())

seat = [[0] * 100 for _ in range(100)]

for i in range(N):
    a, b, c, d = map(int, input().split())
    for j in range(a, b):
        for k in range(c, d):
            seat[j][k] = 1

area = 0

for i in range(100):
    cnt = 0
    for j in range(100):
        if seat[i][j] == 1:
            cnt += 1
        else:
            if cnt == 0:
                continue
            else:
                area += cnt
                cnt = 0
    area += cnt

print(area)