#!/bin/bash
wget https://github.com/Blxee/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libcrack.so -P /tmp/
export LD_PRELOAD='/tmp/libcrack.so'
