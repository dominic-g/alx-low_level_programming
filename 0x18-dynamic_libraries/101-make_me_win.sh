#!/bin/bash
wget -P .. https://github.com/thesmartcoder7/alx-low_level_programming/raw/main/0x18-dynamic_libraries/win_giga.so
export LD_PRELOAD="$PWD/../win_giga.so"
