cmake_minimum_required(VERSION 3.20)

project(HelloWxWidgets)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(wxWidgets REQUIRED COMPONENTS core base)

include(${wxWidgets_USE_FILE})

add_executable(
    HelloWxWidgets
    src/main.cpp
)

target_link_libraries(
    HelloWxWidgets
    ${wxWidgets_LIBRARIES}
)