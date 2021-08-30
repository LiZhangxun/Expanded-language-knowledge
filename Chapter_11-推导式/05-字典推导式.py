# 创建一个字典：字典key是1-5数字，value是这个数字的2次方
dict1 = {i: i**2 for i in range(1, 5)}
print(dict1)

# 合并两个列表成1一个字典
list1 = ['name', 'age', 'gender']
list2 = ['Tom', 20, 'man']
dict2 = {list1[i]: list2[i] for i in range(len(list1))}
print(dict2)

# 若两个列表长度不一致时，取长度短的那个
list3 = ['name', 'age', 'gender', 'id']
list4 = ['Tom', 20, 'man']
dict3 = {list3[i]: list4[i] for i in range(len(list4))}
print(dict3)
