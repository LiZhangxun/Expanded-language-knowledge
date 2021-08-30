"""
    步骤：
        1.接收用户输入的文件名
        2.规划备份文件名
        3.备份文件写入数据
"""

# 1.接收用户输入目标文件名
old_name = input('请输入您需要备份的文件名:')

# 2.规划备份文件名
# 2.1提取目标文件后缀
index = old_name.rfind('.') # 找到小数点.的下标,最右侧的.才是后缀的.，所以得用rfind()函数，从右开始查找

# 需要让小数.位置不在开头，否则输入文件名是无效的
if index > 0:
    postfix = old_name[index:]

# 2.2组织备份的文件名，xx[备份]后缀
new_name = old_name[:index] + '[备份]' + postfix # 切片[开始：结束：步长]

# 3.备份文件写入数据
# 3.1打开源文件和备份文件
old_f = open(old_name, 'rb')
new_f = open(new_name, 'wb')

# 3.2将源文件数据写入备份文件
# 如果不确定目标文件大小，循环读取写入，当读取出来的数据没有了，终止循环
while True:
    con = old_f.read(1024)
    if len(con) == 0 :
        # 如果读取出的数据长度为0，则读取完成
        break
    new_f.write(con)

# 3.3关闭文件
old_f.close()
new_f.close()