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
option(ENABLE_COMPILER_WARNINGS "Project compile warnings." OFF)

cmake_print_variables(CMAKE_BUILD_TYPE ENABLE_COMPILER_WARNINGS CMAKE_CXX_FLAGS)

# Sources
file(GLOB CPP_SOURCES RELATIVE ${PROJECT_SOURCE_DIR} src/*.cpp)

# Executables
foreach (CPP_SOURCE ${CPP_SOURCES})
    get_filename_component(EXEC_NAME ${CPP_SOURCE} NAME_WE)

    add_executable(${EXEC_NAME} ${CPP_SOURCE})
endforeach (CPP_SOURCE ${CPP_SOURCES})

include_directories(include)

# Warnings
if (ENABLE_COMPILER_WARNINGS)
    message(STATUS "Compiler warnings: enabled")
    add_library(project_warnings INTERFACE)
    set_project_warnings(project_warnings)

    foreach (CPP_SOURCE ${CPP_SOURCES})
        get_filename_component(EXEC_NAME ${CPP_SOURCE} NAME_WE)
        target_link_libraries(${EXEC_NAME} PRIVATE project_warnings)
    endforeach (CPP_SOURCE ${CPP_SOURCES})
endif (ENABLE_COMPILER_WARNINGS)
