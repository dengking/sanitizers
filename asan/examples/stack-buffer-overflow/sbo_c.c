// https://docs.microsoft.com/en-us/cpp/sanitizers/error-stack-buffer-overflow?view=msvc-170
// example1.cpp
// stack-buffer-overflow error
#include <string.h>

int main(int argc, char **argv)
{
    char x[10];
    memset(x, 0, 10);
    int res = x[argc * 10]; // Boom! Classic stack buffer overflow

    return res;
}