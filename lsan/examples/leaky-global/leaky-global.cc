// https://github.com/llvm/llvm-project/blob/main/compiler-rt/test/lsan/TestCases/do_leak_check_override.cpp
#include <stdio.h>
#include <stdlib.h>
struct LeakyGlobal
{
    LeakyGlobal()
    {
        p = malloc(1337);
    }
    ~LeakyGlobal()
    {
        p = 0;
    }
    void *p;
};

LeakyGlobal leaky_global;
int main(int argc, char *argv[]) {}