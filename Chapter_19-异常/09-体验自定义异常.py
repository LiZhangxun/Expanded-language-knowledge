"""
    自定义异常就是用来报错，并不是语法错误，而是程序员定义的逻辑错误.
"""

# 需求：密码长度不足，则报异常(用户输入密码，如果输入的长度不足3位，则抛出自定义异常，并捕获该异常)

# 定义异常类,继承Exception
class ShortInputError(Exception):
    def __init__(self, length, min_len):
        self.length = length
        self.min_len = min_len

    # 设置抛出异常的描述信息
    def __str__(self):
        return f'你输入的长度是{self.length}, 不能少于{self.min_len}个字符'
# 主函数
def main():
    while True:
        try:
            con = input('请输入密码:')
            if len(con) < 3:
                # 使用raise关键字抛出自定义异常类 --> raise 异常类名()
                raise ShortInputError(len(con), 3)
        # 捕获异常
        except Exception as result:
            print(result)
            continue
        # 无异常时执行
        else:
            print('密码输入完成')
            break

# 调用main()函数
main()