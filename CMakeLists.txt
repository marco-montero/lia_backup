cmake_minimum_required (VERSION 3.0)
project (LIA C CXX)

enable_testing()

set (CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/modules")

# Check C++11 support flags
include (CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
if (COMPILER_SUPPORTS_CXX11)
  set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
elseif (COMPILER_SUPPORT_CXX0X)
  set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
else ()
  message (STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
endif ()

# set (CMAKE_CXX_FLAGS "${CMAKE_CXX_COMPILER} -Wall -pedantic -Wextra")

# Project include directory
include_directories (${PROJECT_SOURCE_DIR}/include)

# Adding Boost dependencies
find_package (Boost REQUIRED
  COMPONENTS system
  filesystem
  )

include_directories (${Boost_INCLUDE_DIRS})

# Build application
add_subdirectory (src)

# Build tests
add_subdirectory (tests)
