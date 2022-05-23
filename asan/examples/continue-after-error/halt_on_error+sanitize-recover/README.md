stackoverflow [Address Sanitizer with Visual C++: ignore read buffer overflows while still catching write buffer overflows](https://stackoverflow.com/questions/69719273/address-sanitizer-with-visual-c-ignore-read-buffer-overflows-while-still-catc) # [A](https://stackoverflow.com/a/69721555) 中描述的方法1:

> To continue after an error, `-fsanitize-recover=address` option should be used. From [FAQ](https://github.com/google/sanitizers/wiki/AddressSanitizer#faq):
>
> > Q: Can AddressSanitizer continue running after reporting first error?
> >
> > A: Yes it can, AddressSanitizer has recently got continue-after-error mode. This is somewhat experimental so may not yet be as reliable as default setting (and not as timely supported). Also keep in mind that errors after the first one may actually be spurious. To enable continue-after-error, compile with `-fsanitize-recover=address` and then run your code with `ASAN_OPTIONS=halt_on_error=0`.
>
> This option is not yet supported by MSVC compiler. There's an [issue](https://developercommunity.visualstudio.com/t/add-fsanitize-recoveraddress-support-to-asan/1459414) to add it.
>
> If it would have worked, a custom handler could have been installed that would inspect whether it is read or write error, ignore read error, and report write error.

测试结果:

1、macOS 生效

