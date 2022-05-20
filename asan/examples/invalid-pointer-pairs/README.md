
windows: Microsoft Visual Studio Professional 2022 (64 位) - Preview 版本 17.2.0 Preview 4.0

macOS: clang 13.1.6 arm64-apple-darwin21.3.0

在上述编译器中验证，发现这些例子都没有触发asan报错，也就是说，在上述版本的编译器中，不支持`detect_invalid_pointer_pairs`.

