cmake_minimum_required(VERSION 3.10)
project(CuentaBancaria)

set(CMAKE_CXX_STANDARD 17)

# Agrega carpeta include para que CMake encuentre CuentaBancaria.h
include_directories(include)

# Agrega el ejecutable con los archivos fuente
add_executable(CuentaBancaria
    src/main.cpp
    src/CuentaBancaria.cpp
)
