官方文档: [AddressSanitizerInitializationOrderFiasco](https://github.com/google/sanitizers/wiki/AddressSanitizerInitializationOrderFiasco)



源代码来自: https://github.com/google/sanitizers/wiki/AddressSanitizerInitializationOrderFiasco

运行方式:

```shell
ASAN_OPTIONS=check_initialization_order=true:strict_init_order=true /Users/dengkai01/github/sanitizers/asan/examples/build/initialization-order-checker/strict-init-order-check/strict-init-order-check 
```


没有触发。

