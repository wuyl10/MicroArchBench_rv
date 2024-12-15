import matplotlib.pyplot as plt
import matplotlib.ticker as tik
import seaborn as sns
import numpy as np

current_address = "."
#### import data
# get size
bp_file = current_address+"/res/log/ijp_new.res"

line_num = len(open(bp_file,"r").readlines())
column_num = 0
with open(bp_file,"r") as f:
    content = f.readline()
    column_num = content.count(",")
    print(column_num)
f.close()

# get data
bp_lat = np.zeros((column_num, line_num), dtype=float)
cur_line = 0
with open(bp_file,"r") as f:
    line = f.readline().strip("\n")
    while line:
        tmp = line.split(",")
        for i in range(0,column_num):
            bp_lat[i][cur_line] = round(float(tmp[i]),2)
        cur_line = cur_line + 1
        line = f.readline().strip("\n")
f.close()

his_len = [2,4,8,12,16,24,32,48,64,96,128,192,256,512,600,768,1024,1536,2048,3072,4096,5120,6144,8192,10240,12288,16384,24567,32768,65536]
br_num = [pow(2, i) for i in range(10)]

plt.rcParams['axes.unicode_minus'] = False 

# #设定画布大小
# plt.style.use('bmh')
# plt.style.use('ggplot')
# sns.set_style('whitegrid')

fig = plt.figure(figsize=(12,3.5))
# #添加标题

plt.title('Indirect Branch Prediction Performance New')

#坐标轴重新赋值
# ax.axis('equal')
# ax.set_xscale("log")
# ax.set_yscale("log")


# color_list = ["#2C4150","#6Fa0ac","#b5d3d9","#fceee2","#5d887b"]
# color_list = ["#705992","#a97399","#d68294","#f3bfca","#291f27"]
# cmap = plt.cm.get_cmap('RdYlGn')
plt.yticks(his_len)

ax = sns.heatmap(bp_lat.T,
            # cmap = cmap1.reversed(),
            cmap = "RdYlGn_r",
            # vmin = 38,
            #vmax = 6,
            xticklabels=his_len,
            yticklabels=br_num,
            # cbar_ax= cbar_axis,
            # square = True,
            linewidths=0.5,
            fmt = ".2g")

ax.set_ylabel('Branch Num')
ax.set_xlabel('Pattern Length')
ax.set_xticklabels(ax.get_xticklabels(),rotation=45)
ax.set_yticklabels(ax.get_yticklabels(),rotation=45)
# cbar = ax.collections[0].colorbar
# cbar.ax.tick_params(labeltop=True)

plt.savefig(current_address+"/res/ijp_new.jpg",
            dpi=400,bbox_inches = 'tight')