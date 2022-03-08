cmake_minimum_required(VERSION 3.20)
project(30_1_is_all_chars_unique C)

set(CMAKE_C_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/../..)

add_subdirectory("D:/Programming Lectures CSDernegi/odevler" "D:/Programming Lectures CSDernegi/odevler")

add_executable(30_1_is_all_chars_unique
        "30_1_is_all_chars_unique.c"
)

target_link_libraries(30_1_is_all_chars_unique futility)