"""
    return的特点：
        在函数调用return之后，函数体内部位于return后的代码不会执行.
"""

# 案例1
def buy():
    return '烟'
    print('111') # 此代码不会执行
str = buy()
print(str)

# 案例2
def add_num(a, b):
    return a + b
print(f'result={add_num(1, 100)}')

# 案例3 -- 一个函数有多个返回值
def return_num():
    return 1, 2 # 返回值默认是一个元组,return后面可以连接列表，元组或字典，以返回多个值
print(type(return_num()))
print(return_num())

# 返回列表
def return_list():
    return [1, 2, 3]
print(type(return_list()))
print(return_list())

# 返回元组
def return_tuple():
    return (1, 2, 3)
print(type(return_tuple()))
print(return_tuple())

# 返回字典
def return_dic():
    return {'Name':'Tom'}
print(type(return_dic()))
print(return_dic())
