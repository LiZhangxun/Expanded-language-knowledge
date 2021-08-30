# 函数定义
def testB():
    print('--- testB start ---')
    print('--- testB执行代码 ---')
    print('--- testB end ---')
def testA():
    print('--- testA start ---')
    testB() # 函数嵌套调用
    print('--- testA end ---')

# 函数调用
testA()
