"""
if 条件:
    代码1
    代码2
elif 条件2:
    代码1
    代码2
......
else:
    代码1
    代码2
"""
age = int(input("请输入您的年龄:"))
# 拓展:化简写法如下
# if (18 <= age <= 60):
if (age >= 18) and (age <= 60):
    print(f'您输入的年龄为{age}, 满足年龄要求！')
elif age < 18:
    print(f'您输入的年龄为{age}, 未成年，不满足年龄要求！')
else:
    print(f'您输入的年龄为{age}, 年龄太大，不满足年龄要求！')
print("系统关闭")

