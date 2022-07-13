#!/bin/bash
wget -P /tmp https://github.com/okeyifea/alx-low_level_programming/raw/main/0x18-dynamic_libraries/giga.so
export LD_PRELOAD=/tmp/giga.so
