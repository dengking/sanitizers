cmake_minimum_required(VERSION 3.5)

project(hello_library)


############################################################
# Create a library
############################################################

#Generate the shared library from the library sources
add_library(hello_library SHARED 
    src/Hello.cpp
)

target_include_directories(hello_library
    PUBLIC 
        ${PROJECT_SOURCE_DIR}/include
)

############################################################
# Create an executable
############################################################

# Add an executable with the above sources
add_executable(dynamic_lib_driven_main
    src/main.cpp
)

# link the new hello_library target with the hello_binary target
target_link_libraries( dynamic_lib_driven_main
    PRIVATE 
        hello_library
)
