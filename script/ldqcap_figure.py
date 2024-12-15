import matplotlib.pyplot as plt
import matplotlib.ticker as tik
import numpy as np

current_address = "."
#### import data
# get size
ldstorderres_file = current_address+"/res/log/ldqcap.csv"

line_num = len(open(ldstorderres_file,"r").readlines())
column_num = 0
with open(ldstorderres_file,"r") as f:
    content = f.readline()
    content = f.readline()
    column_num = content.count(",")
f.close()

# get data
payload_size = []
latency = np.zeros((column_num, line_num), dtype=float)
cur_line = 0
with open(ldstorderres_file,"r") as f:
    line = f.readline().strip("\n")
    while line:
        tmp = line.split(",")
        payload_size.append(tmp[0])
        for i in range(1,column_num+1):
            latency[i-1][cur_line] = tmp[i]
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
plt.xlabel('Ld Num')
plt.ylabel('Time (ns)')
plt.title('LDQ Capacity')

#坐标轴重新赋值
# plt.ylim(180,300)
# plt.xscale("log",base=2)
# xticks = [pow(2, i) for i in range(20)]
# plt.xticks(xticks)
ax.xaxis.set_major_locator(tik.MultipleLocator(24))

# ax.set_title('                                                                 BTB Capacity                                                                 ',
#     backgroundcolor='#3c7f99',color='white')
# plt.box(False)
# plt.grid()

# color_list = ["#2C4150","#6Fa0ac","#b5d3d9","#fceee2","#5d887b"]
color_list = ["#705992","#a97399","#d68294","#f3bfca","#291f27"]

for i in range(0,column_num):
    plt.scatter(payload_size, latency[i],
            color = color_list[i],
            s = 2,
            # linestyle = '-',
            # linewidth = 1,
            # marker = '.',
            # markersize = 1
            #  markeredgecolor = 'b',
            #  markerfacecolor = 'r'
            )
# plt.legend()
plt.savefig(current_address+"/res/ldqcap.jpg",
            dpi=400,bbox_inches = 'tight')