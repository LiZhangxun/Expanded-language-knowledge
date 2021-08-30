"""
    filter():用于过滤序列，过滤掉不符合条件的元素，返回一个filter对象，需要用类型转换函数进行转换.
"""

list1 = [1, 2, 3, 4, 5]

def func(x):
    return x % 2 == 0

# 筛选序列中的偶数
result = filter(func, list1)

print(result)

print(list(result))