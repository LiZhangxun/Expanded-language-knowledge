# while循环创建一个0-10的列表
list1 = []
i = 0
while i < 10:
    list1.append(i)
    i += 1
print(list1)

# for循环创建一个0-10的列表
list2 = []
for i in range(0, 10, 1):
    list2.append(i)
print(list2)

# 使用列表推导式实现 --> 实际上就是for的简写
# [返回值 for i in range()]
list3 = [i for i in range(0, 10, 1)]
print(list3)
