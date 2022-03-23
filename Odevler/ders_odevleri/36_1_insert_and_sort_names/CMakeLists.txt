cmake_minimum_required(VERSION 3.20)
project(36_1_insert_and_sort_names C)

set(CMAKE_C_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/../..)

add_subdirectory("D:/Programming Lectures CSDernegi/odevler" "D:/Programming Lectures CSDernegi/odevler")

add_executable(36_1_insert_and_sort_names
        "36_1_insert_and_sort_names.c"
)

target_link_libraries(36_1_insert_and_sort_names futility)