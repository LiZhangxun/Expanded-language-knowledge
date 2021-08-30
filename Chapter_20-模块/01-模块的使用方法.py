"""
    1.模块类似于c++中的头文件
    2.模块在pycharm 左侧任务栏中选择项目-->外部库-->lib-->各类模块.py文件
    3.导入模块的方式:                                   调用功能的方法:
        (1)import 模块名                                模块名.功能名()
        (2)from 模块名 import 功能名                    功能名
        (3)from 模块名 import *                         功能名
        (4)import 模块名 as 别名                         模块别名.功能名()
        (5)from 模块名 import 功能名 as 别名             功能别名()
"""
# 导入模块方法1
# import 模块名1，模块名2
import math
print(math.sqrt(9))

# 导入模块方法2
# from 模块名 import 功能1，功能2，功能3...
from math import sqrt
print(sqrt(9))
print(math.sqrt(9)) # 会报错，只导入了math模块的sqrt功能

# 导入模块方法3
# from 模块名 import*  --> 导入模块所有代码
from math import *
print(sqrt(9))

# 模块定义别名
# import 模块名 as 别名
import time as tt
tt.sleep(2)

# 功能定义别名
# from 模块名 import 功能名 as 别名
from time import sleep as sl
sl(2)