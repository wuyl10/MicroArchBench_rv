import matplotlib.pyplot as plt
import matplotlib.ticker as tik
import seaborn as sns
import numpy as np

current_address = "."
#### import data
# get size
bp_file = current_address+"/res/log/bp.res"

line_num = len(open(bp_file,"r").readlines())
column_num = 0
with open(bp_file,"r") as f:
    content = f.readline()
    column_num = content.count("\t")
    print(column_num)
f.close()

# get data
bp_lat = np.zeros((column_num, line_num), dtype=float)
cur_line = 0
with open(bp_file,"r") as f:
    line = f.readline().strip("\n")
    while line:
        tmp = line.split("\t")
        for i in range(0,column_num):
            bp_lat[i][cur_line] = round(float(tmp[i]),2)
        cur_line = cur_line + 1
        line = f.readline().strip("\n")
f.close()

his_len = [2,4,8,12,16,24,32,48,64,96,128,192,256,512,600,768,1024,1536,2048,3072,4096,5120,6144,8192,10240,12288,16384,24567,32768,65536]
# x = []
# for i in range(0,11):
#     x.append(pow(2,i))
# x_val,y_val = np.meshgrid(x, his_len)

x = []
y = []
for i in range(0,30):
    y.append(i)
for i in range(0,11):
    x.append(i)

x_val,y_val = np.meshgrid(x,y)

plt.rcParams['axes.unicode_minus'] = False 

# #设定画布大小
# plt.style.use('bmh')
# plt.style.use('ggplot')
# sns.set_style('whitegrid')

fig = plt.figure(figsize=(12,14))
ax = fig.add_subplot(111, projection='3d')
# #添加标题

ax.set_xlabel('Branch Num')
ax.set_ylabel('Pattern Length')
ax.set_zlabel('BP Latency')
plt.title('Branch Prediction Latency')

#坐标轴重新赋值
# ax.axis('equal')
# ax.set_xscale("log")
# ax.set_yscale("log")
# xticks = [pow(2, i) for i in range(11)]
# ax.set_xticks(xticks)
# ax.set_yticks(his_len)

# color_list = ["#2C4150","#6Fa0ac","#b5d3d9","#fceee2","#5d887b"]
# color_list = ["#705992","#a97399","#d68294","#f3bfca","#291f27"]
# cmap = plt.cm.get_cmap('RdYlGn')

ax.plot_surface(X=x_val,Y=y_val,Z=bp_lat,
cmap = plt.get_cmap('coolwarm'),
antialiased = True)

plt.savefig(current_address+"/res/bp.jpg",
            dpi=400,bbox_inches = 'tight')