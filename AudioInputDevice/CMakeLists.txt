project(AudioInput)
cmake_minimum_required(VERSION 2.8)

find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Multimedia REQUIRED)

include_directories(include)

qt5_wrap_cpp(MOC_SRCS include/audioinput.h)

add_executable(audioinput src/audioinput.cpp src/main.cpp)
target_link_libraries(audioinput ${Qt5Core_LIBRARIES} ${Qt5Widgets_LIBRARIES}${Qt5Multimedia_LIBRARIES})
