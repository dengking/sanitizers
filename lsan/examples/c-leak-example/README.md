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

能够检查出泄漏

