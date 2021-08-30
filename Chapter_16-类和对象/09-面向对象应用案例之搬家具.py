# 家具类
class Furniture():
    def __init__(self, name, area):
        # 家具名字
        self.name = name
        # 家具占地面积
        self.area = area
# 房子类
class Home():
    def __init__(self, address, area):
        # 地理位置
        self.address = address
        # 房屋面积
        self.area = area
        # 剩余面积
        self.free_area = area
        # 家具列表
        self.furniture = []

    def __str__(self):
        return f'房子坐落于{self.address}, 占地面积为{self.area}, 剩余面积为{self.free_area}, 家具有{self.furniture}'

    # 一个类的对象作为参数
    def add_furniture(self, item):
        """容纳家具"""
        if self.free_area >= item.area:
            self.furniture.append(item.name)
            # 家具搬入后，房屋剩余面积=之前剩余面积-家具面积
            self.free_area -= item.area
        else:
            print('家具太大，剩余面积不足，无法容纳')

# 双人床
bed = Furniture('双人床', 6)
sofa = Furniture('沙发', 10)

# 房子
home = Home('北京', 1000)
print(home)

# 传入另一个对象bed
home.add_furniture(bed)
print(home)

ball = Furniture('篮球场', 2000)
home.add_furniture(ball)