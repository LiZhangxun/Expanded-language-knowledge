"""
    (1)类方法需要用装饰器@classmethood来标识其为类方法，对于类方法，第一个参数必须为类对象，一般以cls作为第一个参数.
    (2)类方法使用场景:
        当方法中需要使用类对象(如访问私有类属性等)时，定义类方法
    (3)静态方法可以通过实例对象和类对象去访问
"""

class Dog(object):
    # 定义私有类属性
    __tooth = 10

    # 定义类方法
    @classmethod
    def get_tooth(cls):
        return cls.__tooth # 返回私有类属性

dd = Dog()

# 访问私有类属性
print(dd.get_tooth()) # 10
print(Dog.get_tooth())