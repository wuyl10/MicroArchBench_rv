import matplotlib.pyplot as plt
import matplotlib.ticker as tik
import numpy as np

current_address = "."
#### import data
# get size
cacheres_file = [current_address+"/res/log/linear_res.txt",
                 current_address+"/res/log/random_res.txt",
                 current_address+"/res/log/rinrvprange_res.txt",
                 current_address+"/res/log/rperrpage_res.txt",
                 current_address+"/res/log/tlbmiss_res.txt"]

line_num = len(open(cacheres_file[0],"r").readlines())
column_num = 4

# get data
data_legend = ["Linear Chain","Random","RinRvprange","RperRpage","TLB Miss"]
data_size = []
data_lat = np.zeros((column_num, line_num), dtype=float)
for i in range(0,column_num):
    cur_line = 0
    with open(cacheres_file[i],"r") as f:
        line = f.readline().strip("\n")
        while line:
            tmp = line.split("\t")
            if(i == 0):
                data_size.append(tmp[0])
            data_lat[i][cur_line] = tmp[1]
            cur_line = cur_line + 1
            line = f.readline().strip("\n")
f.close()

# plt.rcParams['font.sans-serif'] = ['SimHei']  # 用来正常显示中文标签
plt.rcParams['axes.unicode_minus'] = False 

#设定画布大小
plt.style.use('bmh')
# plt.style.use('ggplot')

fig = plt.figure(figsize=(12,4))
main = fig.add_subplot()

#添加标题
plt.xlabel('Data Size (KB)')
plt.ylabel('Time per Ld (ns)')
plt.title('Cache Latency')

#坐标轴重新赋值
plt.xscale("log",base=2)
plt.yscale("log",base=2)
xticks = [pow(2, i) for i in range(32)]
main.xaxis.set_ticks(xticks)
# plt.xlim([1,150])
# plt.ylim(0,10)
# ax.xaxis.set_major_locator(tik.MultipleLocator(64))
# ax.set_axisbelow(True)

# plt.box(False)
# plt.grid()

# color_list = ["#2C4150","#6Fa0ac","#b5d3d9","#fceee2","#5d887b"]
color_list = ["#705992","#a97399","#d68294","#f3bfca","#291f27"]

for i in range(0,column_num):
    plt.plot(data_size, data_lat[i],
            label = data_legend[i],
            color = color_list[i],
            linestyle = '-',
            linewidth = 1,
            marker = '.',
            markersize = 1
            #  markeredgecolor = 'b',
            #  markerfacecolor = 'r'
            )
    
    # plt.scatter(data_size, data_lat[i],
    #     color = color_list[i],
    #     s = 2,
    #     # linestyle = '-',
    #     # linewidth = 1,
    #     # marker = '.',
    #     # markersize = 1
    #     #  markeredgecolor = 'b',
    #     #  markerfacecolor = 'r'
    #         )
plt.legend()

# ax0 = fig.add_subplot(232)
# axes0 = fig.add_axes([0.3, 0.3, 0.5, 0.5]) # inset axes
# axes0.set_xlim([0,64])
# axes0.set_ylim([0,6])
# axes0.xaxis.set_major_locator(tik.MultipleLocator(8))

# for i in range(0,column_num):
#     axes0.plot(data_size, data_lat[i],
#             label = data_legend[i],
#             color = color_list[i],
#             linestyle = '-',
#             linewidth = 1,
#             marker = '.',
#             markersize = 1
#             #  markeredgecolor = 'b',
#             #  markerfacecolor = 'r'
#             )

plt.savefig(current_address+"/res/cache_latency.jpg",
            dpi=400,bbox_inches = 'tight')