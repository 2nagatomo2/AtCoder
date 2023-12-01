H, W = map(int, input().split())
S = [input() for _ in range(H)]
ch = {}
cw = {}

for i in range(H):
    for j in range(W):
        if S[i][j] == '#':
            ch.setdefault(i, 0)
            ch[i] += 1
            cw.setdefault(j, 0)
            cw[j] += 1

h_key, h_value = 0, 500
w_key, w_value = 0, 500
for i in ch:
    if ch[i] < h_value:
        h_key = i
        h_value = ch[i]
for i in cw:
    if cw[i] < w_value:
        w_key = i
        w_value = cw[i]
print(h_key+1, w_key+1)