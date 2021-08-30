# 1.求和函数
def sum_num(a, b, c):
    return a + b + c

# 2.求平均值
def average_num(a, b, c):
    sumResult = sum_num(a, b, c)
    return sumResult / 3

# 调用函数
print(f'1,2,3的平均值为{average_num(1, 2, 3)}')
