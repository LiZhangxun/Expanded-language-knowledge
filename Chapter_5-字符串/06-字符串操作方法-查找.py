# 1.find():检测某个子串是否包含在这个字符串中，如果在，则返回这个子串开始的位置下标，否则，则返回-1
# 语法：字符串序列.find(子串，开始位置下标，结束位置下标)
# 注意：开始和结束位置下标可以省略，表示在整个字符串序列中查找
mystr = 'hello world and itcast and itheima and Python'
print(mystr.find('and'))
print(mystr.find('and', 15, 30))
print(mystr.find('ands'))
# rfind():从右侧开始查找
print(mystr.rfind('and')) #但rfind结果仍与find一样，只是查找顺序不一样

# 2.index()：检测某个子串是否包含在这个字符串中，如果在，则返回这个子串开始的位置下标，否则，报错
# 语法：字符串序列.index(子串，开始位置下标，结束位置下标)
# 注意：开始和结束位置下标可以省略，表示在整个字符串序列中查找
print(mystr.index('and'))
print(mystr.index('and', 15, 30))
print(mystr.index('ands')) # 报错
# rindex():从右侧开始查找
print(mystr.rindex('and')) #但rindex结果仍与index一样，只是查找顺序不一样

# 3.count():统计字符串出现次数
# 语法：字符串序列.count(子串，开始位置下标，结束位置下标)
# 注意：开始和结束位置下标可以省略，表示在整个字符串序列中查找
print(mystr.count('and'))
print(mystr.count('and', 15, 30))
print(mystr.count('ands'))
