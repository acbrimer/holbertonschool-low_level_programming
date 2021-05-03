#!/bin/bash
wget -P /tmp https://github.com/acbrimer/holbertonschool-low_level_programming/raw/main/0x18-dynamic_libraries/gm_inject.so 
export LD_PRELOAD=/tmp/gm_inject.so
