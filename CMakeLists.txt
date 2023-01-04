cmake_minimum_required(VERSION 3.22)
project(payrollTax VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")

if(PROJECT_SOURCE_DIR STREQUAL PROJECT_BINARY_DIR)
  message(FATAL_ERROR "In source builds are not allowed")
endif()

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
  set(CMAKE_CXX_EXTENSIONS OFF)
  include(CTest)

  find_package(Doxygen)
  if(Doxygen_FOUND)
    add_subdirectory(docs)
  else()
    message(STATUS "Doxygen not found, not building docs")
  endif()
endif()

add_subdirectory(src)

add_subdirectory(lib)

target_link_libraries(payrollTax lib)

enable_testing()

if(BUILD_TESTING)
  add_subdirectory(test)
endif()

if(MSVC)
  foreach(target ${TARGET_LIST})
    target_compile_options(${target} PUBLIC /W4 /permissive)
  endforeach()
else()
  foreach(target ${TARGET_LIST})
    target_compile_options(${target} PUBLIC -Wall -Wextra -pedantic -Weverything)
  endforeach()
endif()

