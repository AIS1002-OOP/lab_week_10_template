cmake_minimum_required(VERSION 3.15)
project(person_cli)

set(CMAKE_CXX_STANDARD 17)

add_executable(person_cli main.cpp)

add_subdirectory(tests)
