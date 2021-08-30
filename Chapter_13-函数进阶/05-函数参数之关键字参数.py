"""
    关键字参数：
        1.以“键=值”的形式加以指定，让函数更加清晰。
        2.函数调用时，如果有位置参数，位置参数必须在关键字参数的前面，但关键字参数之间不存在顺序先后.
"""
def user_info(name, age, gender):
    print(f'您的名字是{name}, 年龄是{age}, 性别是{gender}')

# 1.通过位置参数和关键字参数进行组合
user_info('Rose', age = 20, gender = '女')

# 2.关键字参数之间无需考虑顺序
user_info('小明', gender = '女', age = 16)

# 3.位置参数必须在关键字参数前面
# user_info(name = '小明', '女', age = 16) # 报错
user_info('女', name = '小明', age = 16) # 报错:位置混乱,编译器认为name值有多个