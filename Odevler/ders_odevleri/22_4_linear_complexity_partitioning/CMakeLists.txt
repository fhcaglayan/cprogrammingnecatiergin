cmake_minimum_required(VERSION 3.20)
project(22_4_linear_complexity_partitioning C)

set(CMAKE_C_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/../..)

add_subdirectory("D:/Programming Lectures CSDernegi/odevler" "D:/Programming Lectures CSDernegi/odevler")

add_executable(22_4_linear_complexity_partitioning
        22_4_linear_complexity_partitioning_improved.c
)

target_link_libraries(22_4_linear_complexity_partitioning futility)