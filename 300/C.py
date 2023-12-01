H, W = map(int, input().split())
N = min(H, W)
C = [input() for _ in range(H)]
S = [0] * N

def size_of_cross(h, w, d):
    size = 0
    for i in range(1, d+1):
        if C[h+i][w+i] == '#' and C[h+i][w-i] == '#' and C[h-i][w+i] == '#' and C[h-i][w-i] == '#':
            size += 1
        else:
            break
    return size

for i in range(1, H-1):
    for j in range(1, W-1):
        min_h = min(i, H - i - 1)
        min_w = min(j, W - j - 1)
        d = min(min_h, min_w)
        if C[i][j] == '#':
            size = size_of_cross(i, j, d)
            if size != 0:
                S[size-1] += 1

print(*S)