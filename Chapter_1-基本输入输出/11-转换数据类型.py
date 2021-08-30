"""
1. input
2. 检测input的数据类型
3. 用int() 转换数据类型
4. 检测是否转换成功
"""
num = input("请输入数字：")
print(num)
print(type(num)) # str
print(type(int(num))) # int
