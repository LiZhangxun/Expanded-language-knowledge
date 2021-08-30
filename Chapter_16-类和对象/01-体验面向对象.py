"""
    面向对象的三大特性：
        (1)封装：类和对象
        (2)继承：子类继承父类
        (3)多态：传入不同的对象，产生不同结果
"""

# 1.创建一个类
class Washer():
    # 定义一个方法
    # self实际上就是调用该函数的对象,实际上类似于c++中的this指针
    def wash(self):
        print('洗衣服')
        print(self) # <__main__.Washer object at 0x000001DCE6C521C0>

# 2.创建对象
haier = Washer()
print(haier) # <__main__.Washer object at 0x000001DCE6C521C0>

# 3.调用实例(对象)方法
haier.wash()


