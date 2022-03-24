// https://docs.microsoft.com/en-us/cpp/sanitizers/error-stack-use-after-scope?view=msvc-170
// example1.cpp
// stack-use-after-scope error
#include <stdbool.h>

int *gp;

bool b = true;

int main()
{
    if (b)
    {
        int x[5];
        gp = x + 1;
    }
    return *gp; // Boom!
}