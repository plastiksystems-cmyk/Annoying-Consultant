cmake_minimum_required(VERSION "4.2.3")
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(consultant)
add_executable(consultant "debug/main.cpp" "core/cscharacter.cpp" "core/csmath.cpp")

target_include_directories(consultant PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/headers")
target_include_directories(consultant PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/characters")