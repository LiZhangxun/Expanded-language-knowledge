# 导出random模块
# randow.randint(开始的数字，结束的数字)
import random
"""
1. 出拳
    玩家：手动输入
    电脑：随机
2. 判断输赢
    玩家获胜:
    平局:
    电脑获胜:
"""
# 1.出拳
# 玩家
player = int(input('请出拳：0--石头；1--剪刀；2--布：'))
# 电脑
computer = random.randint(0, 2)

# 2.判断
if ((player == 0) and (computer == 1)) or ((player == 1) and (computer == 2)) or ((player == 2) and (computer == 0)):
    print("玩家获胜！")
elif player == computer:
    print("平局！")
else:
    print("电脑获胜!")