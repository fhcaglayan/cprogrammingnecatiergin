cmake_minimum_required(VERSION 3.20)
project(21_1_linear_search_donald_knuth C)

set(CMAKE_C_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/../..)

add_subdirectory("D:/Programming Lectures CSDernegi/odevler" "D:/Programming Lectures CSDernegi/odevler")

add_executable(21_1_linear_search_donald_knuth
        21_1_linear_search_donald_knuth.c
)

target_link_libraries(21_1_linear_search_donald_knuth futility)