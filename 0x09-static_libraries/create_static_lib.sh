#!/bin/bash

# Compile all .c files into .o files
for file in *.c
do
    gcc -c $file -o ${file%.c}.o
done

# Create a static library from the .o files
ar rcs liball.a *.o

# Remove the .o files
rm *.o
