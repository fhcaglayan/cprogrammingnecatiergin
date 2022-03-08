cmake_minimum_required(VERSION 3.20)
project(22_3_maximum_sub_array C)

set(CMAKE_C_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/../..)

add_subdirectory("D:/Programming Lectures CSDernegi/odevler" "D:/Programming Lectures CSDernegi/odevler")

add_executable(22_3_maximum_sub_array
        22_3_maximum_sub_array_kadane.c
)

target_link_libraries(22_3_maximum_sub_array futility)