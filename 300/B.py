from collections import deque
H, W = map(int, input().split())

A = [deque(input()) for _ in range(H)]
B = [deque(input()) for _ in range(H)]

def vertical_sift(A):
    tmp = A[H-1]
    for i in range(H-1, 0, -1):
        A[i] = A[i-1]
    A[0] = tmp

def horizontal_sift(A):
    for i in range(H):
        tmp = A[i].pop()
        A[i].appendleft(tmp)

for i in range(H):
    for j in range(W):
        horizontal_sift(A)
        if A == B:
            print('Yes')
            exit()
    vertical_sift(A)

print('No')