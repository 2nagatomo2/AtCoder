n = int(input())
s = input()

T_win, A_win = 0, 0

for i in s:
    if i == 'T':
        T_win += 1
    else:
        A_win += 1
    
if T_win > A_win:
    print('T')
elif T_win < A_win:
    print('A')
else:
    if s[n-1] == 'T':
        print('A')
    else:
        print('T')