# 提取字典中目标数据
counts = {'MBP': 268, 'HP': 125, 'DELL': 201, 'acer': 99}

# 需求：提取上述电脑数量大于等于200的字典数据
count1 = {key: value for key, value in counts.items() if value >= 200}
print(count1)