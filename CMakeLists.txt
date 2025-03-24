cmake_minimum_required(VERSION 3.26)
project(pomodoroCLI)

set(CMAKE_CXX_STANDARD 23)

add_executable(pomodoroCLI main.cpp
        Pomodoro.cpp
        Pomodoro.h
        Break.cpp
        Break.h
        Timer.cpp
        Timer.h)
