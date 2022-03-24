#include <stdbool.h>
// example1.cpp
// stack-use-after-scope error
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