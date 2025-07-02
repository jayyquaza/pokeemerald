# This shell script builds parallel builds of 
# pokeemerald.gba for your chosen operating system. 

#!/bin/bash

cd ~/Developer/decomps/pokeemerald/  # Path to directory where pokeemerald is stored. 


# Windows 
# nproc=$(nproc)

# MacOS equivalent 
nproc=$(sysctl -n hw.ncpu) 


make -j$nproc

open pokeemerald.gba
