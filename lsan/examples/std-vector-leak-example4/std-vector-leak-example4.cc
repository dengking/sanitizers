// https://github.com/llvm/llvm-project/blob/main/compiler-rt/test/lsan/TestCases/do_leak_check_override.cpp
// https://github.com/google/sanitizers/wiki/AddressSanitizerContainerOverflow
#include <vector>
struct LeakyGlobal
{
    LeakyGlobal()
    {
        v = new std::vector<int *>;
    }
    ~LeakyGlobal()
    {
        // v = 0;
    }
    std::vector<int *> *v;
};

LeakyGlobal g;

int main(int argc, char **argv)
{
}