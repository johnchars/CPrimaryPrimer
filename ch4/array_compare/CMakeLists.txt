cmake_minimum_required(VERSION 3.5)
project(array_compare)
add_compile_options(-std=c++11)
#find_package(Qt4 REQUIRED)

#include_directories(${QT_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR})

set(array_compare_SRCS main.cpp)

#qt4_automoc(${array_compare_SRCS})
add_executable(array_compare ${array_compare_SRCS})
#target_link_libraries(array_compare ${QT_QTCORE_LIBRARY})

#install(TARGETS array_compare RUNTIME DESTINATION bin)
