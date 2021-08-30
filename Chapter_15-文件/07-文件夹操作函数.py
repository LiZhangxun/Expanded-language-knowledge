# 1.创建文件夹函数mkdir(文件夹名字)
import os
os.mkdir('aa')

# 2.删除文件夹函数rmdir(文件夹名字)
os.rmdir('aa')

# 3.获取当前目录函数getcwd() -- 返回当前文件所在路径
os.getcwd()

# 4.改变默认目录函数chdir(目录) -- 改变默认目录路径
os.chdir()

# 5.获取目录列表函数listdir(目录) -- 获取某个文件夹下所有文件，返回一个列表
os.listdir()

# 6.文件夹重命名函数rename(目标文件名，新文件名)
os.rename('aa', 'bb')

# 7.删除文件夹函数remove(目标文件名)
os.remove('aa')
