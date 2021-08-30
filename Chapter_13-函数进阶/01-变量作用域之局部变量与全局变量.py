# 1.局部变量：定义在函数体内部的变量，即只在函数体内部生效。
# 作用：在函数体内部，临时保存数据，即当函数调用完成后，则销毁局部变量。
def testA():
    a = 100
    print(a)
testA()
# print(a) # 报错：a不存在。变量a是定义在testA函数内部的变量，在函数外部访问则立即报错.

# 2.全局变量：指的是在函数体内外都能生效的变量。
# 定义全局变量a
a = 100
def testA1():
    print(a) # 访问全局变量a，并打印变量a存储的数据

def testB1():
    print(a) # 访问全局变量a，并打印变量a存储的数据
testA1()
testB1()

# 3.全局变量进阶 -- 利用函数修改全局变量->利用关键字global声明全局变量
b = 100
def testA2():
    print(b)
def testB2():
    b = 200 # 并没有修改全局变量b,而是重新定义了一个局部变量b，值为200
    print(b)
testA2()
testB2()
print(f'全局变量b = {b}')

# global关键字声明全局变量
c = 100
def testC():
    global c # 关键字声明c是全局变量
    c = 200
testC()
print(f'全局变量c = {c}')




