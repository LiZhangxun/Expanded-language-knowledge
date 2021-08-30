name_list = ['Tom', 'Lily', 'Rose']
# 使用while循环，并借助len()函数
i = 0
while i < len(name_list):
    print(name_list[i], end='.')
    i += 1

print('', end='\n')

# 使用for循环(1)
k = 0
for j in name_list:
    print(name_list[k], end='.')
    k += 1

print('', end='\n')

# 使用for循环(2)
for m in name_list:
    print(m, end='.')
