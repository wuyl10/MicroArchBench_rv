import matplotlib.pyplot as plt
import matplotlib.ticker as tik
import numpy as np

current_address = "."
#### import data
# get size
ifetch_file = current_address+"/res/log/ifetch.csv"

line_num = len(open(ifetch_file,"r").readlines())

# get data
fetch_size = []
fetch_lat = np.zeros((1, line_num), dtype=float)
cur_line = 0
with open(ifetch_file,"r") as f:
    line = f.readline().strip("\n")
    while line:
        tmp = line.split(",")
        fetch_size.append(tmp[0])
        fetch_lat[0][cur_line] = tmp[1]
        cur_line = cur_line + 1
        line = f.readline().strip("\n")
f.close()

# plt.rcParams['font.sans-serif'] = ['SimHei']  # 用来正常显示中文标签
plt.rcParams['axes.unicode_minus'] = False 

#设定画布大小
plt.style.use('bmh')
# plt.style.use('ggplot')

fig ,ax= plt.subplots(figsize=(12,4))

#添加标题
plt.xlabel('Code Size')
plt.ylabel('Instructions per Cycle')
plt.title('Instruction Fetch Speed')

#坐标轴重新赋值
# plt.ylim(0,10)
# plt.xscale("log",base=2)
# xticks = [pow(2, i) for i in range(20)]
# plt.xticks(xticks)
ax.xaxis.set_major_locator(tik.MultipleLocator(4))

# ax.set_title('                                                                 BTB Capacity                                                                 ',
#     backgroundcolor='#3c7f99',color='white')
# plt.box(False)
# plt.grid()

# color_list = ["#2C4150","#6Fa0ac","#b5d3d9","#fceee2","#5d887b"]
color_list = ["#705992","#a97399","#d68294","#f3bfca","#291f27"]

for i in range(0,1):
    plt.plot(fetch_size, fetch_lat[i],
            label = f"LdSt per {pow(2,i+3)} Byte",
            color = color_list[i],
            linestyle = '-',
            linewidth = 1,
            marker = '.',
            markersize = 1
            #  markeredgecolor = 'b',
            #  markerfacecolor = 'r'
            )
# plt.legend()
plt.savefig(current_address+"/res/ifetch.jpg",
            dpi=400,bbox_inches = 'tight')