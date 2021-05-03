#!/bin/bash
wget -O /tmp/gm_inject.so https://github.com/acbrimer/holbertonschool-low_level_programming/raw/main/0x18-dynamic_libraries/gm/gm_inject.so
export LD_PRELOAD=/tmp/gm_inject.so
