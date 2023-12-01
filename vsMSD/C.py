W, H = map(int, input().split())

dp = [[0 for _ in range(W)] for _ in range(H)]

dp[0][0] = 1

for i in range(H):
    for j in range(W):
        if i == 0 and j == 0:
            continue
        dp[i][j] = (dp[i][j-1] + dp[i-1][j]) % 1000000007

print(dp[H-1][W-1])