N, M = map(int, input().split())
S = []
ans = []
for i in range(N):
    S.append(input())

for i in range(N-8):
    for j in range(M-8):
        if S[i][j:j+4] == '###.' and S[i+1][j:j+4] == '###.' and S[i+2][j:j+4] == '###.' and S[i+3][j:j+4] == '....':
            if S[i+8][j+5:j+9] == '.###' and S[i+7][j+5:j+9] == '.###' and S[i+6][j+5:j+9] == '.###' and S[i+5][j+5:j+9] == '....':
                ans.append([i+1, j+1])

for i in range(len(ans)):
    print(*ans[i])
