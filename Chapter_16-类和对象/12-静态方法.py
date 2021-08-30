"""
    静态方法特点:
        (1)需要通过装饰器@staticmethod来进行修饰；
        (2)静态方法既不需要传递类对象，也不需要传递实例对象(形参没有cls/self)
        (3)静态方法可以通过实例对象和类对象去访问
"""

class Dog(object):

    # 定义静态方法
    @staticmethod
    def info_print():
        print('这是一个狗类')

dd = Dog()
# 静态方法使用实例对象访问
dd.info_print()
# 静态方法使用类对象访问
Dog.info_print()