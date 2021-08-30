"""
    map(func,list):
        将传入的函数变量func作用到list变量的每个元素中，并将结果组成新的迭代器返回.
"""
# 1.需求：计算list1序列中各个数字的2次方
list1 = [1, 2, 3, 4, 5]

def func(x):
    return x ** 2

result = map(func, list1)
print(result) # <map object at 0x000002019ED05FA0>

# for i in result: # 使用迭代器
#     print(i, end='.')

print(list(result)) # [1, 4, 9, 16, 25]