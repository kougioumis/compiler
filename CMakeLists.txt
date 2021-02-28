cmake_minimum_required(VERSION 3.17)
project(compiler)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(compiler
        lex.yy.c
        symbols_table.c
        symbols_table.h
        syntactic_analyzer.tab.c
        syntactic_analyzer.tab.h
        test.cpp
        test1.cpp)
