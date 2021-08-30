"""
    递归的特点：
        1.函数内部自己调用自己
        2.必须有出口
"""

# 求数字3以内累加和
def sum_num(num):
    # 如果是1，直接返回1 -- 出口
    if num == 1:
        return 1
    # 如果不是1，重复执行
    return num + sum_num(num - 1)

sum_result = sum_num(3)
print(sum_result)