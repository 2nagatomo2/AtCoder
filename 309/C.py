N, K = map(int, input().split())

list = []
dose = 0

for i in range(N):
    a, b = map(int, input().split())
    dose += b
    list.append([a, b])

list = sorted(list)

if dose <= K:
    print(1)
    exit()

for i in range(N):
    dose -= list[i][1]
    if dose <= K:
        print(list[i][0] + 1)
        break