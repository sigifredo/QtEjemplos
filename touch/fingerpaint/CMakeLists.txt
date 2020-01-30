project(fingerpaint)
cmake_minimum_required(VERSION 3.1.0)

include("config/project.cmake")
include("config/deps.cmake")

set(MOC_HDRS
include/MainWindow.hpp
include/ScribbleArea.hpp
)

set(SRCS
src/main.cpp
src/MainWindow.cpp
src/ScribbleArea.cpp
)

qt5_wrap_cpp(MOC_SRCS ${MOC_HDRS})

add_executable(${PROJECT_NAME} ${MOC_SRCS} ${SRCS})

qt5_use_modules(${PROJECT_NAME} Core Widgets PrintSupport)
