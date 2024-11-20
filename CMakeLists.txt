cmake_minimum_required(VERSION 3.29)
project(ExamenParcial3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Lenguaje_C++
        Implementación_C++/main.cpp
        Implementación_C++/estudiante.h
        Implementación_C++/estudiante.cpp
        Implementación_C++/asistencia.h)
