rm test
python3 bp_rv.py
echo ">>>>> Running Branch Prediction Test"
make ARCH=riscv64-xs

#run
/nfs/home/wuyuanlong/workspace/NEMU/build/riscv64-nemu-interpreter -b ./build/bp-riscv64-xs.bin >./../../res/log/bp.res 2>&1

#graph
python3 ./../../script/bp_figure_heatmap.py

# echo "---------- test start ----------"
# > res.txt
# echo "---------- analysis start ----------"
 #objdump -D test > test.S
