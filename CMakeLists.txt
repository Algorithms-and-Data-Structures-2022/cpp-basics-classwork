# This is the top-level CMakeLists.txt file

cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

project(classwork CXX)

# C++ standard specification
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Helpers
include(CMakePrintHelpers)
include(cmake/CompilerWarnings.cmake)

# Options
option(ENABLE_COMPILER_WARNINGS "Project compile warnings." ON)

cmake_print_variables(CMAKE_BUILD_TYPE ENABLE_COMPILER_WARNINGS CMAKE_CXX_FLAGS)

# Executables
add_executable(run_${PROJECT_NAME} main.cpp)

# Warnings
if (ENABLE_COMPILER_WARNINGS)
    message(STATUS "Compiler warnings: enabled")
    add_library(project_warnings INTERFACE)
    set_project_warnings(project_warnings)

    target_link_libraries(run_${PROJECT_NAME} PRIVATE project_warnings)
endif (ENABLE_COMPILER_WARNINGS)
