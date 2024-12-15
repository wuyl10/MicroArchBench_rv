
import os
from pathlib import Path

print("------------ Env preparation ------------")
# Setup running environment.
# ./res for readable results; ./res/log for intermediate outputs
# Clear results from last run first
res_file = Path("./res")
if res_file.is_dir():
    print("Output dir found.")
    command = "rm res/*.mk;rm res/*.jpg;rm res/*.res;rm -r res/log/mlp"
    # os.system(command)
    command = "rm res/log/*"
    # os.system(command)
    print("Output dir cleaned.")
else:
    command = "mkdir res;mkdir ./res/log"
    os.system(command)

print("------------ Test compilation ------------")
# Use Xmake to compile according to platforms.
command = "make ARCH=riscv64-xs"
os.system(command)

print("------------ Load config ------------")
# set default values
intel_style = 0

freq_test = 0
pipewidth_test = 0
fetchwidth_test = 0
instlantency_test = 0
movelimination_test = 0
ptchase_test = 0
btbcapacity_test = 0
itlbcapacity_test = 0
cachelatency_test = 0
membandwidth_test = 0
ldstforward_test = 0
ldstorder_test = 0
bp_test = 0
ijp_test = 0
ijp_new_test = 0
ijptgt_test = 0
ijptgt_new_test = 0
ras_test = 0
ras_dist_test = 0
ifetch_test = 0
c2clatency_test = 0
mlp_test = 0
robcap_test = 0
xprfcap_test = 0
cprfcap_test = 0
fprfcap_test = 0
ldqcap_test = 0
stqcap_test = 0
xiscap_test = 0
xciscap_test = 0
fiscap_test = 0
ldiscap_test = 0

plot = 1
no_plot = 0

config_file = open("run.config","r")
contents = config_file.readlines()
for content in contents:
    content_tmp = content.strip('\n')
    if(len(content_tmp) == 0 or content_tmp[0] == " "): continue

    if(content_tmp == "freq_test"): intel_style = 1

    if  (content_tmp == "freq_test"): freq_test = 1
    elif(content_tmp == "pipewidth_test"): pipewidth_test = 1
    elif(content_tmp == "fetchwidth_test"): fetchwidth_test = 1
    elif(content_tmp == "instlantency_test"): instlantency_test = 1
    elif(content_tmp == "movelimination_test"): movelimination_test = 1
    elif(content_tmp == "ptchase_test"): ptchase_test = 1
    elif(content_tmp == "btbcapacity_test"): btbcapacity_test = 1
    elif(content_tmp == "itlbcapacity_test"): itlbcapacity_test = 1
    elif(content_tmp == "cachelatency_test"): cachelatency_test = 1
    elif(content_tmp == "membandwidth_test"): membandwidth_test = 1
    elif(content_tmp == "ldstforward_test"): ldstforward_test = 1
    elif(content_tmp == "ldstorder_test"): ldstorder_test = 1
    elif(content_tmp == "bp_test"): bp_test = 1
    elif(content_tmp == "ijp_test"): ijp_test = 1
    elif(content_tmp == "ijp_new_test"): ijp_new_test = 1
    elif(content_tmp == "ijptgt_test"): ijptgt_test = 1
    elif(content_tmp == "ijptgt_new_test"): ijptgt_new_test = 1
    elif(content_tmp == "ras_test"): ras_test = 1
    elif(content_tmp == "ras_dist_test"): ras_dist_test = 1
    elif(content_tmp == "ifetch_test"): ifetch_test = 1
    elif(content_tmp == "c2clatency_test"): c2clatency_test = 1
    elif(content_tmp == "mlp_test"): mlp_test = 1
    elif(content_tmp == "robcap_test"): robcap_test = 1
    elif(content_tmp == "xprfcap_test"): xprfcap_test = 1
    elif(content_tmp == "cprfcap_test"): cprfcap_test = 1
    elif(content_tmp == "fprfcap_test"): fprfcap_test = 1
    elif(content_tmp == "ldqcap_test"): ldqcap_test = 1
    elif(content_tmp == "stqcap_test"): stqcap_test = 1
    elif(content_tmp == "xiscap_test"): xiscap_test = 1
    elif(content_tmp == "xciscap_test"): xciscap_test = 1
    elif(content_tmp == "fiscap_test"): fiscap_test = 1
    elif(content_tmp == "ldiscap_test"): ldiscap_test = 1

    if(content_tmp == "no_plot"): no_plot = 1

plot = plot - no_plot


print("------------ Test run ------------")
# Check if ./build exists and try to find the binary.
current_address = os.path.dirname(os.path.abspath(__file__))    #当前文件的绝对路径
file_list = os.listdir("./build")       #列出路径下的文件名和目录名（不管目录下的内部文件）
for file_address in file_list:
    if(file_address[0] != '.'):
        bin_address = os.path.join(current_address,"build",file_address) #路径拼接

file_list = os.listdir(bin_address)
for file_address in file_list:
    tmp_address = os.path.join(bin_address,file_address)
    tmp_file = Path(tmp_address)    #Path(tmp_address) 使用 Pathlib 库的 Path 类来创建一个 Path 对象，便于对文件路径进行各种操作。
    if(tmp_file.is_dir()):      #用于检查 tmp_file 指向的路径是否为一个目录
        bin_address = tmp_address
        break

file_list = os.listdir(bin_address)
for file_address in file_list:
    tmp_address = os.path.join(bin_address,file_address)
    tmp_file = Path(tmp_address)
    if(tmp_file.is_dir()):
        bin_address = tmp_address
        break

# Get frequency first
command = f"{bin_address}/freq_test {current_address}/res"      # f-string 格式化字符串来构建命令字符串 左边是执行，右边执行结果存放地址
if(freq_test): os.system(command)

# Get wdith of Pipeline
freq_file = current_address+"/res/log/freq.res"

freq = 0
with open(freq_file,"r") as f:
    freq = f.readline()
command = f"{bin_address}/pipewidth_test {current_address}/res {freq}"
if(pipewidth_test): os.system(command)

command = f"{bin_address}/fetchwidth_test {current_address}/res {freq}"
if(fetchwidth_test): os.system(command)

# Test paticular instruction latency
command = f"{bin_address}/instlatency_test {current_address}/res {freq}"
if(instlantency_test): os.system(command)

# Test Rename elimination
command = f"{bin_address}/movelimination_test {current_address}/res {freq}"
if(movelimination_test): os.system(command)

# Test pointer chasing
command = f"{bin_address}/ptchase_test {current_address}/res {freq}"
if(ptchase_test): os.system(command)

# Test BTB
if  (platform == 1): command = f"cd src/btb;python3 btb_capacity_arm.py {freq}"
elif(platform == 2): command = f"cd src/btb;python3 btb_capacity_dev_x86.py {freq}"

if(btbcapacity_test): os.system(command)
command = "rm src/btb/res.txt;rm src/btb/test.h;rm src/btb/test;mv src/btb/output.csv res/log/btb_capacity.csv"
if(btbcapacity_test): os.system(command)
command = "python3 ./script/btb_figure.py"
if(btbcapacity_test and plot): os.system(command)

# Test ITLB
if  (platform == 1): command = f"cd src/itlb;python3 itlb_capacity_arm.py {freq}"
elif(platform == 2): command = f"cd src/itlb;python3 itlb_capacity_x86.py {freq}"
if(itlbcapacity_test): os.system(command)
command = "rm src/itlb/res.txt;rm src/itlb/test.h;rm src/itlb/test;mv src/itlb/output.csv res/log/itlb_capacity.csv"
if(itlbcapacity_test): os.system(command)
command = "python3 ./script/itlb_figure.py"
if(itlbcapacity_test and plot): os.system(command)

# Test cache latency
command = f"{bin_address}/cachelatency_test"
if(cachelatency_test): os.system(command)
command = "python3 ./script/cachelatency_figure_tmp.py"
if(cachelatency_test and plot): os.system(command)

# Test memory bandwidth
command = f"{bin_address}/membandwidth_test {current_address}/res"
if(membandwidth_test): os.system(command)

# Test load-store forwarding
command = f"{bin_address}/ldstforward_test {current_address}/res"
if(ldstforward_test): os.system(command)
command = "python3 ./script/ldstforward_figure.py"
if(ldstforward_test and plot): os.system(command)

# Test load-store order violation predictor
if  (platform == 1): command = f"cd src/ldstorder;python3 ldstorder_arm.py"
elif(platform == 2): command = f"cd src/ldstorder;python3 ldstorder_x86.py"

if(ldstorder_test): os.system(command)
command = "rm src/ldstorder/res.txt;rm src/ldstorder/test.h;rm src/ldstorder/test;mv src/ldstorder/output.csv res/log/ldstorder.csv"
if(ldstorder_test): os.system(command)
command = "python3 ./script/ldstorder_figure.py"
if(ldstorder_test and plot): os.system(command)

# Test branch predictor (conditional)
# command = f"cd src/bp;python3 bp_arm.py;g++ test.cpp -o bp_test;./bp_test {current_address}/res"
if  (platform == 1): command = f"cd src/bp;python3 bp_arm.py;sh myrun.sh"
elif(platform == 2): command = f"cd src/bp;python3 bp_x86.py;sh myrun.sh"

if(bp_test): os.system(command)
command = f"rm src/bp/bp_test;rm src/bp/test.h;mv src/bp/res.txt {current_address}/res/log/bp.res"
if(bp_test): os.system(command)
command = "python3 ./script/bp_figure_heatmap.py"
if(bp_test and plot): os.system(command)

# Test indirect branch predictor(Br num)
command = f"cd src/ijp_brnum;python3 ijp.py;sh myrun.sh"
if(ijp_test): os.system(command)
command = f"rm src/ijp_brnum/ijp_test;rm src/ijp_brnum/test.h;mv src/ijp_brnum/res.txt {current_address}/res/log/ijp.res"
if(ijp_test): os.system(command)
command = "python3 ./script/ijp_figure_heatmap.py"
if(ijp_test and plot): os.system(command)

# Test indirect branch predictor(Br num) New: avoiding conditional branches in main loops
command = f"cd src/ijp_brnum_new;python3 ijp.py;sh myrun.sh"
if(ijp_new_test): os.system(command)
command = f"rm src/ijp_brnum_new/ijp_test;rm src/ijp_brnum_new/test.h;mv src/ijp_brnum_new/res.txt {current_address}/res/log/ijp_new.res"
if(ijp_new_test): os.system(command)
command = "python3 ./script/ijp_new_figure_heatmap.py"
if(ijp_new_test and plot): os.system(command)

# Test indirect branch predictor(Tgt num)
command = f"cd src/ijp_tgtnum;python3 ijp.py;sh myrun.sh"
if(ijptgt_test): os.system(command)
command = f"rm src/ijp_tgtnum/ijp_test;rm src/ijp_tgtnum/test.h;mv src/ijp_tgtnum/res.txt {current_address}/res/log/ijp_tgt.res"
if(ijptgt_test): os.system(command)
command = "python3 ./script/ijp_tgt_figure_heatmap.py"
if(ijptgt_test and plot): os.system(command)

# Test indirect branch predictor(Tgt num) New: adding conditional branches in main loops
command = f"cd src/ijp_tgtnum_new;python3 ijp.py;sh myrun.sh"
if(ijptgt_new_test): os.system(command)
command = f"rm src/ijp_tgtnum_new/ijp_test;rm src/ijp_tgtnum_new/test.h;mv src/ijp_tgtnum_new/res.txt {current_address}/res/log/ijp_tgt_new.res"
if(ijptgt_new_test): os.system(command)
command = "python3 ./script/ijp_tgt_new_figure_heatmap.py"
if(ijptgt_new_test and plot): os.system(command)

# Test return address stack
command = f"{bin_address}/ras_test {current_address}/res {freq}"
if(ras_test): os.system(command)
command = "python3 ./script/ras_figure.py"
if(ras_test and plot): os.system(command)

# Test return address stack with distinct functions
command = f"cd src/ras_dist;python3 ras_dist.py {freq}"
if(ras_dist_test): os.system(command)
command = f"rm src/ras_dist/ras_dist_test;rm src/ras_dist/test.h;rm src/ras_dist/res.txt;mv src/ras_dist/output.res {current_address}/res/log/ras_dist.res"
if(ras_dist_test): os.system(command)
command = "python3 ./script/ras_dist_figure.py"
if(ras_dist_test and plot): os.system(command)

# Test instruction fetch
if  (platform == 1): command = f"cd src/ifetch;python3 ifetch.py {freq}"
if  (platform == 2): command = f"cd src/ifetch;python3 ifetch_x86.py {freq}"
if(ifetch_test): os.system(command)
command = "rm src/ifetch/res.txt;rm src/ifetch/test.h;rm src/ifetch/test;mv src/ifetch/output.csv res/log/ifetch.csv"
if(ifetch_test): os.system(command)
command = "python3 ./script/ifetch_figure.py"
if(ifetch_test and plot): os.system(command)

# Test core-to-core latency
if(c2clatency_test): print("\n>>>>> Testing Core-to-core Latency")
command = f"{bin_address}/c2clatency_test > {current_address}/res/log/c2clatency.res"
if(c2clatency_test): os.system(command)
command = "python3 ./script/c2clatency_figure.py"
if(c2clatency_test and plot): os.system(command)

# Test memory level paralelism
command = f"mkdir {current_address}/res/log/mlp"
if(mlp_test): os.system(command)
command = f"{bin_address}/mlp_test {current_address}/res"
if(mlp_test): os.system(command)
command = "python3 ./script/mlp_figure.py"
if(mlp_test and plot): os.system(command)

# Test Queue Capacity
if(robcap_test): print("\n>>>>> Testing ROB")
if  (platform == 1): command = f"cd src/queuecap;python3 rob_arm.py"
elif(platform == 2): command = f"cd src/queuecap;python3 rob_x86.py"

if(robcap_test): os.system(command)
command = "rm src/queuecap/res.txt;rm src/queuecap/test.h;rm src/queuecap/test;mv src/queuecap/output.csv res/log/robcap.csv"
if(robcap_test): os.system(command)
command = "python3 ./script/robcap_figure.py"
if(robcap_test and plot): os.system(command)

if(xprfcap_test): print("\n>>>>> Testing XPRF")
if  (platform == 1): command = f"cd src/queuecap;python3 xprf_arm.py"
elif(platform == 2): command = f"cd src/queuecap;python3 xprf_x86.py"
if(xprfcap_test): os.system(command)
command = "rm src/queuecap/res.txt;rm src/queuecap/test.h;rm src/queuecap/test;mv src/queuecap/output.csv res/log/xprfcap.csv"
if(xprfcap_test): os.system(command)
command = "python3 ./script/xprfcap_figure.py"
if(xprfcap_test and plot): os.system(command)

if(cprfcap_test): print("\n>>>>> Testing CPRF")
if  (platform == 1): command = f"cd src/queuecap;python3 cprf_arm.py"
elif(platform == 2): command = f"cd src/queuecap;python3 cprf_x86.py"
if(cprfcap_test): os.system(command)
command = "rm src/queuecap/res.txt;rm src/queuecap/test.h;rm src/queuecap/test;mv src/queuecap/output.csv res/log/cprfcap.csv"
if(cprfcap_test): os.system(command)
command = "python3 ./script/cprfcap_figure.py"
if(cprfcap_test and plot): os.system(command)

if(fprfcap_test): print("\n>>>>> Testing FPRF")
if  (platform == 1): command = f"cd src/queuecap;python3 fprf_arm.py"
elif(platform == 2): command = f"cd src/queuecap;python3 fprf_x86.py"
if(fprfcap_test): os.system(command)
command = "rm src/queuecap/res.txt;rm src/queuecap/test.h;rm src/queuecap/test;mv src/queuecap/output.csv res/log/fprfcap.csv"
if(fprfcap_test): os.system(command)
command = "python3 ./script/fprfcap_figure.py"
if(fprfcap_test and plot): os.system(command)

if(ldqcap_test): print("\n>>>>> Testing LDQ")
if  (platform == 1): command = f"cd src/queuecap;python3 ldq_arm.py"
elif(platform == 2): command = f"cd src/queuecap;python3 ldq_x86.py"
if(ldqcap_test): os.system(command)
command = "rm src/queuecap/res.txt;rm src/queuecap/test.h;rm src/queuecap/test;mv src/queuecap/output.csv res/log/ldqcap.csv"
if(ldqcap_test): os.system(command)
command = "python3 ./script/ldqcap_figure.py"
if(ldqcap_test and plot): os.system(command)

if(stqcap_test): print("\n>>>>> Testing STQ")
if  (platform == 1): command = f"cd src/queuecap;python3 stq_arm.py"
elif(platform == 2): command = f"cd src/queuecap;python3 stq_x86.py"
if(stqcap_test): os.system(command)
command = "rm src/queuecap/res.txt;rm src/queuecap/test.h;rm src/queuecap/test;mv src/queuecap/output.csv res/log/stqcap.csv"
if(stqcap_test): os.system(command)
command = "python3 ./script/stqcap_figure.py"
if(stqcap_test and plot): os.system(command)

if(xiscap_test): print("\n>>>>> Testing XIS")
if  (platform == 1): command = f"cd src/queuecap;python3 xis_arm.py"
elif(platform == 2): 
    if(intel_style): command = f"cd src/queuecap;python3 xis_intelstyle_x86.py"
    else:            command = f"cd src/queuecap;python3 xis_x86.py"
if(xiscap_test): os.system(command)
command = "rm src/queuecap/res.txt;rm src/queuecap/test.h;rm src/queuecap/test;mv src/queuecap/output.csv res/log/xiscap.csv"
if(xiscap_test): os.system(command)
command = "python3 ./script/xiscap_figure.py"
if(xiscap_test and plot): os.system(command)

if(xciscap_test): print("\n>>>>> Testing XCIS")
if  (platform == 1): command = f"cd src/queuecap;python3 xcis_arm.py"
elif(platform == 2): 
    if(intel_style): command = f"cd src/queuecap;python3 xcis_intelstyle_x86.py"
    else:            command = f"cd src/queuecap;python3 xcis_x86.py"
if(xciscap_test): os.system(command)
command = "rm src/queuecap/res.txt;rm src/queuecap/test.h;rm src/queuecap/test;mv src/queuecap/output.csv res/log/xciscap.csv"
if(xciscap_test): os.system(command)
command = "python3 ./script/xciscap_figure.py"
if(xciscap_test and plot): os.system(command)

if(fiscap_test): print("\n>>>>> Testing FIS")
if  (platform == 1): command = f"cd src/queuecap;python3 fis_arm.py"
elif(platform == 2): 
    if(intel_style): command = f"cd src/queuecap;python3 fis_intelstyle_x86.py"
    else:            command = f"cd src/queuecap;python3 fis_x86.py"
if(fiscap_test): os.system(command)
command = "rm src/queuecap/res.txt;rm src/queuecap/test.h;rm src/queuecap/test;mv src/queuecap/output.csv res/log/fiscap.csv"
if(fiscap_test): os.system(command)
command = "python3 ./script/fiscap_figure.py"
if(fiscap_test and plot): os.system(command)

if(ldiscap_test): print("\n>>>>> Testing LDIS")
if  (platform == 1): command = f"cd src/queuecap;python3 ldis_arm.py"
elif(platform == 2): command = f"cd src/queuecap;python3 ldis_x86.py"
if(ldiscap_test): os.system(command)
command = "rm src/queuecap/res.txt;rm src/queuecap/test.h;rm src/queuecap/test;mv src/queuecap/output.csv res/log/ldiscap.csv"
if(ldiscap_test): os.system(command)
command = "python3 ./script/ldiscap_figure.py"
if(ldiscap_test and plot): os.system(command)