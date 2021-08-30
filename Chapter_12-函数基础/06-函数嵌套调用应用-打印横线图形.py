# 1.打印1条横线
def print_line():
    print('-' * 20)

# 2.打印多条横线
def print_lines(num):
    for i in range(1, num+1, 1): # 由于range(start,end,step)中，end处无法取到，故需要num+1
        print(f'第{i}行:', end='')
        print_line()

# 调用函数
print_lines(5)
