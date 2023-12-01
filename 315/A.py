S = input()
ans = ''
for i in S:
    if i == 'a' or i == 'i' or i == 'u' or i == 'e' or i == 'o':
        continue
    else:
        ans += i
print(ans)