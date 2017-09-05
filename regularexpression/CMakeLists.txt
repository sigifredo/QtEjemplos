project( regularexpression )
cmake_minimum_required(VERSION 2.8)

find_package(Qt5 COMPONENTS Core Widgets)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
add_definitions( -DNDEBUG -Wall -O3 )

include_directories( ${CMAKE_BINARY_DIR} include build )

set(MOC_HDRS
include/regularexpressiondialog.h
)

set( SRCS
src/regularexpressiondialog.cpp
)

qt5_add_resources(RESOURCES resources/regularexpression.qrc)
qt5_wrap_cpp(MOC_SRCS ${MOC_HDRS})

add_executable(regularexpression ${RESOURCES} ${MOC_SRCS} ${SRCS} src/main.cpp)
qt5_use_modules(regularexpression Core Widgets)
target_link_libraries(regularexpression ${QT_LIBRARIES})
