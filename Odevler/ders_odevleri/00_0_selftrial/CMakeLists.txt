cmake_minimum_required(VERSION 3.20)
project(00_0_selftrial C)

set(CMAKE_C_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/../..)

add_subdirectory("D:/Programming Lectures CSDernegi/odevler" "D:/Programming Lectures CSDernegi/odevler")

add_executable(00_0_selftrial
        "00_0_selftrial.c"
)

target_link_libraries(00_0_selftrial futility)