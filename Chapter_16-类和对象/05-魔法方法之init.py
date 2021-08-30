"""
    在Python中，__xx__() --> (两个下划线)的函数叫做魔法方法，具有特殊功能的函数.
        1.__init__()方法在创建对象时自动被调用，不需要手动调用(相当于c++中的构造函数)
        2.__init__(self)方法中的self参数不需要开发者传递，Python解释器自动把当前对象的引用传递过去。
        3.__init__()方法的作用：初始化对象
"""

# 不带参数的_init_()
class Washer():
    # 定义_init_，添加实例属性
    def __init__(self):
        # 添加实例属性
        self.width = 500
        self.height = 800
    def print_info(self):
        # 类里面调用实例属性
        print(f'洗衣机的宽度是{self.width}')
        print(f'洗衣机的高度是{self.height}')

# 2.创建对象
haier = Washer()

# 3.调用实例(对象)方法
haier.print_info()

# 带参数的_init()_
class Washer1():
    # 定义_init_，添加实例属性
    def __init__(self, width1, height1):
        # 添加实例属性，将传入的参数传给对应属性
        self.width1 = width1
        self.height1 = height1

    def print_info(self):
        # 类里面调用实例属性
        print(f'洗衣机的宽度是{self.width1}')
        print(f'洗衣机的高度是{self.height1}')

# 2.创建对象
haier1 = Washer1(10, 20)
haier2 = Washer1(20, 30)

# 3.调用实例(对象)方法
haier1.print_info()
haier2.print_info()