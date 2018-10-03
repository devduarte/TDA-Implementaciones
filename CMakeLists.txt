cmake_minimum_required(VERSION 3.12)
project(TDA C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(TDA
        main.c
        colaDinamica.h
        ColaEstatica.h
        listasimple.h
        pilaEstatica.h)
