"""
1.在python中，print()默认自带的end="\n"这个换行结束符，所以导致每两个print直接会换行展示，可以自行更改结束符.
2.print("输出内容", end="\n")
3.end结束符可以自己更改为任意符号，不一定是转义字符\n,\t等
"""
print("hello", end="\n")
print("world", end="\t")
print("hello", end="...")
print("Python")