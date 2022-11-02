cmake_minimum_required(VERSION 3.23)
project(TemperatureConverter)

set(CMAKE_CXX_STANDARD 20)

# Change me to the path for catch.hpp
include_directories(/Users/mercer/CLionProjects)

add_executable(TemperatureConverter TemperatureConverterTest.cpp)
