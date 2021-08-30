"""
for 临时变量 in 序列: (序列是指一个数据里面由多个数据组成)
    重复执行的代码1
    重复执行的代码2
    ......
"""
str1 = 'helloworld'
# i指的是字符串中的某个字符,会自加，直到序列末尾
for i in str1:
    print(i, end=' ')

print('', end='\n')

# 使用break语句退出循环
str2 = 'hellos'
for j in str2:
    if j == 's':
        break
    print(j, end=' ')

print('', end='\n')

# 使用continue语句
str3 = 'helslo'
for k in str3:
    if k == 's':
        continue
    print(k, end=' ')

