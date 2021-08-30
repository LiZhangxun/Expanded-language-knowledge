"""
    # ................列表是可变数据类型...............
    1.append():列表结尾追加数据
        语法:列表序列.append(数据)
        注意事项：append函数追加数据时，如果数据是一个序列，则将整个序列追加到列表结尾
    2.extend():列表结尾追加数据，如果数据是一个序列，则将这个序列的数据逐一添加到列表
        语法:列表序列.extend(数据)
    3.insert():指定位置新增数据
        语法:列表序列.insert(新增数据所在位置的下标，数据)
"""
# append()函数
name_list = ['Tom', 'Lily', 'Rose']
name_list.append('LZX')
# 说明原列表是可变的
print(name_list) # ['Tom', 'Lily', 'Rose', 'LZX']

name_list.append([11, 22])
print(name_list) # ['Tom', 'Lily', 'Rose', 'LZX', [11, 22]]

# extend()函数，将序列的数据拆开，逐个字符添加进去
name_list1 = ['Tom', 'Lily', 'Rose']
name_list1.extend('LZX')
print(name_list1) # ['Tom', 'Lily', 'Rose', 'L', 'Z', 'X']

name_list1.extend([11, 22])
print(name_list1) # ['Tom', 'Lily', 'Rose', 'L', 'Z', 'X', 11, 22]

name_list1.extend(['123', '1234'])
print(name_list1) # ['Tom', 'Lily', 'Rose', 'L', 'Z', 'X', 11, 22, '123', '1234']

# insert()函数，将整个数据放进去，类似于append
name_list2 = ['Tom', 'Lily', 'Rose']
name_list2.insert(3, 'LZX')
print(name_list2) # ['Tom', 'Lily', 'Rose', 'LZX']

name_list2.insert(0, [11, 22])
print(name_list2) # [[11, 22], 'Tom', 'Lily', 'Rose', 'LZX']


