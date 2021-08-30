"""
    try代码一定会先执行；
    如果有异常，则执行except里的代码而不执行else里的代码
    如果没有异常，则执行else的代码而不执行except里的代码
"""

try:
    print('不知道有没有异常')
except Exception as result:
    print(result)
else:
    print('没有异常执行的代码')