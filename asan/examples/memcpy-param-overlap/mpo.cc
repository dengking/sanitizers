// https://docs.microsoft.com/en-us/cpp/sanitizers/error-memcpy-param-overlap?view=msvc-170
// example1.cpp
// memcpy-param-overlap error
#include <string.h>

[[noinline]] void bad_function()
{
    char buffer[] = "hello";

    memcpy(buffer, buffer + 1, 5); // BOOM!
}

int main(int argc, char **argv)
{
    bad_function();
    return 0;
}