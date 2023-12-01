from collections import deque
N = int(input())
A = list(map(int, input().split()))
s = set()
ans = deque()

vertex = A[0]
s.add(1)
ans.append(1)
s.add(vertex)
ans.append(vertex)
for i in range(N):
    vertex = A[vertex-1]
    s.add(vertex)
    ans.append(vertex)
    if len(s) != i+3:
        break

for i in range(len(ans)):
    if ans.popleft() == vertex:
        break

print(len(ans))
print(*ans)