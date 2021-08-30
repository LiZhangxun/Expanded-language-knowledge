"""
    当捕获多个异常时，可以把要捕获的异常类型的名字，放到except后，并使用元组的方式进行书写。
    try:
        异常代码
    except (异常类型1，异常类型2):
        捕获到异常则执行的代码
"""
try:
    print(1/0)
except (NameError, ZeroDivisionError):
    print('错误')
