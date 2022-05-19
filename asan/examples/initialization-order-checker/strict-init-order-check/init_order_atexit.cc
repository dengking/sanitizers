// https://github.com/llvm/llvm-project/blob/main/compiler-rt/test/asan/TestCases/init-order-atexit.cpp

#include <stdio.h>
#include <stdlib.h>

void AccessC();

class A
{
public:
    A() {}
    ~A()
    {
        AccessC();
        printf("PASSED\n");
    }
    // CHECK-NOT: AddressSanitizer
    // CHECK: PASSED
};

A a;

class B
{
public:
    B() { exit(1); }
    ~B() {}
};

B b;