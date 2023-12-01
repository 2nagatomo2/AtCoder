X, Y, Z = map(int, input().split())
S = input()

dp = [[0, 0] for _ in range(len(S) + 1)]
dp[0][1] = Z
for i in range(1, len(S)+1):
    if S[i-1] == 'a':
        dp[i][0] = min(dp[i-1][0] + X, dp[i-1][1] + X + Z)
        dp[i][1] = min(dp[i-1][0] + Y + Z, dp[i-1][1] + Y)
    else:
        dp[i][0] = min(dp[i-1][0] + Y, dp[i-1][1] + Y + Z)
        dp[i][1] = min(dp[i-1][0] + X + Z, dp[i-1][1] + X)

ans = min(dp[len(S)][0], dp[len(S)][1])
print(ans)