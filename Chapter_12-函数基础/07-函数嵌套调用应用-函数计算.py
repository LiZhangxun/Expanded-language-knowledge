# 1.求和函数
def sum_num(a, b, c):
    """
    求和函数
    :param a: 参数a
    :param b: 参数b
    :param c: 参数c
    :return:  求和结果
    """
    return a + b + c

# 2.求平均值
def average_num(a, b, c):
    """
    求平均值函数
    :param a: 参数a
    :param b: 参数b
    :param c: 参数c
    :return:  平均值结果
    """
    sumResult = sum_num(a, b, c)
    return sumResult / 3

# 调用函数
print(f'1,2,3的平均值为{average_num(1, 2, 3)}')
