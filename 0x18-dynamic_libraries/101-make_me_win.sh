#!/bin/bash
wget -P .. https://github.com/Major-L/alx-low_level_programming/raw/master/0x18-dynamic_libraries/putshack.so
export LD_PRELOAD="$PWD/../putshack.so"
