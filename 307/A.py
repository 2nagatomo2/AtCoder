N = int(input())
A = list(map(int, input().split()))
record = []
sum = 0

for i in range(7 * N):
    sum += A[i]
    if (i+1) % 7 == 0:
        record.append(sum)
        sum = 0

print(*record)