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

str1 = 'hello'
# i指的是字符串中的某个字符,会自加，直到序列末尾
for i in str1:
    print(i, end=' ')
else:
    print('!', end='\n')

# 使用break语句退出循环,break语句会导致循环非正常结束,else下方代码不执行
str2 = 'hellos'
for j in str2:
    if j == 's':
        break
    print(j, end=' ')
else:
    print('!', end='\n')

# 使用continue语句,continue语句使循环正常结束,else下方代码执行
str3 = 'helslo'
for k in str3:
    if k == 's':
        continue
    print(k, end=' ')
else:
    print('!', end='\n')