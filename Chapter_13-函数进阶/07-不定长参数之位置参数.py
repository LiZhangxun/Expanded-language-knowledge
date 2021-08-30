"""
    1.不定长参数也叫可变参数。用于不确定调用的时候会传递多少个参数的场景(不传参也可以)。
    2.此时可用包裹(packing)位置参数，或者包裹关键字参数，来进行参数传递，会显得非常方便.
    3.传进的所有参数都会被args变量收集，它会根据传进参数的位置合并成为一个元组(tuple)
"""

# 1.包裹位置传递
def user_info(*args):
    print(args)
    print(type(args))

user_info('TOM') # ('TOM',)
user_info('TOM', 18) # ('TOM', 18)
user_info() # ()

