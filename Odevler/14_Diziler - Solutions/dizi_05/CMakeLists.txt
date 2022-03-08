cmake_minimum_required(VERSION 3.20)
project(dizi_05 C)

set(CMAKE_C_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/../..)

add_subdirectory("D:/Programming Lectures CSDernegi/odevler" "D:/Programming Lectures CSDernegi/odevler")

add_executable(dizi_05
        dizi_05.c
)

target_link_libraries(dizi_05 futility)