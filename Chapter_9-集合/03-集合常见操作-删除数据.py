s1 = {10, 20, 30, 40}
# 1.remove():删除集合中的指定数据，如果数据不存在则报错
s1.remove(10)
print(s1)

# 2.discard():删除集合中的指定数据，如果数据不存在也不会报错
s1.discard(0)
print(s1)

# 3.pop():删除集合中任意一个数据，并返回该数据
num = s1.pop()
print(num)
print(s1)


