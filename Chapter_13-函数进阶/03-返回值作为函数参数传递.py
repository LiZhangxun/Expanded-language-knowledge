def test1():
    return 50

def test2(num):
    print(num)

# 将函数test1()的返回值作为参数传递给test2()函数
test2(test1())
