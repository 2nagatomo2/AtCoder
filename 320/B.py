S = input()

l = len(S)

for i in range(l, 0, -1):
    for j in range(l-i+1):
        s = S[j:j+i]
        reversed_s = ''.join(reversed(s))
        if s == reversed_s:
            print(i)
            exit()