N, M, H, K = map(int, input().split())
S = input()

item = {}
for i in range(M):
    x, y = map(int, input().split())
    item[x, y] = True

dat_x, dat_y = 0, 0
for i in S:
    if H == 0:
        print('No')
        exit()

    if i == 'R':
        dat_x += 1
    elif i == 'L':
        dat_x -= 1
    elif i == 'U':
        dat_y += 1
    else:
        dat_y -= 1
    H -= 1
    if (dat_x, dat_y) in item.keys() and H < K:
            H = K
            del item[(dat_x, dat_y)]
    
print('Yes')