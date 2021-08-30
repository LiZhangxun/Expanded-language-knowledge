"""
    高阶函数:把函数作为参数传入，这样的函数称为高阶函数。
"""

# 1.abs()函数：对数字求绝对值计算
print(abs(-10))

# 2.round()函数：对数字完成四舍五入计算
print(round(1.2))
print(round(1.9))

# 任意两个数字，先求绝对值/四舍五入再求和
# 方法1:利用abs()函数/round()函数
def add_num(a, b):
    return abs(a) + abs(b)
print(add_num(-1, 2))

# 方法2:函数作为参数,参数f可以根据传入的实参(函数名)替换成不同功能的函数
def add_num2(a, b, f):
    return f(a) + f(b)
print(add_num2(-1, 2, abs))


