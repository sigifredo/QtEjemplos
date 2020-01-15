project(sslechoclient)
cmake_minimum_required(VERSION 3.1.0)

include_directories(${CMAKE_BINARY_DIR} .)

find_package(Qt5 COMPONENTS Core WebSockets)

set(MOC_HDRS
sslechoclient.h
)

set(SRCS
sslechoclient.cpp
)

qt5_wrap_cpp(MOC_SRCS ${MOC_HDRS})

add_executable(sslechoclient ${MOC_SRCS} ${SRCS} main.cpp)

qt5_use_modules(sslechoclient Core WebSockets)
