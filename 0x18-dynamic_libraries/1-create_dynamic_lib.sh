#!/bin/bash

# Compile all .c files into a shared library named liball.so
gcc -Wall -Werror -Wextra -pedantic -fPIC -c *.c
gcc -shared -o liball.so *.o

# Clean up object files
rm *.o
