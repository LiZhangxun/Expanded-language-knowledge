"""
while 条件1:
    条件1成立的代码
    ......
    while 条件2:
        条件2成立的代码
        .....
"""

j = 1
while j <= 3:
    i = 0
    print(f'第{j}天:', end="")
    while i < 3:
        print('媳妇我错了!', end="\t")
        i += 1
    print('刷碗去!', end='\n')
    print(f'第{j}天愉快的结束了......')
    j += 1
