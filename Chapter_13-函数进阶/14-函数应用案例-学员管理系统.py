# 创建列表(全局变量),存储学员信息,每个学员信息都是一个字典，每个字典作为一个数据追加到列表中[{},{},{}....]
info = []

# 1.显示功能界面函数定义
def info_print():
    print('-----请选择功能------')
    print('1.添加学员')
    print('2.删除学员')
    print('3.修改学员')
    print('4.查询学员')
    print('5.显示所有学员')
    print('6.退出系统')
    print('-' * 20)

# 2.添加学员信息函数定义
def add_info():
    """添加学员函数"""
    new_name = input('请输入姓名：')
    new_id = int(input('请输入学号：'))
    new_tel = int(input('请输入手机号：'))

    # 声明全局变量info
    global info

    # 检测用户输入的姓名是否存在，存在，则报错提示
    for i in info: # i是info里面的字典对象
        if new_name == i['name']:
            print('该用户已经存在！')
            while True:
                back_flag = input('请输入回车返回功能界面：')
                if back_flag == '':
                    return
    # 如果用户输入的姓名不存在，则添加学员信息
    info_dict = {}

    # 将用户输入的数据追加到字典
    info_dict['id'] = new_id
    info_dict['name'] = new_name
    info_dict['tel'] = new_tel

    # 将这个学员的字典数据追加到列表
    info.append(info_dict)

    # 界面暂留
    while True:
        back_flag = input('请输入回车返回功能界面：')
        if back_flag == '':
            return

# 3.删除学员函数定义
def del_info():
    """删除学员"""
    # 用户输入要删除的学员的姓名
    del_name = input('请输入要删除的学员的姓名：')

    # 声明全局变量info
    global info

    # 判断学员是否存在：如果输入的姓名存在，则删除，否则报错提示
    for i in info:
        if del_name == i['name']:
            info.remove(i)
            break
    else:
        print('您输入的学员姓名不存在')

    # 界面暂留
    while True:
        back_flag = input('请输入回车返回功能界面：')
        if back_flag == '':
            return

# 4.修改成员函数定义
def modify_info():
    """修改函数"""
    # 1.用户输入要修改的学员的姓名
    modify_name = input('请输入要修改的学员的姓名：')

    # 定义全局变量info
    global info

    # 判断学员是否存在，如果输入的姓名存在，则修改手机号，否则报错提示
    for i in info:
        if modify_name == i['name']:
            i['tel'] = int(input('请输入新的手机号：'))
            break
    else:
        print('该学员不存在')

    # 界面暂留
    while True:
        back_flag = input('请输入回车返回功能界面：')
        if back_flag == '':
            return

# 5.查询学员函数定义
def search_info():
    """查询学员函数"""
    # 1.输入要查找的学员的姓名
    search_name = input('请输入要查找的学员姓名：')

    # 定义全局变量info
    global info

    # 2.判断学员是否存在
    for i in info:
        if search_name == i['name']:
            print('------查找到的学员信息如下-----')
            print(f"该学员的学号是{i['id']}, 姓名是{i['name']}, 手机号是{i['tel']}")
            break
    else:
        print('该学员不存在')

    # 界面暂留
    while True:
        back_flag = input('请输入回车返回功能界面：')
        if back_flag == '':
            return

# 6.显示所有学员信息函数定义
def print_all():
    """显示所有学员信息"""
    print('学号 \t 姓名 \t 手机号')
    for i in info:
        print(f"{i['id']} \t {i['name']} \t {i['tel']}")

    # 界面暂留
    while True:
        back_flag = input('请输入回车返回功能界面：')
        if back_flag == '':
            return

# 系统功能需要循环使用，直到用户输入6，才退出系统
while True:
    info_print()
    # (1).用户输入功能序号
    user_num = int(input('请输入功能序号:'))
    # (2).按照用户输入的功能序号，执行不同的功能(函数)
    if user_num == 1:
        add_info() # 调用函数
    elif user_num == 2:
        del_info()
    elif user_num == 3:
        modify_info()
    elif user_num == 4:
        search_info()
    elif user_num == 5:
        print_all()
    elif user_num == 6:
        exit_flag = input('确定要退出吗？yes or no:')
        if exit_flag == 'yes':
            break
    else:
        print('请输入1-6之间的数字！')
