"""
打印星号:三角形
*
**
***
****
*****
"""

j = 1
while j <= 5:
    i = 1
    while i <= j:
        print('*', end='')
        i += 1
    print('', end='\n')
    j += 1