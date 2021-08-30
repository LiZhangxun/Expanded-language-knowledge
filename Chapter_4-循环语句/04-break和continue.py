i = 1
while i <= 5:
    if i == 4:
        print('吃饱了不吃了')
        break
    print(f'吃了第{i}个苹果')
    i += 1

j = 1
while j <= 5:
    if j == 3:
        print('吃到了虫子')
        # 在此处必须提前修改j的值，否则会进入死循环
        j += 1
        continue
    print(f'吃了第{j}个苹果')
    j += 1
