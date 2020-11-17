#!/usr/bin/bash
# how_many_are_we

cut -d ";" -f 3 | grep -i "$1" | wc -l

