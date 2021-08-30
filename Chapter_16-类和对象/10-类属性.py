"""
    1.类属性就是类对象所拥有的属性，它被该类的所有实例对象所共有
    2.类属性可以使用类对象或实例对象访问
    3.类属性只能通过类对象去修改，而不能通过实例对象去修改(此操作相当于创建实例属性)
"""

class Dog(object):
    # 定义类属性
    tooth = 10

dog1 = Dog()
dog2 = Dog()

# 通过类去访问类属性
print(Dog.tooth)

# 通过实例去访问类属性
print(dog1.tooth)
print(dog2.tooth)

# 通过类去修改类属性
Dog.tooth = 100
print(Dog.tooth)