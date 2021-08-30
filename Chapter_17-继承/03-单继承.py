"""
    单继承:一个子类，只有一个父类
"""

# 1.师傅类
class Master(object):
    def __init__(self):
        self.kongfu = '[配方]'

    def make_cake(self):
        print(f'运用{self.kongfu}制作')

# 2.徒弟类
class Prentice(Master):
    pass

# 3.创建对象d
d = Prentice()

# 4.对象访问实例属性
print(d.kongfu)