N = int(input())
S = []
str = ''

for i in range(N):
    S.append(input())

for i in range(N):
    for j in range(N):
        if i == j:
            continue
        else:
            str = S[i] + S[j]
            str_reversed = ''.join(list(reversed(str)))
            if str == str_reversed:
                print('Yes')
                exit()

print('No')