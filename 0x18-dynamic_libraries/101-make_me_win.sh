#!/bin/bash
gcc -shared -fPIC ran.c -o random.so
LD_PRELOAD=$PWD/random.so ./gm 9 8 10 24 75 9
