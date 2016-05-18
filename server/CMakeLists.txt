project(server)
cmake_minimum_required(VERSION 2.8.3)

include("config/server.cmake")
include("config/deps.cmake")
include("config/install.cmake")

qt4_wrap_cpp(MOC_SRCS_CLIENT include/Client.hpp)
qt4_wrap_cpp(MOC_SRCS_SERVER include/Server.hpp include/Connection.hpp)

add_executable(client ${MOC_SRCS_CLIENT} src/Client.cpp src/main_client.cpp)
add_executable(server ${MOC_SRCS_SERVER} src/Server.cpp src/Connection.cpp src/main_server.cpp)
target_link_libraries(client ${QT_LIBRARIES})
target_link_libraries(server ${QT_LIBRARIES})
