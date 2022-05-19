# AddressSanitizerInitializationOrderFiasco

官方文档: [AddressSanitizerInitializationOrderFiasco](https://github.com/google/sanitizers/wiki/AddressSanitizerInitializationOrderFiasco) 

本节的源代码来自 [AddressSanitizerInitializationOrderFiasco](https://github.com/google/sanitizers/wiki/AddressSanitizerInitializationOrderFiasco) ，这个源代码非常简洁，通过下面的实验，能够帮助读者掌握asan的"Loose init-order checking"、"Strict init-order checking"。关于 **static initialization order fiasco** 本文不再赘述，本文强调的是如何复现 [AddressSanitizerInitializationOrderFiasco](https://github.com/google/sanitizers/wiki/AddressSanitizerInitializationOrderFiasco) 中展示的运行情况。



## Loose init-order checking

由于 **static initialization order fiasco** 和translation unit的编译顺序有关，直接使用编译器进行编译会更加便利。

### 实验一

触发 **static initialization order fiasco**，验证loose init-order checking能够发现问题: 

编译指令：

```c++s
clang++ -fsanitize=address -g a.cc b.cc --std=c++17
```

为了触发 **static initialization order fiasco**，先编译a.cc。

运行指令:

```shell
ASAN_OPTIONS=check_initialization_order=true ./a.out
```

实验结果:

asan loose init-order checking 能够发现错误并及时报出。

### 实验二

不触发 **static initialization order fiasco**，验证loose init-order checking不会抛出错误:

编译指令：

```c++s
clang++ -fsanitize=address -g b.cc a.cc --std=c++17
```

为了不触发 **static initialization order fiasco**，先编译b.cc。

运行指令:

```shell
ASAN_OPTIONS=check_initialization_order=true ./a.out
```

实验结果:

asan loose init-order checking 没有抛出错误。

## Strict init-order checking

在这种模式下，及时没有发生 **static initialization order fiasco**，asan也会抛出错误，所以我们验证这种情况:

### 实验三

不触发 **static initialization order fiasco**，验证strict init-order checking会抛出错误:

编译指令：

```c++s
clang++ -fsanitize=address -g b.cc a.cc --std=c++17
```

为了不触发 **static initialization order fiasco**，先编译b.cc。

运行指令:

```shell
ASAN_OPTIONS=check_initialization_order=true:strict_init_order=true ./a.out
```

实验结果:

asan strict init-order checking 抛出错误。