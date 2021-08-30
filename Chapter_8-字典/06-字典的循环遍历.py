# 1.遍历字典中的key
dict1 = {'name': 'Tom', 'sex': '男', 'age': 18}
for key in dict1.keys():
    print(key, end='.')
print('', end='\n')

# 2.遍历字典中的value
for value in dict1.values():
    print(value, end='.')
print('', end='\n')

# 3.遍历字典中的key-value
for key_value in dict1.items():
    print(key_value, end='.')
print('', end='\n')

# 4.遍历字典中的key-value，并拆包
for key, value in dict1.items():
    print(f'{key}:{value}', end='.')
