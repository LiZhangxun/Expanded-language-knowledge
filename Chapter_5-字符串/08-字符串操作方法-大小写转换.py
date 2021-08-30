"""
1. capitalize():将字符串第一个字符转换成大写 -->不改变原字符串,返回值是修改后的字符串
2. title():将字符串每个单词首字母转换成大写 -->不改变原字符串,返回值是修改后的字符串
3. lower():将字符串中大写全部转小写 -->不改变原字符串,返回值是修改后的字符串
4. upper():将字符串中小写全部转大写 -->不改变原字符串,返回值是修改后的字符串
"""
mystr = 'hello world and itcast and itheima and Python'
new1_mystr = mystr.capitalize()
new2_mystr = mystr.title()
new3_mystr = mystr.lower()
new4_mystr = mystr.upper()
print(new1_mystr)
print(new2_mystr)
print(new3_mystr)
print(new4_mystr)
print(mystr)


