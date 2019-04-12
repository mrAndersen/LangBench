cmake_minimum_required(VERSION 3.13)
project(LangBench)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "-lssl -lcrypto")
set(CMAKE_C_FLAGS "-lssl -lcrypto")

add_executable(generate c/gen.c)