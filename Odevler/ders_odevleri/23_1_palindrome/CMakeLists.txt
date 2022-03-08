cmake_minimum_required(VERSION 3.20)
project(23_1_palindrome C)

set(CMAKE_C_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/../..)

add_subdirectory("D:/Programming Lectures CSDernegi/odevler" "D:/Programming Lectures CSDernegi/odevler")

add_executable(23_1_palindrome
        "23_1_palindrome.c"
)

target_link_libraries(23_1_palindrome futility)