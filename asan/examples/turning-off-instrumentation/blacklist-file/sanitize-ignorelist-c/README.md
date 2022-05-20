
这个例子源自:

https://releases.llvm.org/13.0.1/tools/clang/docs/SanitizerSpecialCaseList.html

## macOS

运行方式:

```
clang -fsanitize=address -fsanitize-blacklist=ignorelist.txt foo.c ; ./a.out
```

从运行结果来看，这种方式是能够生效的。
