# 1.创建一个类
class Washer():
    # 定义一个方法
    def wash(self):
        print('洗衣服')

# 2.创建对象
haier = Washer()

# 3.在类外为对象添加属性(对象名.属性名)
haier.width = 100
haier.height = 500

# 4.在类外获取对象属性(对象名.属性名)
print(f'洗衣机的宽度是{haier.width}')
print(f'洗衣机的高度是{haier.height}')


