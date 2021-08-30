"""
1. lstrip():删除字符串左侧空白字符 -->不改变原字符串,返回值是修改后的字符串
2. rstrip():删除字符串右侧空白字符 -->不改变原字符串,返回值是修改后的字符串
3. strip():删除字符串两侧空白字符 -->不改变原字符串,返回值是修改后的字符串
"""

mystr = '   hello world and itcast and itheima and Python   !'
new1_mystr = mystr.lstrip()
new2_mystr = mystr.rstrip()
new3_mystr = mystr.strip()
print(new1_mystr)
print(new2_mystr)
print(new3_mystr)
print(mystr)