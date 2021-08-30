"""
    当导入一个模块，Python解释器对模块位置的搜索顺序是:
        1.当前目录
        2.如果不在当前目录，Python则搜索在shell变量PYTHONPATH的每个目录
        3.如果都找不到，Python解释器会查看默认路径。UNIX下，默认路径为/usr/local/lib/python/
        模块搜索路径存储在system模块的sys.path变量中。变量里包含当前目录，PYTHONPATH和由安装过程决定的目录.
    注意：
        1.自己的文件名不要和已有模块重名，否则导致模块功能无法使用
        2.使用from 模块名 import 功能时，如果功能名字重复，调用到的是最后定义或导入的功能.
        3.import 模块名，不需要担心功能名是否重复
"""
import time
print(time)

time = 1
# time.sleep() # 报错:变量名和模块名重复，变量将模块覆盖.
print(time)
