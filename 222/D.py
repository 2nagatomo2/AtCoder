S = int(input())

a = list(map(int, input().split()))
b = list(map(int, input().split()))
mod = 998244353

dp = [[0 for _ in range(b[S-1]+1)]]

for i in range(a[0], b[0]+1):
    dp[0][i] = 1

for i in range(1, S):
    dp.append([0 for _ in range(b[S-1]+1)])
    
    for j in range(a[i-1], a[i]):
        dp[i][a[i]] += dp[i-1][j]
    
    for j in range(a[i], b[i]+1):
        dp[i][j] += dp[i][j-1]
        dp[i][j] += dp[i-1][j]

ans = sum(dp[S-1]) % mod
print(ans)