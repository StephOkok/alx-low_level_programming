#!/bin/bash
find . -type f -name '*.c' 
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
ar -rc liball.a *.o
