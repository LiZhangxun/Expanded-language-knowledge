# 需求：1-100数字累加和 -- 1+2+3+4...+100 = 结果，打印结果

num = 1
num_sum = 0
while num < 101:
    num += 1
    num_sum += num
print(f'1-100的累加和为:{num_sum}')
