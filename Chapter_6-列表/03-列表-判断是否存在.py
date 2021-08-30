"""
    1.in():判断指定数据是否在某个列表序列，如果在则返回True，否则返回False
    2.not in():判断数据不在某个列表序列，如果不在返回True，否则返回False
"""
name_list = ['Tom', 'Lily', 'Rose']
stu_num = [1, 2, 3]
print('Lily' in name_list)
print('asda' not in name_list)
print(0 in stu_num)
print(4 not in stu_num)

# 查找用户输入的名字是否已经存在
name = ['Tom', 'Lily', 'Rose']
name_input = input('请输入您的用户名:')
while True:
    if name_input in name_list:
        print(f'您输入的用户名{name_input}已经存在，请重新输入:', end='')
        name_input = input('')
    else:
        print('用户名输入成功')
        break
