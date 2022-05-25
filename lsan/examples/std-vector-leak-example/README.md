这个例子是在https://github.com/google/sanitizers/wiki/AddressSanitizerContainerOverflow中提出的。

macOS M1 pro: 

```
ASAN_OPTIONS=detect_leaks=1 /Users/dengkai01/github/sanitizers/asan/examples/build/leak/leak 
==36688==AddressSanitizer: detect_leaks is not supported on this platform.
zsh: abort      ASAN_OPTIONS=detect_leaks=1 
```

不支持



windows:

不支持



Linux:

无法检查出泄漏

