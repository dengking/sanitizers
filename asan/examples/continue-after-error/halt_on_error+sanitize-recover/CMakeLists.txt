
add_executable(halt_on_error+sanitize-recover halt_on_error+sanitize-recover.cc)
target_compile_options(halt_on_error+sanitize-recover  PRIVATE "-fsanitize-recover=address")