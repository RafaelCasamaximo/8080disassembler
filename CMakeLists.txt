
cmake_minimum_required(VERSION 2.8)
project(8080disassembler)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "")
set(sources
    src/disassembler/disassembler.hpp
    src/disassembler/disassembler.cpp
)

link_libraries(stdc++fs)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ./bin)
# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ./bin)
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ./bin)

add_executable( 8080disassembler src/main.cpp ${sources} )