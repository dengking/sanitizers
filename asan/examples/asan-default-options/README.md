在 [AddressSanitizerFlags](https://github.com/google/sanitizers/wiki/AddressSanitizerFlags) 介绍了两种设置run-time flags的方式，本章验证 `__asan_default_options` 的方式。使用的是 `detect_container_overflow` 标志，验证程序使用的是 [AddressSanitizerContainerOverflow](https://github.com/google/sanitizers/wiki/AddressSanitizerContainerOverflow) 。





