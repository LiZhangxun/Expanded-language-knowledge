age = 18
name = 'TOM'
weight = 75.5

# 我的名字是x，今年x岁了
print("我的名字是%s，今年%d岁了" % (name, age))

# 语法 f'{表达式}' -- 更高效
print(f'我的名字是{name}，今年{age}岁了')
print(f'我的名字是{name}，明年{age+1}岁了')
print(f'我的名字是{name}，体重为{weight:.2f}公斤')