N = input()
l = len(N)
N = int(N)
if l > 3:
    N = N // (10 ** (l-3)) * (10 ** (l-3))

print(N)