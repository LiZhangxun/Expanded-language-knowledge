# 1.位置参数：调用函数时根据函数定义的参数位置来传递参数
def user_info(name, age, gender):
    print(f'您的名字是{name}, 年龄是{age}, 性别是{gender}')

# 传递和定义参数的顺序及个数必须一致
user_info('TOM', 20, '男')
# user_info('TOM', 20) # 报错：个数定义和传入不一致
# user_info(20, 'TOM','男') # 不报错，但数据混乱
