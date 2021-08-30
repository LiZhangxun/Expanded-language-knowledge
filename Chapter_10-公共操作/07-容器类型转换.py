# 容器类型转换函数并不会改变原数据类型，返回值为改变后的数据类型
list1 = [10, 20, 30]
s1 = {100, 200, 300}
t1 = ('a', 'b', 'c')

# tuple():转换成元组
print(tuple(list1))
print(list1)

# list():转换成列表
print(list(s1))
print(s1)

# set():转换成集合
print(set(t1))
print(t1)
