n = int(input())
name = []
age = []
min = 1000000000

for i in range(n):
    s, a = input().split()
    a = int(a)
    name.append(s)
    age.append(a)
    if min > a:
        min = a
        start = i

for i in range(n):
    print(name[start + i])
    if start + i == n-1:
        start = -i-1