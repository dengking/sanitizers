# container-overflow

windows: Microsoft Visual Studio Professional 2022 (64 位) - Preview 版本 17.2.0 Preview 4.0

macOS: clang 13.1.6 arm64-apple-darwin21.3.0

`container-overflow.cc`

|               | windows                                | macOS    |
| ------------- | -------------------------------------- | -------- |
| debug build   | AddressSanitizer: heap-buffer-overflow | AddressSanitizer: container-overflow |



`container-overflow2.cc`

|             | windows  | macOS                                |
| ----------- | -------- | ------------------------------------ |
| debug build | 正常运行 | AddressSanitizer: container-overflow |

