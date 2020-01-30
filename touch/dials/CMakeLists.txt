project(dials)
cmake_minimum_required(VERSION 3.1.0)

include("config/project.cmake")
include("config/deps.cmake")

set(SRCS
src/main.cpp
)

qt5_wrap_ui(UI_SRCS ui/dials.ui)

add_executable(${PROJECT_NAME} ${UI_SRCS} ${SRCS})

qt5_use_modules(${PROJECT_NAME} Core Widgets)
