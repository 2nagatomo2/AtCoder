import itertools

H, W = map(int, input().split())

A = []
B = []
for i in range(H):
    A.append(list(map(int, input().split())))
for i in range(H):
    B.append(list(map(int, input().split())))

A_check = list(itertools.chain.from_iterable(A))
B_check = list(itertools.chain.from_iterable(B))

def change_row(a, h, w):
    a[h][w], a[h][w+1] = a[h][w+1], a[h][w]


def change_column(a, h, w):
    a[h][w], a[h+1][w] = a[h+1][w], a[h][w]

if A_check.sort() == B_check.sort():
    print(-1)
    exit()
else:
    cnt = 0
    while A == B:
        cnt += 1
        for i in range(H-1):
                for j in range(W-1):
                    if A[i][j] != B[i][j]:
                        for k in range(i, H):
                            for l in range(j, W):
                                if A[i][j] == B[k][l]:
                                    if i == k:
                                        change_row(A, i, j)
                                    else:
                                        change_column(A, i, j)

print(cnt)

                    
