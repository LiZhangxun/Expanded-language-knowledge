"""
注意以下语句的缩进关系:
if 条件:
    代码1
    代码2
    if 条件2:
        代码1
        代码2
"""
# if嵌套语句中，if和离它最近的else配对。
money = input("请输入有钱:“Y”，还是没钱“N”:")
seat = 1
if money == "Y" or money == "y":
    print("请上车")
    if seat == 1:
        print("请坐")
    else:
        print("站着吧")
elif money == "N" or money == "n":
    print("不能上车")