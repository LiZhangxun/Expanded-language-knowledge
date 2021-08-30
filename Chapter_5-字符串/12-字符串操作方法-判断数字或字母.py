"""
    1.isalpha():如果字符串至少有一个字符并且所有字符都是字母则返回True,否则返回False
    2.isdigit():如果字符串只包含数字则返回True，否则返回False
    3.isalnum():如果字符串至少有一个字符并且所有字符都是字母或数字则返回True,否则返回False
    4.isspace():如果字符串至少有一个字符并且所有字符都是空白则返回True,否则返回False
"""

mystr1 = 'hello'
mystr2 = 'hello12345'
mystr3 = '12345'
mystr4 = 'abc123'
mystr5 = 'abc123-'
mystr6 = '1 2 3'
mystr7 = '     '

# 判断字母
print(mystr1.isalpha())
print(mystr2.isalpha())

print('..............')

# 判断数字
print(mystr2.isdigit())
print(mystr3.isdigit())

print('..............')

# 判断是否全字母或数字
print(mystr4.isalnum())
print(mystr5.isalnum())

print('..............')

# 判断空白
print(mystr6.isspace())
print(mystr7.isspace())