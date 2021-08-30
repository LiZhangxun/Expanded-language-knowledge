"""
    Python面向对象的继承指的是多个类之间的所属关系，即子类默认继承父类所有属性和方法。
    object类是顶级类或基类，其它子类叫做派生类.
"""

# 父类A
class A(object): # 默认继承object大类
    def __init__(self):
        self.num = 1

    def info_print(self):
        print(self.num)

# 子类B
class B(A): # 继承父类A
    pass

# 创建一个子类
result = B()

# 子类可调用父类的方法与属性
result.info_print() # 1
