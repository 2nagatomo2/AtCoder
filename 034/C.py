W, H = map(int, input().split())
W -= 1
H -= 1
mod = 10 ** 9 + 7
ans = 1

for i in range(H):
    ans *= W + H - i
    ans %= mod
    ans *= pow(H-i, -1, mod)
    ans %= mod

print(ans)