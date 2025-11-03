cmake_minimum_required(VERSION 3.11)

project(Sorter)

include_directories(${PROJECT_SOURCE_DIR}/include)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src SRC_LIST)

add_executable(main main.cpp ${SRC_LIST})
