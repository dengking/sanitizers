在 [llvm-project](https://github.com/llvm/llvm-project)/[compiler-rt](https://github.com/llvm/llvm-project/tree/main/compiler-rt)/[test](https://github.com/llvm/llvm-project/tree/main/compiler-rt/test)/[asan](https://github.com/llvm/llvm-project/tree/main/compiler-rt/test/asan)/[TestCases](https://github.com/llvm/llvm-project/tree/main/compiler-rt/test/asan/TestCases) 中提供了多个`strict_string_checks`的例子，这些例子的名称中都包含"strict"，本章从中选取了两个典型的例子。

从实践来看，在开启了这种能力后，实际报错如下: 

macOS: heap-buffer-overflow

