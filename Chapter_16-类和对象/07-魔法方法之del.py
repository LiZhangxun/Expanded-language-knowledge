"""
    当删除对象时，Python解释器会自动调用__del__()方法,类似于c++中的析构函数
"""

class Washer():
    # 定义_init_，添加实例属性
    def __init__(self):
        # 添加实例属性
        self.width = 500
        self.height = 800

    # 定义_del_方法，当程序结束时，会调用次方法中所有代码
    def __del__(self):
        print(f'{self}对象已经被删除')

# 2.创建对象
haier = Washer()

print('程序结束')


