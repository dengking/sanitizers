// example1.cpp
// heap-use-after-free error
#include <stdlib.h>

int main()
{
    char *x = (char *)malloc(10 * sizeof(char));
    free(x);

    // ...

    return x[5]; // Boom!
}