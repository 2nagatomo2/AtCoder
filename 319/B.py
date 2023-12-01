N = int(input())
s = ['-'] * (N+1)
for i in range(N+1):
    for j in range(1, 10):
        if N % j == 0:
            if i % (N / j) == 0:
                s[i] = j
                break

ans = ''

for i in range(N+1):
    ans += str(s[i])

print(ans)