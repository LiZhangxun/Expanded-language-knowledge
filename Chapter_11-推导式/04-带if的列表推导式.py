# 创建0-10的偶数列表
# 1.改变range()步长
list1 = [i for i in range(0, 10, 2)]
print(list1)

# 2.if实现
list2 = [i for i in range(0, 10, 1) if i % 2 == 0]
print(list2)
