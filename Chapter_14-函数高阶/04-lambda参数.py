# 1.无参数写法
fn1 = lambda : 100
print(fn1())

# 2.一个参数
fn2 = lambda a : a
print(fn2(1))

# 3.默认参数
fn3 = lambda a, b, c = 100 : a + b + c
print(fn3(10, 20))
print(fn3(10, 20, 30))

# 4.可变参数:*args -- 返回值为元组
fn4 = lambda *args : args
print(fn4(10)) # (10,)
print(fn4(10, 20, 30)) # (10, 20, 30)

# 5.可变参数:**kwargs -- 返回值为字典
fn5 = lambda **kwargs : kwargs
print(fn5(name='python', age = 20)) # {'name': 'python', 'age': 20}
