"""
    私有属性和方法：
        (1)继承时，不想继承给子类，就可设置私有权限.
        (2)父类的对象也不能直接访问私有属性和私有方法
        (3)父类的对象访问方法:对象._父类名__函数名(),对象._父类名__私有属性名,去访问私有方法和私有属性
    设置私有权限的方法：
        在属性名和方法名前面：加上两个下划线: __
"""

# 1.师傅类
class Master(object):
    def __init__(self):
        self.kongfu = '[配方]'

    def make_cake(self):
        # print(f'运用{self.kongfu}制作')
        pass

# 2.师傅2类
class Master2(object):
    def __init__(self):
        self.kongfu = '[配方2]'

    def make_cake(self):
        # print(f'运用{self.kongfu}制作')
        pass

# 3.徒弟类
class Prentice(Master, Master2):
    # 添加和父类同名的属性和方法
    def __init__(self):
        self.kongfu = '[自己的配方]'
        # 定义私有属性
        self.__money = 200000

    # 定义为私有方法
    def __info_print(self):
        print(self.kongfu)
        print(self.__money)

    # 获取私有属性
    def get_money(self):
        return self.__money

    # 修改私有属性
    def set_money(self, money):
        self.__money = money

# 4.徒孙类
class Tusun(Prentice):
    pass

d = Prentice()
# 对象也不能访问私有属性和私有方法
# print(d.money)
# print(d.__money)
# d.info_print()
# d.__info_print()

xd = Tusun()
# 子类无法继承父类的私有属性和私有方法
# print(xd.money)
# print(xd.__money)
# xd.info_print()
# xd.__info_print()

# 采用方法去修改私有属性
xd.set_money(10)
print(xd.get_money())

# 对象._父类名__函数名() 去访问私有方法和私有属性
xd._Prentice__info_print()
print(xd._Prentice__money)