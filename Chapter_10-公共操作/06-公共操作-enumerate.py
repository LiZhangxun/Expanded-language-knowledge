"""
    enumerate():
        函数用于将一个可遍历的数据对象(如列表、元组或字符串)组合为一个索引序列，同时列出数据和数据下标，一般用于for循环。
    语法:
        enumerate(可遍历对象，start=0)
        start参数用来设置遍历数据下标的起始值，默认为0
"""

# 返回结果是元组，元组第一个数据是原迭代对象的数据对应下标，元组第二个数据是原迭代对象的数据
list1 = ['a', 'b', 'c']
for i in enumerate(list1):
    print(i)

# 按需求去更改数据的对应下标的起始值
for i in enumerate(list1, start=1):
    print(i)
