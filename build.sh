#!/bin/bash

gcc -o byteSize.out byteSize.c 
./byteSize.out


nasm -f elf32 hll_test.asm 
gcc -m32 -o test1.out hll_ex1c.c hll_test.o 
./test1.out

nasm -f elf32 hll_minmaxa.asm
gcc -m32 -o minmax.out hll_minmaxc.c hll_minmaxa.o 
./minmax.out



