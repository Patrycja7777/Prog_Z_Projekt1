cmake_minimum_required(VERSION 3.20)

project(Projekt_1)

set(CMAKE_CXX_STANDARD 14)

add_executable(Projekt_1 main.cpp DoubleList.cpp Node.cpp
        Iterator.cpp
        Iterator.h
        Factory.h
        Factory.cpp)