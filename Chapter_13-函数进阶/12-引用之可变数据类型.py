# 1.列表为可变数据类型
aa = [10, 20]
bb = aa

print(id(aa)) # 2523496267520
print(id(bb)) # 2523496267520

aa.append(30)
print(bb) # [10,20,30]

print(id(aa)) # 2523496267520
print(id(bb)) # 2523496267520
