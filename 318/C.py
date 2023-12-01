N, D, P = map(int, input().split())
F = list(map(int, input().split()))

F = sorted(F)
ans = sum(F)

for i in range(N // D):
    if sum(F[N -(i+1)*D:N-i*D]) >= P:
        ans = ans - sum(F[N-(i+1)*D:N-i*D]) + P

if sum(F[0:N-N//D*D]) >= P:
    ans = ans - sum(F[0:N-N//D*D]) + P

print(ans)