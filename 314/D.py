N = int(input())
S = list(input())
Q = int(input())

query = []
last_qi = -1
for i in range(Q):
    t, x, c = input().split()
    t, x = int(t), int(x)
    query.append((t, x, c))

    if t == 2 or t == 3:
        last_qi = i

for i in range(Q):
    t, x, c = query[i]
    if i == last_qi:
        if t == 2:
            S = list(''.join(S).lower())
        else:
            S = list(''.join(S).upper())
    else:
        if t == 1:
            S[x-1] = c

print(*S, sep='')