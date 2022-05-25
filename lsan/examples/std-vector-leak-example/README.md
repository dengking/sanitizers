这个例子是在 https://github.com/google/sanitizers/wiki/AddressSanitizerContainerOverflow 中提出的，由于std::vector的实现上采用了lazy-deallocate技术，因此如果container没有采用annotation特殊的实现，lsan是很难发现这个问题的。

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

