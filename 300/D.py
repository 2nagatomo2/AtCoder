import math

N = int(input())
root_n = math.sqrt(N)
lst = []
for i in range(2, int(root_n)+1):
    if N % i == 0:
        lst.append(i)