N, M = map(int, input().split())
S = input()

dp = [[0, 0] for _ in range(N+1)]

dp[0][0] = M
cnt = 0

for i in range(N):
    if S[i] == '0':
        dp[i+1][0] = M
        dp[i+1][1] = cnt
    elif S[i] == '1':
        if dp[i][0] == 0 and dp[i][1] == 0:
            cnt += 1
        elif dp[i][0] > 0:
            dp[i+1][0] = dp[i][0] - 1
            dp[i+1][1] = dp[i][1]
        elif dp[i][1] > 0:
            dp[i+1][1] = dp[i][1] - 1
    else:
        dp[i+1][0] = dp[i][0]
        if dp[i][1] == 0:
            cnt += 1
        else:
            dp[i+1][1] = dp[i][1] - 1

print(cnt)