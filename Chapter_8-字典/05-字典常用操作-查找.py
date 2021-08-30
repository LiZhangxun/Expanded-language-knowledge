# 1.按照key值进行数据查找
dict1 = {'name': 'Tom', 'sex': '男', 'age': 18}
print(dict1['name'])

# 2.利用get()函数-- 字典序列.get(key,默认值)
# 如果当前查找的key不存在，则返回第二个参数(默认值)，如果省略第二个参数，则返回None
print(dict1.get('name')) #返回Tom
print(dict1.get('id', '不存在')) # 返回110
print(dict1.get('id')) # 返回None

# 3.keys()函数 -- 返回“键”的名称，返回值类型是一个可迭代对象，可用for遍历
print(dict1.keys())

# 4.values()函数 -- 返回“值”的名称，返回值类型是一个可迭代对象，可用for遍历
print(dict1.values())

# 5.items()函数 -- 返回“键值对”，每个键值对是一个元组，返回值类型是一个可迭代对象，可用for遍历
print(dict1.items())

