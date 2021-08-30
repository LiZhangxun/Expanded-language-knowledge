# 1.创建一个类
class Washer():
    # 定义一个方法
    # self实际上就是调用该函数的对象,实际上类似于c++中的this指针
    def wash(self):
        print('洗衣服')
        print(self) # <__main__.Washer object at 0x000001DCE6C521C0> --> haier1的内存地址
                    # <__main__.Washer object at 0x000001FAB84C24F0> --> haier2的内存地址

# 2.创建对象
haier1 = Washer() # 创建haier1对象
haier2 = Washer() # 创建haier2对象

print(haier1) # <__main__.Washer object at 0x000001DCE6C521C0> --> haier1的内存地址
print(haier2) # <__main__.Washer object at 0x000001FAB84C24F0> --> haier2的内存地址

# 3.调用实例(对象)方法
haier1.wash()
haier2.wash()
