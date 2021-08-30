# 1.师傅类
class Master(object):
    def __init__(self):
        self.kongfu = '[配方]'

    def make_cake(self):
        print(f'运用{self.kongfu}制作')

# 2.师傅2类
class Master2(Master):
    def __init__(self):
        self.kongfu = '[配方2]'

    def make_cake(self):
        print(f'运用{self.kongfu}制作')

# 3.徒弟类
class Prentice(Master2):
    # 添加和父类同名的属性和方法
    def __init__(self):
        self.kongfu = '[自己的配方]'

    def make_cake(self):
        # 如果是先调用了父类的属性和方法，父类属性会覆盖子类属性，故在调用属性前，需要调用自己的子类的初始化
        self.__init__()
        print(f'运用{self.kongfu}制作')

    # 子类调用父类方法，但是为了保证调用到的也是父类的属性，必须在调用方法前调用父类的初始化.
    def make_master_cake(self):
        Master.__init__(self) # 如果不初始化，则会因为下面先调用了子类属性，再调用父类，导致父类属性被子类覆盖
        Master.make_cake(self) # 如果不写参数self,则会报错

    def make_master2_cake(self):
        Master2.__init__(self)
        Master2.make_cake(self)

    # 调用父类 --> 使用方法super() --> 适合单继承使用
    def make_old_cake(self):
        # super(当前类名，self).函数() --> 带参数写法
        # super().函数() --> 无参数写法
        super(Prentice, self).__init__()
        super(Prentice, self).make_cake() # 调用到Master2的方法
        super().__init__()
        super().make_cake() # 调用到Master2的方法

d = Prentice()

d.make_old_cake() # 运用[自己的配方]制作
