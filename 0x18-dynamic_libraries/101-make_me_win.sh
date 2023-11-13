#!/bin/bash

echo -e '#include <stdio.h>\n#include <stdlib.h>\n#include <time.h>\nvoid srand(unsigned int seed) {}\nint rand(void) { return 6; }' > /tmp/rand.c
gcc -shared -o /tmp/rand.so /tmp/rand.c
export LD_PRELOAD=/tmp/rand.so
