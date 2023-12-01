n = int(input())
s = input()
t = input()

# ここは模範解答
# 1 replace()を使う
'''
s = s.replace('l', '1').replace('o', '0')
t = t.replace('l', '1').replace('o', '0')
'''

# 2 translate()を使う
s = s.translate(str.maketrans({'l':'1', 'o':'0'}))
t = t.translate(str.maketrans({'l':'1', 'o':'0'}))

print('Yes' if s == t else 'No')