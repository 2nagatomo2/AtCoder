M = int(input())
D = list(map(int, input().split()))

mid = (sum(D) + 1) // 2
sum = 0

for i in range(M):
    sum += D[i]
    if sum >= mid:
        month = i + 1
        day = mid + D[i] - sum
        break

print(month, day)