// https://docs.microsoft.com/en-us/cpp/sanitizers/error-stack-buffer-underflow?view=msvc-170
// example1.cpp
// stack-buffer-underflow error
#include <stdio.h>

int main()
{
    int subscript = -1;
    char buffer[42];
    buffer[subscript] = 42; // Boom!

    return 0;
}