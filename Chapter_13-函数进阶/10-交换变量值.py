# 需求:有变量a=10,b=20，交换两个变量的值.
# 方法1：借助第三变量存储数据
a = 10
b = 20
c = 0 # 中间变量
c = a # 将a的值给c
a = b # 将b的数据给a，此时a=20
b = c # 将10赋值给b

# 方法2
a, b = 1, 2
a, b = b, a
print(a)
print(b)
