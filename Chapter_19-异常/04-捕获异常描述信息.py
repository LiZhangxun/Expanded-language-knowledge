# 将错误的具体信息进行捕获，并且放到result中
try:
    print(num)
except (NameError, ZeroDivisionError) as result:
    print(result)
