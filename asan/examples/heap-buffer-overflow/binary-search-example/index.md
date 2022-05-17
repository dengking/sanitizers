# binary-search-example

windows: Microsoft Visual Studio Professional 2022 (64 位) - Preview 版本 17.2.0 Preview 4.0

macOS: clang 13.1.6 arm64-apple-darwin21.3.0

|               | windows                                                      | macOS    |
| ------------- | ------------------------------------------------------------ | -------- |
| debug build   | out of range exception(windows debug版标准库实现了运行时检查) | 触发asan |
| release build | 触发asan                                                     |          |

