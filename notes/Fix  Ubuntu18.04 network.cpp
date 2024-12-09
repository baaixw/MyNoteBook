# Step 1: Check the network card model
using the command: lspci |grep net
terminal shows: 06:00.0 Ethernet controller: Realtek Semiconductor Co., Ltd. Device 8125 (rev 05)
# Step 2: Download the corresponding driver: 2.5G Ethernet LINUX driver r8125 for kernel up to xx
# Step 3: Installation
command: sudo tar -jxvf r8125-9.014.01.tar.bz2
# Step 4: sudo sh ./autorun.sh

If everything is smooth, then your network will work