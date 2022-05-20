在 [AddressSanitizerFlags](https://github.com/google/sanitizers/wiki/AddressSanitizerFlags) 介绍了两种设置run-time flags的方式，本章验证 `__asan_default_options` 的方式。



| code                                                         | 简介                                                         |
| ------------------------------------------------------------ | ------------------------------------------------------------ |
| [detect_container_overflow.cc](https://github.com/dengking/sanitizers/blob/main/asan/examples/asan-default-options/detect_container_overflow.cc) | 验证的是 `detect_container_overflow` 标志。验证程序源自 [AddressSanitizerContainerOverflow](https://github.com/google/sanitizers/wiki/AddressSanitizerContainerOverflow) 。 |
| [halt_on_error_log_path.cc](https://github.com/dengking/sanitizers/blob/main/asan/examples/asan-default-options/halt_on_error_log_path.cc) | 验证的是 `halt_on_error`、`log_path` 标志。 验证程序源自 [__asan_default_options has no effect on vs2019](https://github.com/google/sanitizers/issues/1247) |
| [strstr_strict.c](https://github.com/dengking/sanitizers/blob/main/asan/examples/strict-string-check/strstr_strict.c) | 验证的是 `strict_string_checks` 标志，这是c程序。            |








