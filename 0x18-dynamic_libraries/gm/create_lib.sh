#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o gm_inject.so *.o
