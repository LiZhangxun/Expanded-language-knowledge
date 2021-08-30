# 需求：8位老师，3个办公室，随机分配8位老师到3个办公室
"""
步骤：
    1.准备数据
        1.1 8位老师 -- 列表存储8个老师名字
        1.2 3个办公室 -- 列表嵌套，一个列表嵌套三个列表
    2.分配老师到办公室
        2.1 ***随机分配 -- import random 模块
        2.2 把老师的名字写入到办公室列表 -- 办公室列表追加老师名字
    3.验证是否分配成功
        打印每个办公室人数和老师对应名字
"""
import random

# 1.准备数据
teachers = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h']
offices = [[], [], []]

# 2.分配老师到办公室
for name in teachers:
    num = random.randint(0,2) # 产生0-2之间的随机数作为办公室标号
    offices[num].append(name) # 追加老师姓名

# 3.验证是否分配成功
i = 0
for list in offices:
    i += 1
    if list == offices[len(offices)-1]:
        print(f'办公室{i}的人数为:{len(list)},分别是:{list}', end='\n')
        print('分配结束')
    else:
        print(f'办公室{i}的人数为:{len(list)},分别是:{list}', end='\n')


