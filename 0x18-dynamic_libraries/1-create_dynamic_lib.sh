#!/usr/bin/bash
gcc-c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRSRY_PATH=$PWD:$LD_LIBRSRY_PATH