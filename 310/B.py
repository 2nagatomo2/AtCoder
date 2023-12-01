N, M = map(int, input().split())
P = []
C = []
F = []

for i in range(N):
    p, c, *f = list(map(int, input().split()))
    P.append(p)
    C.append(c)
    F.append(set(f))

for i in range(N):
    for j in range(N):
        if i != j:
            if P[i] >= P[j] and F[i] <= F[j] and (P[i] > P[j] or F[i] < F[j]):
                print('Yes')
                exit()

print('No')