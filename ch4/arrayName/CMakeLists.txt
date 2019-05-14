cmake_minimum_required(VERSION 2.6)
project(arrayname)
#find_package(Qt4 REQUIRED)

#include_directories(${QT_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR})

set(arrayName_SRCS main.cpp)

#qt4_automoc(${arrayName_SRCS})
add_executable(arrayname ${arrayName_SRCS})
#target_link_libraries(arrayname ${QT_QTCORE_LIBRARY})

#install(TARGETS arrayname RUNTIME DESTINATION bin)
