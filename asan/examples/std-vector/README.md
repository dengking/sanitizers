# STL

STL container为了追求性能，它的memory management策略往往比较复杂，一般会采取pre-allocat、lazy-deallocate技术，这些技术为sanitizer带来了挑战，典型的例子就是在 [AddressSanitizerContainerOverflow](https://github.com/google/sanitizers/wiki/AddressSanitizerContainerOverflow) 提出的如下例子：

```C++
#include <vector>
std::vector<int *> *v;
int main(int argc, char **argv) {
  v = new std::vector<int *>;
  v->push_back(new int [10]);
  v->push_back(new int [20]);
  v->push_back(new int [30]);
  v->push_back(new int [40]);
  v->pop_back();  // The last element leaks now.
}
```

从实践来看，目前gcc lsan依然无法发现上述程序的泄漏。



## `std::vector`

`std::vector` 是C++工程师最常使用的容器之一，在使用sanitizer的时候，会遇到多个与`std::vector`有关的错误，下面是对examples中与`std::vector`有关的example的总结:

| example code                                                 |
| ------------------------------------------------------------ |
| [sanitizers](https://github.com/dengking/sanitizers)/[asan](https://github.com/dengking/sanitizers/tree/main/asan)/[examples](https://github.com/dengking/sanitizers/tree/main/asan/examples)/**[container-overflow](https://github.com/dengking/sanitizers/tree/main/asan/examples/container-overflow)**/ |
| [sanitizers](https://github.com/dengking/sanitizers)/[asan](https://github.com/dengking/sanitizers/tree/main/asan)/[examples](https://github.com/dengking/sanitizers/tree/main/asan/examples)/[heap-buffer-overflow](https://github.com/dengking/sanitizers/tree/main/asan/examples/heap-buffer-overflow)/[**binary-search-example**](https://github.com/dengking/sanitizers/tree/main/asan/examples/heap-buffer-overflow/binary-search-example)/ |
|                                                              |

上述例子是非常典型的`std::vector`相关的memory error，从实践来看，不同的编译器的处理方式是不同的，并且写法上的细微差别也会造成报错不同，掌握`std::vector`的实现细节 和 用法是理解sanitizer报出的错误的前提条件。



1、STL container pre-allocate技术；

2、capacity VS size

3、reserve VS resize

参考: 

1、stackoverflow [size vs capacity of a vector?](https://stackoverflow.com/questions/6296945/size-vs-capacity-of-a-vector)

