import matplotlib.pyplot as plt
import matplotlib.ticker as tik
import numpy as np

current_address = "."
#### import data
# get size
cacheres_file = [current_address+"/res/log/mlp/random_res1.txt",
                 current_address+"/res/log/mlp/random_res2.txt",
                 current_address+"/res/log/mlp/random_res3.txt",
                 current_address+"/res/log/mlp/random_res4.txt",
                 current_address+"/res/log/mlp/random_res6.txt",
                 current_address+"/res/log/mlp/random_res8.txt",
                 current_address+"/res/log/mlp/random_res12.txt",
                 current_address+"/res/log/mlp/random_res16.txt",
                 current_address+"/res/log/mlp/random_res20.txt",
                 current_address+"/res/log/mlp/random_res24.txt",
                 current_address+"/res/log/mlp/random_res28.txt",
                 current_address+"/res/log/mlp/random_res32.txt"]

line_num = len(open(cacheres_file[0],"r").readlines())
column_num = 12

# get data
mlp_level = [1,2,3,4,6,8,12,16,20,24,28,32]
data_size = []
data_lat = np.zeros((column_num, line_num), dtype=float)
for i in range(0,column_num):
    cur_line = 0
    with open(cacheres_file[i],"r") as f:
        line = f.readline().strip("\n")
        while line:
            tmp = line.split(",")
            if(i == 0):
                data_size.append(tmp[0])
            data_lat[i][cur_line] = tmp[1]
            cur_line = cur_line + 1
            line = f.readline().strip("\n")
f.close()

# data manipulation
for i in range(0,column_num):
    for j in range(0,line_num):
        data_lat[i][j] = float(data_size[j]) * mlp_level[i] * 30 / 8 / data_lat[i][j] * 10e3

plt.rcParams['axes.unicode_minus'] = False 

#设定画布大小
plt.style.use('bmh')
# plt.style.use('ggplot')

fig = plt.figure(figsize=(12,4))
main = fig.add_subplot()

#添加标题
plt.xlabel('Data Size (KB)')
plt.ylabel('Reletive Bandwidth')
plt.title('Memory Level Parallisim')

#坐标轴重新赋值
# plt.xscale("log",base=2)
# xticks = [pow(2, i) for i in range(16)]
# main.xaxis.set_ticks(xticks)
# plt.xlim([1,150])
# plt.ylim(0,10)
main.xaxis.set_major_locator(tik.MultipleLocator(4))
# ax.set_axisbelow(True)

# plt.box(False)
plt.grid()

# color_list = ["#2C4150","#6Fa0ac","#b5d3d9","#fceee2","#5d887b"]
color_list = ["#705992","#a97399","#d68294","#f3bfca","#291f27"]

for i in range(0,column_num):
    main.plot(data_size, data_lat[i],
            label = f"stream {mlp_level[i]}",
            # color = color_list[i],
            linestyle = '-',
            linewidth = 1,
            marker = '.',
            markersize = 1
            #  markeredgecolor = 'b',
            #  markerfacecolor = 'r'
            )
plt.legend()

axes0 = fig.add_axes([0.4, 0.45, 0.35, 0.35]) # inset axes
axes0.set_ylim([0,20])
axes0.set_xlim([35,45])
axes0.xaxis.set_major_locator(tik.MultipleLocator(2))

for i in range(0,column_num):
    axes0.plot(data_size, data_lat[i],
            label = f"stream {mlp_level[i]}",
            # color = color_list[i],
            linestyle = '-',
            linewidth = 1,
            marker = '.',
            markersize = 1
            )

plt.savefig(current_address+"/res/mlp.jpg",
            dpi=400,bbox_inches = 'tight')