import matplotlib.pyplot as plt
import matplotlib.ticker as tik
import seaborn as sns
import numpy as np

from matplotlib.colors import ListedColormap, LinearSegmentedColormap

current_address = "."
#### import data
# get size
ldstforward_file = current_address+"/res/log/ldstforward.res"

line_num = len(open(ldstforward_file,"r").readlines())
column_num = 0
with open(ldstforward_file,"r") as f:
    content = f.readline()
    column_num = content.count(",")
f.close()

# get data
ld_lat = np.zeros((column_num, line_num), dtype=float)
cur_line = 0
with open(ldstforward_file,"r") as f:
    line = f.readline().strip("\n")
    while line:
        tmp = line.split(",")
        for i in range(0,column_num):
            ld_lat[i][cur_line] = round(float(tmp[i]),2)
        cur_line = cur_line + 1
        line = f.readline().strip("\n")
f.close()

# plt.rcParams['font.sans-serif'] = ['SimHei']  # 用来正常显示中文标签
plt.rcParams['axes.unicode_minus'] = False 

#设定画布大小
# plt.style.use('bmh')
# plt.style.use('ggplot')

fig,ax = plt.subplots(figsize=(32,32))

#添加标题
plt.xlabel('Load Address Offset')
plt.ylabel('Store Address Offset')
plt.title('Store-to-load Forward Latency')

#坐标轴重新赋值
# xticks = [pow(2, i) for i in range(20)]
# plt.xticks(xticks)
# ax = plt.axes()
# plt.box(False)
# plt.grid()

# color_list = ["#2C4150","#6Fa0ac","#b5d3d9","#fceee2","#5d887b"]
color_list = ["#705992","#a97399","#d68294","#f3bfca","#291f27"]

colors = ["orangered", "gold", "mediumseagreen"]
# colors = ["orangered", "gold", "seagreen"]
cmap1 = LinearSegmentedColormap.from_list("mycmap", colors)

# sns.set_context('paper')
# cmap = plt.cm.get_cmap('RdYlGn')

ax = sns.heatmap(ld_lat.T,
            cmap = cmap1.reversed(),
            # cmap = "RdYlGn_r",
            #vmax = 3,
            linewidths=0.2,
            annot = True,
            cbar = False)

# ax.tick_params(labeltop=True)

plt.savefig(current_address+"/res/ldstforward.jpg",
            dpi=150,bbox_inches = 'tight')
