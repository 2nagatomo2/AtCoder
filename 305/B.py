dict = {'A': 0, 'B': 3, 'C': 4, 'D': 8, 'E': 9, 'F': 14, 'G': 23}
p, q = input().split()
ans = abs(dict[p] - dict[q])
print(ans)