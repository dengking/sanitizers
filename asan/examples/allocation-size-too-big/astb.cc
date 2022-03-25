// https://docs.microsoft.com/en-us/cpp/sanitizers/error-allocation-size-too-big?view=msvc-170
// example1.cpp
// allocation-size-too-big error
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int x = 1000;
int y = 1000;

[[noinline]] void bad_function()
{

    char *buffer = (char *)malloc(x * y * x * y); // Boom!

    memcpy(buffer, buffer + 8, 8);
}

int main(int argc, char **argv)
{
    bad_function();
    return 0;
}