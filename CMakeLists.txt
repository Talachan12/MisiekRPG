cmake_minimum_required(VERSION 3.26)
project(polimofrizmcwiczenia)

set(CMAKE_CXX_STANDARD 17)

add_executable(polimofrizmcwiczenia main.cpp
        klasy_postaci.h
        postaci_rpg.cpp
        gra.cpp
        gra.h
)
