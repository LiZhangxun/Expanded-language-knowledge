def test1(a):
    print(a)
    print(id(a))
    a += a
    print(a)
    print(id(a))

# int:计算前后id值不同 --> 整型是可变数据类型
b = 100
# 直接调用时，形式为test1(100)
# 将数据的引用作为实参传入函数
test1(b)

# 列表:计算前后id值相同 --> 列表是不可变数据类型
c = [10, 20]
# 将数据的引用作为实参传入函数
test1(c)
