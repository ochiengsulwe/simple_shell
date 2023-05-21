#!/bin/bash

echo "MAINFILE"
read MAIN
echo "CFILE"
read CFILE
echo "EXEC"
read EXEC
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 $MAIN $CFILE -o $EXEC
