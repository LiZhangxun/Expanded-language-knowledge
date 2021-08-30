"""
if 条件:
    代码1
    代码2
else:
    代码1
    代码2
"""
# 注意input接收到的数据类型是str,不能和18做判断，需要转换为int类型，使用int()强制转换.
# age = input("请输入您的年龄:")
# age = int(age)
age = int(input("请输入您的年龄:"))
if age >= 18:
    # print("已满18岁", end='-->')
    # print("可以上网")
    print(f"您的年龄是{age}，已经成年，可以上网。")
else:
    print("未成年不允许上网")
print("系统关闭")