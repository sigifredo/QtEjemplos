project(puzzle)
cmake_minimum_required(VERSION 2.8.3)

find_package(Qt5Core)
find_package(Qt5Widgets)
# find_package(Qt5 REQUIRED QtCore QtGui QtDeclarative)

include_directories( ${CMAKE_BINARY_DIR} ${Qt5Core_INCLUDE_DIRS} ${Qt5Widgets_INCLUDE_DIRS} include )
add_definitions(${Qt5Core_DEFINITIONS} ${Qt5Widgets_DEFINITIONS} -fPIC)

set (SRCS
src/main.cpp
src/mainwindow.cpp
src/pieceslist.cpp
src/puzzlewidget.cpp
)

qt5_wrap_cpp(MOC_SRCS
include/mainwindow.h
include/pieceslist.h
include/puzzlewidget.h
)

qt5_add_resources(RESOURCES resources/puzzle.qrc)

add_executable(puzzle ${MOC_SRCS} ${SRCS} ${RESOURCES})
target_link_libraries(puzzle Qt5::Core Qt5::Widgets)
