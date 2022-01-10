#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -c -fPIC -share -o liball.so
