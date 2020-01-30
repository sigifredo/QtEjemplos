project(pinchzoom)
cmake_minimum_required(VERSION 3.1.0)

include("config/project.cmake")
include("config/deps.cmake")

set(MOC_HDRS
include/GraphicsView.hpp
include/Mouse.hpp
)

set(SRCS
src/GraphicsView.cpp
src/main.cpp
src/Mouse.cpp
)

qt5_add_resources(RSRCS resources/mice.qrc)
qt5_wrap_cpp(MOC_SRCS ${MOC_HDRS})

add_executable(pinchzoom ${HDRS} ${MOC_SRCS} ${SRCS} ${RSRCS})

qt5_use_modules(pinchzoom Core Widgets)
