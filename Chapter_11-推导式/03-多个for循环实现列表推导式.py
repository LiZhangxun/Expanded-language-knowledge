# 创建列表如下：[(1,0),(1,1),(1,2),(2,0),(2,1),(2,2)]

# 列表推导式
list1 = [(i, j) for i in range(1, 3) for j in range(3)]
print(list1)

list2 = []
# for循环嵌套实现
for i in range(1, 3):
    for j in range(0, 3):
        list2.append((i, j))
print(list2)
