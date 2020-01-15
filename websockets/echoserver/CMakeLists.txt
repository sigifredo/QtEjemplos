project(echoserver)
cmake_minimum_required(VERSION 3.1.0)

include_directories(${CMAKE_BINARY_DIR} .)

find_package(Qt5 COMPONENTS Core WebSockets)

set(MOC_HDRS
echoserver.h
)

set(SRCS
echoserver.cpp
)

qt5_wrap_cpp(MOC_SRCS ${MOC_HDRS})

add_executable(echoserver ${MOC_SRCS} ${SRCS} main.cpp)

qt5_use_modules(echoserver Core WebSockets)
