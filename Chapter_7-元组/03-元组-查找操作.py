"""
    1.按下标查找数据
    2.index():查找某个数据，如果数据存在则返回对应下标，否则报错
    3.count():统计某个数据出现次数
    4.len():统计元组长度
"""
t1 = ('aa', 'bb', 'cc', 'dd')

# 1.下标
print(t1[0])

# 2.index()
print(t1.index('aa'))

# 3.count()
print(t1.count('bb'))

# 4.len()
print(len(t1))