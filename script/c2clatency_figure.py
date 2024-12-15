import matplotlib.pyplot as plt
import matplotlib as mpl
import matplotlib.ticker as tik
import seaborn as sns
import numpy as np

from matplotlib.colors import ListedColormap, LinearSegmentedColormap

current_address = "."
#### import data
# get size
ldstforward_file = current_address+"/res/log/c2clatency.res"

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
            ld_lat[i][cur_line] = float(tmp[i])
        cur_line = cur_line + 1
        line = f.readline().strip("\n")
f.close()

# ld_lat_new = np.zeros((column_num, line_num), dtype=float)
# for i in range(0,16):
#     for j in range(0,16):
#         ld_lat_new[2*i,2*j] = ld_lat[i,j]
#         ld_lat_new[2*i,2*j+1] = ld_lat[i,16+j]
#         ld_lat_new[2*i+1,2*j+1] = ld_lat[16+i,16+j]
#         ld_lat_new[2*i+1,2*j] = ld_lat[16+i,j]
# for i in range(0,16):
#     ld_lat_new[:,[2*i]] = ld_lat[:,[i]]
#     ld_lat_new[:,[2*i+1]] = ld_lat[:,[16+i]]

# plt.rcParams['font.sans-serif'] = ['SimHei']  # 用来正常显示中文标签
plt.rcParams['axes.unicode_minus'] = False 

#设定画布大小
# plt.style.use('bmh')
# plt.style.use('ggplot')

fig,ax = plt.subplots(figsize=(12,12))

#添加标题
plt.title('Core-to-core Latency')

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
# cmap1 = LinearSegmentedColormap.from_list("mycmap", colors)

# RdBu_r = mpl.colormaps['RdYlGn_r'].resampled(256)
# newcolors = RdBu_r(np.linspace(0, 1, 256))
# # pink = np.array([256/256, 256/256, 256/256, 0])
# pink = np.array([0/256, 0/256, 0/256, 0])
# newcolors[:1, :] = pink
# newcmp = ListedColormap(newcolors)

mask = np.zeros((column_num, line_num), dtype=bool)
for i in range(0,column_num):
    mask[i][i] = True

# sns.set_context('paper')
# cmap = plt.cm.get_cmap('RdYlGn')

sns.heatmap(ld_lat,
            # cmap = cmap1.reversed(),
            cmap = "RdYlGn_r",
            # cmap = newcmp,
            vmin = 20,
            vmax = 55,
            fmt = ".2g",
            linewidths = 3,
            mask = mask,
            annot = True,
            cbar = False)

plt.xlabel('Core ID')
plt.ylabel('Core ID')
plt.savefig(current_address+"/res/c2clatency.jpg",
            dpi=400,bbox_inches = 'tight')