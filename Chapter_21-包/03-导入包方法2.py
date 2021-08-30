"""
    导入方法2：
        from 包名 import *  --> 从包当中导入所有模块
    调用方法:
        模块名.目标
    注意事项:
        此方法必须在__init__.py文件中添加all列表，列表中添加的是允许导入的模块
"""
from mypackage import *

my_module1.info_print1()
my_module2.info_print2()