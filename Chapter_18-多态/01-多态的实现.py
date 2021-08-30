"""
    一个类有多个子类，因而多态的概念依赖于继承.
    定义：多态是一种使用对象的方式，子类重写父类方法，调用不同子类对象的相同父类方法，可以产生不同结果
    实现步骤：
        (1)定义父类，并提供公共方法
        (2)定义子类，并重写父类方法
        (3)传递子类对象给调用者，可以看到不同子类执行效果不同
"""

class Dog(object):
    # 父类提供统一的方法，哪怕是空方法
    def work(self):
        pass

# 继承Dog类
class ArmyDog(Dog):
    def work(self): # 子类重写父类同名方法
        print('追击敌人')

# 继承Dog类
class DrugDog(Dog):
    def work(self): # 子类重写父类同名方法
        print('追查毒品')

class Person(object):
    def work_with_dog(self, dog): # 传入不同的对象，执行不同的代码，即不同的work函数
        dog.work()

ad = ArmyDog()
dd = DrugDog()

lzx = Person()
# 将对象作为参数传入
lzx.work_with_dog(ad) # 追击敌人
lzx.work_with_dog(dd) # 追查毒品
