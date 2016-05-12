project(network-chat)
cmake_minimum_required(VERSION 2.8.3)

find_package(Qt4 REQUIRED QtCore QtNetwork QtGui)
include( ${QT_USE_FILE} )
include_directories( ${QT_INCLUDES} ${CMAKE_BINARY_DIR} include )

set (MOC_HDRS
include/chatdialog.h
include/client.h
include/connection.h
include/peermanager.h
include/server.h
)

set (SRCS
src/chatdialog.cpp
src/client.cpp
src/connection.cpp
src/main.cpp
src/peermanager.cpp
src/server.cpp
)

qt4_wrap_cpp(MOC_SRCS ${MOC_HDRS})
qt4_wrap_ui(UI_SRCS ui/chatdialog.ui)

add_executable(network-chat ${MOC_SRCS} ${SRCS} ${UI_SRCS} src/main.cpp)
target_link_libraries(network-chat ${QT_LIBRARIES})

