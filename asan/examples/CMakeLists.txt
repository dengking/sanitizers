cmake_minimum_required(VERSION 3.10)

# set(CMAKE_C_COMPILER "/Users/dengkai01/chromium/src/third_party/llvm-build/Release+Asserts/bin/clang")
# set(CMAKE_CXX_COMPILER "/Users/dengkai01/chromium/src/third_party/llvm-build/Release+Asserts/bin/clang++")
# set(CMAKE_LINKER "/Users/dengkai01/chromium/src/third_party/llvm-build/Release+Asserts/bin/lld")

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

# set the C++ standard to C++ 17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 11)
set (CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fsanitize=address")
set (CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fsanitize=address")
set (CMAKE_LINKER_FLAGS_DEBUG "${CMAKE_LINKER_FLAGS_DEBUG} -fsanitize=address")

# use-after-free
add_subdirectory(heap-use-after-free)
add_subdirectory(stack-use-after-return)
add_subdirectory(stack-use-after-scope)

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
add_subdirectory(container-overflow)

#alloc-dealloc
add_subdirectory(alloc-dealloc-mismatch)
add_subdirectory(new-delete-type-mismatch)

# other
add_subdirectory(allocation-size-too-big)

add_subdirectory(initialization-order-checker)

add_subdirectory(wild-pointer)

add_subdirectory(asan-default-options)

add_subdirectory(invalid-pointer-pairs)

add_subdirectory(strict-string-check)

add_subdirectory(turning-off-instrumentation)

add_subdirectory(dynamic-shared-library)

add_subdirectory(continue-after-error)

add_subdirectory(false-negatives)

add_subdirectory(deallocation-of-nonallocated-memory)

add_subdirectory(run-time-flags)

add_subdirectory(test)

