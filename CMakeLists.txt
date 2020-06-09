cmake_minimum_required(VERSION 3.16)
project(tlpi)

set(CMAKE_CXX_STANDARD 17)

aux_source_directory(./lib/ LIB_SRC)
add_library(tlpi_test_lib ${LIB_SRC})


add_executable(tlpi main.cpp)

target_link_libraries(tlpi tlpi_test_lib)