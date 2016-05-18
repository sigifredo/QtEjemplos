find_package(Qt4 REQUIRED QtCore QtNetwork QtGui)

include( ${QT_USE_FILE} )
include_directories( ${CMAKE_BINARY_DIR} ${QT_INCLUDES} include)

set(DEPS_LIBS ${QT_LIBRARIES})
