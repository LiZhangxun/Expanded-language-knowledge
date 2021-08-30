# .....................字符串是不可变数据类型...............
# 单引号字符串
a = 'hello world'
# 双引号字符串
b = "hello"
# 单引号双引号均为str类型
print(type(a))
print(type(b))

# 三引号字符串,三引号字符串可以回车换行，并且输出里面也会带回车换行
c = """I AM TOM!"""
d = '''i am tom!'''
e = """ab
c"""
# 三引号仍然为str类型
print(type(c))
print(type(d))
print(e)

# 输出 I'm TOM
f = "I'm TOM"
# f = ' I'm TOM ' 这种写法不行×
# 使用转义字符可以避免符号冲突
g = 'I\'m TOM'
print(f)
print(g)

