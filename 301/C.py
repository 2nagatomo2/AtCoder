from collections import deque

dict = {}
for i in 'atcoder':
    dict.setdefault(i, 0)
S = deque(input())
T = deque(input())
flag = True
at_S = 0
at_T = 0

while flag:
    str_S = S.popleft()
    if str_S == '@':
        at_S += 1
    else:
        dict.setdefault(str_S, 0)
        dict[str_S] += 1
    
    str_T = T.popleft()
    if str_T == '@':
        at_T += 1
    else:
        dict.setdefault(str_T, 0)
        dict[str_T] -= 1
    if len(T) == 0:
        flag = False
    
for i in 'atcoder':
    if dict[i] > 0:
        at_T -= dict[i]
        dict[i] = 0
    elif dict[i] < 0:
        at_S -= dict[i]
        dict[i] = 0
    if at_S < 0 or at_T < 0:
        print('No')
        exit()

for i in dict:
    if dict[i] != 0:
        print('No')
        exit()
print('Yes')