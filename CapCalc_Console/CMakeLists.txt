cmake_minimum_required(VERSION 3.6 FATAL_ERROR)
set (PROJECT capcalc)

project(${PROJECT} VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif(NOT CMAKE_BUILD_TYPE)

set(CMAKE_CXX_FLAGS_RELEASE "-O0 -W -std=c++0x -Wno-error=deprecated-declarations -Wno-error=misleading-indentation")
set(CMAKE_CXX_IMPLICIT_LINK_DIRECTORIES /usr/local/lib ${CMAKE_CXX_IMPLICIT_LINK_DIRECTORIES})

file( GLOB project_SRC
  "./*.cpp"
  "./*.h"
)

add_executable(${PROJECT}
    ${project_SRC}
    )
