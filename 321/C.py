import itertools

K = int(input())
lst = [[i for i in range(10)]]
cnt = [[1 for _ in range(10)]]
cycle = 1
for i in range(1, 10): # 桁数2~10桁
    lst.append([])
    cnt.append([1])
    for j in range(i, 10): # 一番大きい位の数字
        for k in range(cycle):
            lst[i].append(j*10**i+lst[i-1][k])
        cycle += cnt[i-1][j-i+1]
        cnt[i].append(cycle)
    cycle = 1
            
lst = list(itertools.chain.from_iterable(lst))

print(lst[K])