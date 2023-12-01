N, M = map(int, input().split())
C = list(input().split())
D = list(input().split())
P = list(map(int, input().split()))
dict = {}
sum = 0

for i in range(M):
    dict[D[i]] = P[i+1]

for i in range(N):
    if C[i] in dict:
        sum += dict[C[i]]
    else:
        sum += P[0]

print(sum)