Get the full list of run-time flags supported in your compiler, as described in [AddressSanitizerFlags # Run-time flags](https://github.com/google/sanitizers/wiki/AddressSanitizerFlags#run-time-flags) :


> To get the idea of what's supported in your version, run
>
> ```c++
> ASAN_OPTIONS=help=1 ./a.out
> ```
>
> 



macOS、Linux:

```
ASAN_OPTIONS=help=1 ./run-time-flags
```

windows:
```
set ASAN_OPTIONS= help=1 
```
