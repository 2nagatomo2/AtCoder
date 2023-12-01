N, M = map(int, input().split())

A = list(map(int, input().split()))
score = [0 for _ in range(N)]
left_score = [[] for _ in range(N)]
top_score = 0

for i in range(N):
    s = input()
    for j in range(M):
        if s[j] == 'o':
            score[i] += A[j]
        else:
            left_score[i].append(A[j])
    score[i] += i + 1
    left_score[i] = sorted(left_score[i], reverse=True)
    top_score = max(top_score, score[i])

for i in range(N):
    for j in range(M):
        if top_score <= score[i]:
            print(j)
            break
        else:
            score[i] += left_score[i][j]