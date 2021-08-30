# 1.师傅类
class Master(object):
    def __init__(self):
        self.kongfu = '[配方]'

    def make_cake(self):
        print(f'运用{self.kongfu}制作')

# 2.师傅2类
class Master2(object):
    def __init__(self):
        self.kongfu = '[配方2]'

    def make_cake(self):
        print(f'运用{self.kongfu}制作')

# 3.徒弟类
class Prentice(Master, Master2):
    # 添加和父类同名的属性和方法
    def __init__(self):
        self.kongfu = '[自己的配方]'

    def make_cake(self):
        print(f'运用{self.kongfu}制作')

# 子类和父类具有同名属性和方法，默认使用子类的同名属性和方法
d = Prentice()
print(d.kongfu) # [自己的配方]
d.make_cake() # 运用[自己的配方]制作

print(Master.__mro__) # 查询当前类所继承的父类以及之间的层级关系