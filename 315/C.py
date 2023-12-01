N = int(input())
F = []
S = []
max_f = []
max_s = 0
for i in range(N):
    f, s = map(int, input().split())
    F.append(f)
    S.append(s)
    if s > max_s:
        max_f = [f]
        max_s = s
    elif s == max_s:
        max_f.append(f)

if len(set(max_f)) == 1:
    if len(max_f) == 1:
        ans = max_s
        for i in range(N):
            if S[i] != max_s:
                if F[i] == max_f[0]:
                    ans = max(ans, max_s + S[i] // 2)
                else:
                    ans = max(ans, max_s + S[i])
    else:
        ans = max_s * 3 // 2
        for i in range(N):
            if S[i] != max_s:
                if F[i] == max_f[0]:
                    ans = max(ans, max_s + S[i] // 2)
                else:
                    ans = max(ans, max_s + S[i])
else:
    ans = max_s * 2

print(ans)