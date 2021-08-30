# 需求：1-100数字中偶数累加和 -- 2+4+6+...+100 = 结果，打印结果

# 方法一：采用条件语句判断偶数
num = 1
num_sum = 0
while num <= 100:
    # 保证num为偶数时才加
    if num % 2 == 0:
        num_sum += num
    num += 1
print(f'1-100的偶数累加和为:{num_sum}')

# 方法二：采用计数器控制增量为2
i = 0
result = 0
while i <= 100:
    result += i
    i += 2
print(f'1-100的偶数累加和为:{result}')