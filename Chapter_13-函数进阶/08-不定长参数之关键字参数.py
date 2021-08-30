# 使用关键字参数时，kwargs变量是一个字典，字典内容与关键字参数的key:value相对应
def user_info(**kwargs):
    print(kwargs)
    print(type(kwargs))

# 使用关键字参数
user_info(name = 'TOM', age = 18, id = 100) # {'name': 'TOM', 'age': 18, 'id': 100}
user_info(name = 'TOM') # {'name': 'TOM'}
user_info() # {}