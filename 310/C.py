N = int(input())
S_1 = set()
S_2 = set()

for i in range(N):
    s = input()
    if s == s[::-1]:
        S_1.add(s)
    else:
        S_2.add(s)
        S_2.add(s[::-1])

ans = len(S_1) + len(S_2) // 2
print(ans)