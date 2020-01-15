project(echoclient)
cmake_minimum_required(VERSION 3.1.0)

include_directories(${CMAKE_BINARY_DIR} .)

find_package(Qt5 COMPONENTS Core WebSockets)

set(MOC_HDRS
echoclient.h
)

set(SRCS
echoclient.cpp
)

qt5_wrap_cpp(MOC_SRCS ${MOC_HDRS})

add_executable(echoclient ${MOC_SRCS} ${SRCS} main.cpp)

qt5_use_modules(echoclient Core WebSockets)
