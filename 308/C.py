N = int(input())
P = []

for i in range(N):
    A, B = map(int, input().split())
    p = - 1 *  10 ** 100 * A // (A + B) + i * 10 ** 6
    P.append([p, i+1])

P.sort()
for i in range(N):
    print(P[i][1], end = ' ')
    