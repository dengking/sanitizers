cmake_minimum_required(VERSION 3.10)


# Set a default build type if none was specified
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  message("Setting build type to 'Debug' as none was specified.")
  set(CMAKE_BUILD_TYPE Debug CACHE STRING "Choose the type of build." FORCE)
  # Set the possible values of build type for cmake-gui
  set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release"
    "MinSizeRel" "RelWithDebInfo")
endif()

# set the project name
project(lsan-examples)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 11)
set (CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fsanitize=leak")
set (CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fsanitize=leak")
set (CMAKE_LINKER_FLAGS_DEBUG "${CMAKE_LINKER_FLAGS_DEBUG} -fsanitize=leak")


add_subdirectory(run-time-flags)

add_subdirectory(c-leak-example)
add_subdirectory(c-leak-example2)

add_subdirectory(cc-leak-example)
add_subdirectory(cc-leak-example2)
add_subdirectory(cc-leak-example3)
add_subdirectory(cc-leak-example4)
add_subdirectory(cc-leak-example5)

add_subdirectory(oop-member-leak)
add_subdirectory(oop-member-leak2)

add_subdirectory(std-vector-leak-example)
add_subdirectory(std-vector-leak-example2)
add_subdirectory(std-vector-leak-example3)


add_subdirectory(std-map-example)
add_subdirectory(std-unordered-map-example)
