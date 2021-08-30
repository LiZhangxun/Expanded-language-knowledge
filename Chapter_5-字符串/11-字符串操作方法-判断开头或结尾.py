"""
    1.startswith():检查字符串是否以指定子串开头，是则返回True，否则返回False。如果设置开始和结束下标，则在指定范围内检查。
    语法：
        字符串序列.startswith(子串，开始位置下标，结束位置下标)
    2.endswith():检查字符串是否以指定子串结尾，是则返回True，否则返回False。如果设置开始和结束下标，则在指定范围内检查。
"""
mystr = 'hello world and itcast and itheima and Python'
# 从字符串开头开始与子串进行比较
print(mystr.startswith('hello'))
print(mystr.startswith('hello '))
print(mystr.startswith('hel'))
print(mystr.startswith('hels'))

print('......................')
# 从字符串结尾开始与子串进行比较
print(mystr.endswith('Python'))
print(mystr.endswith(' Python'))
print(mystr.endswith('ython'))
print(mystr.endswith('python'))