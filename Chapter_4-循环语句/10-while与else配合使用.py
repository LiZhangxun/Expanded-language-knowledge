"""
while 条件:
    条件成立执行的代码1
    条件成立执行的代码2
    ......
else:(循环正常结束后执行，如果没有正常结束，则不执行)
    代码1
    代码2
    ......
"""

i = 1
while i <= 5:
    print('我错了', end=' ')
    i += 1
else:
    print('ok')

# 与break语句配合使用,break语句会导致循环非正常结束,else下方代码不执行
j = 1
while j <= 5:
    if j == 3:
        print('这不行')
        break
    print('我错了', end=' ')
    j += 1
else:
    print('ok了')

# 与continue语句配合使用,continue语句使循环正常结束,else下方代码执行
k = 1
while k <= 5:
    if k == 3:
        print('这不行', end=' ')
        # 手动增加变量，否则卡死
        k += 1
        continue
    print('我错了', end=' ')
    k += 1
else:
    print('ok了')
