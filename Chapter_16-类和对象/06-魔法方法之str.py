"""
    当使用print输出对象的时候，默认打印对象的内存地址。
    如果类定义了__str__方法，那么就会从这个方法中return数据
"""

class Washer():
    # 定义_init_，添加实例属性
    def __init__(self):
        # 添加实例属性
        self.width = 500
        self.height = 800
    def print_info(self):
        # 类里面调用实例属性
        print(f'洗衣机的宽度是{self.width}')
        print(f'洗衣机的高度是{self.height}')
    # 定义_str_方法
    def __str__(self):
        return '这是海尔洗衣机的说明书'

# 2.创建对象
haier = Washer()
print(haier) # 这是海尔洗衣机的说明书

# 3.调用实例(对象)方法
haier.print_info()