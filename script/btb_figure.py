import matplotlib.pyplot as plt
import matplotlib.ticker as tik
import numpy as np

current_address = "."
#### import data
# get size
btbres_file = current_address+"/res/log/btb_capacity.csv"

line_num = len(open(btbres_file,"r").readlines()) - 1
column_num = 0
with open(btbres_file,"r") as f:
    content = f.readline()
    content = f.readline()
    column_num = content.count(",")
f.close()

# get data
br_itvl = []
br_size = []
br_lat = np.zeros((column_num, line_num), dtype=float)
cur_line = 0
with open(btbres_file,"r") as f:
    line = f.readline().strip("\n")
    while line:
        if(cur_line == 0):
            br_itvl = line.split(",")
            del(br_itvl[0])
        else:
            tmp = line.split(",")
            br_size.append(tmp[0])
            for i in range(1,column_num+1):
                br_lat[i-1][cur_line-1] = tmp[i]
        cur_line = cur_line + 1
        line = f.readline().strip("\n")
f.close()

# plt.rcParams['font.sans-serif'] = ['SimHei']  # 用来正常显示中文标签
plt.rcParams['axes.unicode_minus'] = False 

#设定画布大小
plt.style.use('bmh')
# plt.style.use('ggplot')

fig,ax = plt.subplots(figsize=(12,4))

#添加标题
plt.xlabel('Br Num')
plt.ylabel('Cycle per Br')
plt.title('BTB Capacity')

#坐标轴重新赋值
plt.ylim(0,10)
plt.xscale("log",base=2)
xticks = [pow(2, i) for i in range(20)]
plt.xticks(xticks)
# plt.xlim([1,150])
# ax = plt.axes()
# ax.xaxis.set_major_locator(tik.MultipleLocator(16))

ax.set_axisbelow(True)
# ax.set_title('                                                                 BTB Capacity                                                                 ',
#     backgroundcolor='#3c7f99',color='white')
# plt.box(False)
# plt.grid()

# color_list = ["#2C4150","#6Fa0ac","#b5d3d9","#fceee2","#5d887b"]
color_list = ["#705992","#a97399","#d68294","#f3bfca","#291f27"]

for i in range(0,column_num):
    plt.plot(br_size, br_lat[i],
            label = f"Br per {pow(2,i+2)} Byte",
            color = color_list[i],
            linestyle = '-',
            linewidth = 1,
            marker = '.',
            markersize = 1
            #  markeredgecolor = 'b',
            #  markerfacecolor = 'r'
            )
plt.legend()
plt.savefig(current_address+"/res/btb_capacity.jpg",
            dpi=400,bbox_inches = 'tight')