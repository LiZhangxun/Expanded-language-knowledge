"""
    1.del():删除列表或删除指定数据
    2.pop():删除指定下标的数据(默认为最后一个)，并返回该数据
    3.remove():移除列表中某个数据的第一个匹配项
    4.clear():清空列表中所有数据
"""
# 1.del
name_list = ['Tom', 'Lily', 'Rose']
del name_list # 或者写成del(name_list)
print(name_list)

name_list1 = ['Tom', 'Lily', 'Rose']
del(name_list1[0]) # 指定删除某个数据
print(name_list1)

# 2.pop() -- 可指定删除数据的下标,并返回被删除的数据
name_list2 = ['Tom', 'Lily', 'Rose']
del_name = name_list2.pop(1)
print(del_name)
print(name_list2)

# 3.remove() -- 移除列表中某个数据的第一个匹配项
name_list3 = ['Tom', 'Lily', 'Rose', 'Rose']
name_list3.remove('Rose')
print(name_list3)

# 4.clear() -- 清空列表
name_list4 = ['Tom', 'Lily', 'Rose']
name_list4.clear()
print(name_list4)
