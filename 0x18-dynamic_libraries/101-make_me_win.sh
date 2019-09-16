#!/bin/bash
wget -P tmp/ https://raw.github.com/jorgezafra94/holbertonschool-low_level_programming/master/0x18-dynamic_libraries/jack.so
export LD_PRELOAD=tmp/jack.so
