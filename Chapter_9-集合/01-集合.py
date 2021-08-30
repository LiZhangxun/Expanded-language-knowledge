"""
    1.创建集合使用{}或set()函数，但是如果创建空集合只能使用set()，因为{}用来创建空字典
    2.集合内的数据无顺序
    3.集合内的数据不重复
    4.集合是可变类型数据
"""

# 创建集合
s1 = {10, 20, 30, 40}
print(s1)
print(type(s1)) # set

# 创建集合
s3 = set('abcdefg')
print(s3) # {'a', 'g', 'd', 'e', 'b', 'c', 'f'}，并且数据并且没有按顺序排列
print(type(s3))

# 创建集合
s4 = set()
print(type(s4))

# 创建字典
s5 = {}
print(type(s5))
