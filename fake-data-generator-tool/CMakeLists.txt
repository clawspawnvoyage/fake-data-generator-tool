cmake_minimum_required(VERSION 3.10)
project(FakeDataGeneratorTool)

set(CMAKE_CXX_STANDARD 17)

add_executable(fake_data_generator
    src/main.cpp
    src/generator.cpp
    src/generator.h
)

target_include_directories(fake_data_generator PRIVATE src)