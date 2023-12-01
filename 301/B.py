from collections import deque
N = int(input())
A = deque(list(map(int, input().split())))
B = []
flag = True
num1 = A.popleft()

while flag:
    num2 = A.popleft()
    B.append(num1)
    if num1 - num2 < -1:
        for i in range(num2 - num1 - 1):
            B.append(num1 + i + 1)
    elif num1- num2 > 1:
        for i in range(num1 - num2 - 1):
            B.append(num1 - i - 1)
    num1 = num2
    if len(A) == 0:
        B.append(num2)
        flag = False

print(*B)