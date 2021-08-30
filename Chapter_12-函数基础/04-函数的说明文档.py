# help()函数可以用来查询函数的说明文档，找到函数的相关的用法
help(len)

# 定义一个函数说明文档
#
#     def 函数名(参数)：
#         """说明文档的位置"""
#         代码1
#         ......
#

# 自定义函数说明文档
def sum_num(a, b):
    """求和函数"""
    return a + b

# 调用函数说明文档
help(sum_num)

# 函数说明文档的高级使用
# 在""""""第三个"中间敲回车，会自动补充出参数相关信息
def sum_num2(a, b):
    """
    求和函数sum_num2
    :param a: 参数1
    :param b: 参数2
    :return: 返回求和结果
    """
    return a + b

help(sum_num2)
