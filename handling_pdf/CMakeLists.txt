project( handling_pdf )
cmake_minimum_required(VERSION 2.8)

include("config/hpdf_conf.cmake")
include("config/deps_conf.cmake")

set( HPDF_MOC_HDRS
include/Window.hpp
)

set( HPDF_SRCS
src/Window.cpp
src/main.cpp
)

qt4_wrap_cpp(HPDF_MOC_SRCS ${HPDF_MOC_HDRS})

set(HPDF_CODE
${HPDF_HDRS}
${HPDF_MOC_SRCS}
${HPDF_SRCS}
)

add_executable( hpdf ${HPDF_CODE} )
target_link_libraries(hpdf ${DEPS_LIBS})
