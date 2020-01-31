project(dragdroprobot)
cmake_minimum_required(VERSION 3.1.0)

include("config/project.cmake")
include("config/deps.cmake")

set(SRCS
src/ColorItem.cpp
src/main.cpp
src/Robot.cpp
)

qt5_add_resources(RSRCS resources/robot.qrc)

add_executable(${PROJECT_NAME} ${SRCS} ${RSRCS})

qt5_use_modules(${PROJECT_NAME} Core Widgets)
