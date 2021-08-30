"""
    1.ljust():返回一个原字符串左对齐，并使用指定字符(默认空格)填充至对应长度的新字符串
    语法：
        字符串序列.ljust(长度，填充字符),填充后的字符在原字符串右侧
"""

mystr = 'hello'
new_str = mystr.ljust(10)
new1_str = mystr.ljust(10,'.')
print(mystr)
print(new_str)
print(new1_str)