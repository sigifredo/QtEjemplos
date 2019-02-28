project(sslechoserver)
cmake_minimum_required(VERSION 3.1.0)

include_directories(${CMAKE_BINARY_DIR} .)

find_package(Qt5 COMPONENTS Core WebSockets)

set(MOC_HDRS
sslechoserver.h
)

set(SRCS
sslechoserver.cpp
)

qt5_add_resources(RESOURCES securesocketclient.qrc)
qt5_wrap_cpp(MOC_SRCS ${MOC_HDRS})

add_executable(sslechoserver ${MOC_SRCS} ${SRCS} ${RESOURCES} main.cpp)

qt5_use_modules(sslechoserver Core WebSockets)
