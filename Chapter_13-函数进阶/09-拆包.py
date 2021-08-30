"""
    1.元组拆包：
    2.字典拆包：
"""

# 1.元组拆包
def return_num():
    return 100, 200 # 返回元组数据(100, 200)
num1, num2 = return_num()
print(num1) # 100
print(num2) # 200

# 2.字典拆包
dict1 = {'name': 'Tom', 'age': 18}
a, b =dict1

# 对字典进行拆包，取出来的是字典的KEY
print(a) # name
print(b) # age

# 按key去查找对应的value
print(dict1[a]) # TOM
print(dict1[b]) # 18

# 使用get()方法去获取value
print(dict1.get(a)) # TOM
print(dict1.get(b)) # 18