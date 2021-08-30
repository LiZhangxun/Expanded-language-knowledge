"""
    多继承:一个子类，继承多个父类
    当一个类有多个父类时，默认使用第一个父类的同名属性和方法
"""

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
class Prentice(Master2, Master):
    pass

d = Prentice()
print(d.kongfu) # [配方2]
d.make_cake() # 运用[配方2]制作

