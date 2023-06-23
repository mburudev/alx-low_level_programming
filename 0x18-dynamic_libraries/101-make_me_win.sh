#!/bin/bash
wget -P /tmp https://github.com/mburudev/alx-low_level_programming/raw/master/0x18-dynamic_libraries/grandom.so
export LD_PRELOAD=/tmp/grandom.so
