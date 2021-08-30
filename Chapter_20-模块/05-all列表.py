"""
    如果一个模块文件有__all__变量，当使用from xxx import *导入时，只能导入这个列表中的元素
"""
from my_module2 import *
testA()
testB() # 报错，提示不存在