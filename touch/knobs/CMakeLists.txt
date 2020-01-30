project(knobs)
cmake_minimum_required(VERSION 3.1.0)

include("config/project.cmake")
include("config/deps.cmake")

set(SRCS
src/Knob.cpp
src/main.cpp
)

add_executable(${PROJECT_NAME} ${HDRS} ${SRCS})

qt5_use_modules(${PROJECT_NAME} Core Widgets)
