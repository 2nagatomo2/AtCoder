N = int(input())
C = []
A = []
for i in range(N):
    C.append(int(input()))
    A.append(list(map(int, input().split())))
X = int(input())

ans_list = []
min_c = 37

for i in range(N):
    if X in A[i]:
        if C[i] < min_c:
            min_c = C[i]
            ans_list = [i+1]
        elif C[i] == min_c:
            ans_list.append(i+1)

print(len(ans_list))
print(*ans_list)