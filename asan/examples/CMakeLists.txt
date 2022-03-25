cmake_minimum_required(VERSION 3.10)

set(CMAKE_C_COMPILER "/Users/dengkai01/chromium/src/third_party/llvm-build/Release+Asserts/bin/clang")
set(CMAKE_CXX_COMPILER "/Users/dengkai01/chromium/src/third_party/llvm-build/Release+Asserts/bin/clang++")
set(CMAKE_LINKER "/Users/dengkai01/chromium/src/third_party/llvm-build/Release+Asserts/bin/lld")

# Set a default build type if none was specified
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  message("Setting build type to 'Debug' as none was specified.")
  set(CMAKE_BUILD_TYPE Debug CACHE STRING "Choose the type of build." FORCE)
  # Set the possible values of build type for cmake-gui
  set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release"
    "MinSizeRel" "RelWithDebInfo")
endif()

# set the project name
project(asan-examples)

# set the C++ standard to C++ 11
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_C_STANDARD 11)

set (CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fno-omit-frame-pointer -fsanitize=address")
set (CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-omit-frame-pointer -fsanitize=address")
set (CMAKE_LINKER_FLAGS_DEBUG "${CMAKE_LINKER_FLAGS_DEBUG} -fno-omit-frame-pointer -fsanitize=address")

# use-after-free
add_subdirectory(heap-use-after-free)
add_subdirectory(stack-use-after-return)
add_subdirectory(stack-use-after-scope)
add_subdirectory(leak)
# param-overlap
add_subdirectory(memcpy-param-overlap)
add_subdirectory(strncat-param-overlap)

add_subdirectory(double-free)

# overflow-underflow
add_subdirectory(stack-buffer-overflow)
add_subdirectory(stack-buffer-underflow)
add_subdirectory(global-buffer-overflow)
add_subdirectory(heap-buffer-overflow)
add_subdirectory(calloc-overflow)

#alloc-dealloc
add_subdirectory(alloc-dealloc-mismatch)
add_subdirectory(new-delete-type-mismatch)

# other
add_subdirectory(allocation-size-too-big)

add_subdirectory(static-initialization-order-fiasco)

add_subdirectory(wild-pointer)

