#!/usr/bin/env bash

cd c && gcc -O3 -march=native -o gen gen.c && ./gen && cd ..
cd go && go build gen.go && ./gen && cd ..
cd c++ && g++ -O3 -march=native -o gen gen.cpp && ./gen && cd ..
cd java && java src/com/gen/Main.java && cd ..
cd php && php gen.php && cd ..
cd js && node gen.js && cd ..
cd python && python3.7 gen.py && cd ..