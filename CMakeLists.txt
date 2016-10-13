cmake_minimum_required (VERSION 3.0)
project (Test)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5Core)

add_executable (App main.cpp)

set_property(TARGET App PROPERTY  CXX_STANDARD 14)

target_link_libraries(App Qt5::Core)
