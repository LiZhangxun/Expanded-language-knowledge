"""
    lambda表达式：匿名函数
    lambda作用：如果一个函数有一个返回值，并且只有一句代码，可以使用lambda表达式简化
    lambda语法：
        lambda 参数列表：表达式
        注意：
            (1)lambda表达式的参数列表可有可无，函数的参数在lambda表达式中完全适用
            (2)lambda表达式能接收任何数量的参数，但只能返回一个表达式的值.
"""
# 函数
def fn1():
    return 200

# 直接打印函数，输出的是此函数的内存地址
print(fn1)
print(fn1())

# lambda表达式
fn2 = lambda : 100
# 直接打印lambda表达式，输出的是此lambda的内存地址
print(fn2)
# 调用lambda表达式
print(fn2())