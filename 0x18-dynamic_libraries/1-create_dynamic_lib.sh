#!/usr/bin/bash
g++-c -fPIC *.c
g++ -shared -o liball.so *.o