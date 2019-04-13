# Language benchmark
On simple 1M array substring check after file load using default libraries

## C
gcc version 8.2.1
gcc -O3 -march=native -o gen gen.c

Result: C in 3ms - 17

## C++
gcc version 8.2.1
g++ -O3 -march=native -o gen gen.cpp

Result: C++ in 14ms - 17

## Java
openjdk 11.0.3 2019-04-16

Result: Java in 28ms - 17

## PHP
PHP 7.3.3 (cli) (built: Mar  6 2019 18:03:57) ( NTS )

Result: PHP in 35ms - 17

## NodeJS
v11.13.0

Result NodeJS in 34ms - 17

## Python3.7

Result: Python in 101ms - 17