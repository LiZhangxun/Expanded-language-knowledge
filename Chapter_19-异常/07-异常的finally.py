"""
    try:
        必须执行的代码
    except Exception as result:
        捕获到异常后执行的代码
    else:
        没有异常执行的代码
    finally:
        无论异常与否都执行的代码
"""
try:
    print('不知道有没有异常')
except Exception as result:
    print(result)
else:
    print('没有异常执行的代码')
finally:
    print('怎样都执行的代码')
