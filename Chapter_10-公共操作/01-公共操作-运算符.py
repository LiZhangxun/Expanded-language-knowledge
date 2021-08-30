"""
    运算符：        功能：                     支持的容器类型：
    +：             合并                       字符串、列表、元组
    *：             复制                       字符串、列表、元组
    in：            元素是否存在               字符串、列表、元组、字典
    not in：        元素是否不存在             字符串、列表、元组、字典
"""
str1 = 'aa'
str2 = 'bb'

list1 = [1, 2]
list2 = [10, 20]

t1 = (1, 2)
t2 = (10, 20)

dict1 = {'name': 'Python'}
dict2 = {'age': 30}

# +：合并
print(str1 + str2)
print(list1 + list2)
print(t1 + t2)
# print(dict1 + dict2) #会报错

# *：复制 -- 用于输出多个相同的东西
print('*' * 5)
print(str1 * 5)
print(list1 * 5)
print(t1 * 5)
# print(dict1 * 5) # 报错

# in/not in :判断是否存在
print('a' in str1)
print(2 not in list2)
print(2 in t1)
print('name' in dict1) # 可以判断键是否存在字典
print(30 in dict2) # 不能判断键对应的值是否在字典
# 需调用相应的方法
print('name' in dict1.keys())
print(30 in dict2.values())
