#!/bin/bash
find . -name "*.c" | gcc -Wall -pedantic -Werror -Wextra -c *.c | ar -rc liball.a *.o | ar -t liball.a |ranlib liball.a
