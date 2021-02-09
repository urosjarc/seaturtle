cmake_minimum_required(VERSION 3.13)
project(smallsdl VERSION 0.0.1 LANGUAGES C)
set(CMAKE_C_STANDARD 11)


enable_testing()

add_subdirectory(src)
add_subdirectory(test)