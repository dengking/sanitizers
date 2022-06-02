// https://github.com/llvm/llvm-project/blob/main/compiler-rt/test/lsan/TestCases/do_leak_check_override.cpp
#include <stdio.h>
#include <stdlib.h>
struct LeakyGlobal
{
    LeakyGlobal()
    {
        member_ = malloc(1337);
    }
    ~LeakyGlobal()
    {
        member_ = 0;
    }
    void *member_;
};

LeakyGlobal global;

int main(int argc, char *argv[])
{
}