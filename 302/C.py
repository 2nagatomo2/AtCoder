import itertools
N , M = map(int, input().split())
S = []
for i in range(N):
    S.append(input())
S = list(itertools.permutations(S))

def check(s_1, s_2):
    cnt = 0
    for i in range(M):
        if s_1[i] != s_2[i]:
            cnt += 1
    if cnt == 1:
        return True
    return False

for i in range(len(S)):
    flag = True
    for j in range(N-1):
        if not check(S[i][j], S[i][j+1]):
            flag = False
            break
    if flag:
        print('Yes')
        exit()
print('No')
