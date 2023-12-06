N, T = input().split()
N = int(N)

ans = []
cnt = 0

for i in range(N):
    S = input()

    # TがT'と等しいとき
    if T == S:
        cnt += 1
        ans.append(i+1)
    
    # T'がTに一文字挿入されたものであるとき
    elif len(T) == len(S)+1:
        if T[:len(T)-1] == S:
            cnt += 1
            ans.append(i+1)
        else:
            for j in range(len(S)):
                if T[j] != S[j]:
                    if T[j+1:] == S[j:]:
                        cnt += 1
                        ans.append(i+1)
                    break

    # T'がTから一文字削除されたものであるとき
    elif len(T) == len(S)-1:
        if T == S[:len(S)-1]:
            cnt += 1
            ans.append(i+1)
        else:
            for j in range(len(T)):
                if T[j] != S[j]:
                    if T[j:] == S[j+1:]:
                        cnt += 1
                        ans.append(i+1)
                    break
    
    # T'がTの一文字を別の文字に変更したものであるとき
    elif len(T) == len(S):
        for j in range(len(T)):
            if T[j] != S[j]:
                if T[j+1:] == S[j+1:]:
                    cnt += 1
                    ans.append(i+1)
                break

print(cnt)
print(*ans)