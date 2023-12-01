N = int(input())

if N % 5 < 3:
    ans = N // 5 * 5
else:
    ans = N // 5 * 5 + 5

print(ans)