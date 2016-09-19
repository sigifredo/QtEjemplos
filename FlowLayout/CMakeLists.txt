project(flowlayout)
cmake_minimum_required(VERSION 2.8.3)

find_package(Qt4 REQUIRED QtCore QtGui)
include( ${QT_USE_FILE} )
include_directories( ${CMAKE_BINARY_DIR} ${QT_INCLUDES} include)

set (MOC_HDRS
flowlayout.h
window.h
)

set (SRCS
flowlayout.cpp
main.cpp
window.cpp
)

qt4_wrap_cpp(MOC_SRCS ${MOC_HDRS})

add_executable(flowlayout ${MOC_SRCS} ${SRCS})
target_link_libraries(flowlayout ${QT_LIBRARIES})
