project(qmedia-player)
cmake_minimum_required(VERSION 2.8.3)

find_package(Qt4 REQUIRED QtCore QtGui Phonon)
include( ${QT_USE_FILE} )
include_directories( ${CMAKE_BINARY_DIR} ${QT_INCLUDES} include)

set (MOC_HDRS
mediaplayer.h
)

set (SRCS
main.cpp
mediaplayer.cpp
)

qt4_add_resources(RESOURCES mediaplayer.qrc)
qt4_wrap_cpp(MOC_SRCS ${MOC_HDRS})
qt4_wrap_ui(UI_SRCS settings.ui)

message(${PHONON_LIBRARIES} ${QT_LIBRARIES})

add_executable(qmediaplayer ${RESOURCES} ${UI_SRCS} ${MOC_SRCS} ${SRCS})
target_link_libraries(qmediaplayer ${QT_LIBRARIES} ${PHONON_LIBRARIES})
