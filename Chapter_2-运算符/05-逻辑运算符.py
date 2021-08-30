"""
逻辑运算符： 返回值均为True or False
1. and:与
2. or:或
3. not:非
"""
a = 0
b = 1
c = 2
print((a < b) and (b < c))
print((a > b) and (b < c))
print((a > b) or (b < c))
print(not (a > b))

# 数字之间的逻辑运算(与c++不太一样,c++中值只有True or False)
# and运算符，只要有一个值为0，则结果为0，否则结果为最后一个非0数字
print(a and b) # 0
print(b and a) # 0
print(a and c) # 0
print(c and a) # 0
print(b and c) # 2
print(c and b) # 1

# or运算符，只有所有值为0结果才为0，否则结果为第一个非0数字
print(a or b) # 1
print(a or c) # 2
print(b or c) # 1

