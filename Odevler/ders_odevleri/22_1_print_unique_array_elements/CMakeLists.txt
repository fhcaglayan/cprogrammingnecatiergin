cmake_minimum_required(VERSION 3.20)
project(22_1_print_unique_array_elements C)

set(CMAKE_C_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/../..)

add_subdirectory("D:/Programming Lectures CSDernegi/odevler" "D:/Programming Lectures CSDernegi/odevler")

add_executable(22_1_print_unique_array_elements
        22_1_print_unique_array_elements.c
)

target_link_libraries(22_1_print_unique_array_elements futility)