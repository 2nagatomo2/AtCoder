N = int(input())
dp = [[0, 0] for _ in range(N+1)]

for i in range(1, N+1):
    x, y = map(int, input().split())
    if x == 0:
        if y >= 0:
            dp[i][0] = max(dp[i-1][0] + y, dp[i-1][1] + y)
        else:
            dp[i][0] = max(dp[i-1][0], dp[i-1][1] + y)
        dp[i][1] = dp[i-1][1]
    else:
        if y >= 0:
            dp[i][1] = max(dp[i-1][0] + y, dp[i-1][1])
        else:
            dp[i][1] = dp[i-1][1]
        dp[i][0] = dp[i-1][0]

ans = max(dp[N][0], dp[N][1])
print(ans)