cmake_minimum_required (VERSION 3.13)

set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type")

project (pcg)

include (GNUInstallDirs)

add_executable(cppref sample/cppref-sample.cpp)
target_include_directories(cppref PRIVATE include)
install(TARGETS cppref DESTINATION ${CMAKE_INSTALL_BINDIR})

enable_testing()
add_test(NAME cppref COMMAND cppref)
