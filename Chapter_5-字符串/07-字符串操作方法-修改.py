"""
    replace():修改字符串中的数据
    用法：
        字符串序列.replace(旧子串，新子串，替换次数)
    注意：
        1.替换次数如果超出子串出现次数，则替换次数为该子串出现次数
        2.替换次数如果不写，默认代表全部替换
        3.replace()函数不会修改原有函数，而它的返回值是修改后的函数
        4.替换顺序从左往右进行替换
"""
mystr = 'hello world and itcast and itheima and Python'

# repalce() 返回值是修改后的字符串，并不会改变原有字符串
# 说明字符串是不可变数据类型
new_str = mystr.replace('and', 'he')
print(mystr)
print(new_str)

# 2.split():分割，返回一个列表,分割之后丢失分割字符
# 字符串序列.split(分割字符，num)num指分割次数
list1 = mystr.split('and') # ['hello world ', ' itcast ', ' itheima ', ' Python']
list1 = mystr.split('and', 2) # ['hello world ', ' itcast ', ' itheima and Python']
print(list1)

# 3.join():合并列表里面的字符串数据为一个大字符串
# 字符或子串.join(多字符串组成的序列)
mylist = ['aa', 'bb', 'cc']
new_mystr = ''.join(mylist)
print(new_mystr)

