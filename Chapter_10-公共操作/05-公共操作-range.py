"""
    range(start, end, step)
    1.生成从start到end的数字,步长为step,供for循环使用
    2.生成的序列不包含end处的数字
    3.step可省略，默认为1
    4.start不写时，默认从0开始
"""

# 返回一个可迭代的对象，可配合for循环使用
print(range(1, 10))

# 123456789
for i in range(1, 10, 1):
    print(i, end='')

print('')

# 13579
for i in range(1, 10, 2):
    print(i, end='')
print('')

# 0123456789
for i in range(10):
    print(i, end='')