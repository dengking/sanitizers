// https://docs.microsoft.com/en-us/cpp/sanitizers/error-double-free?view=msvc-170
// example2.cpp
// double-free error
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{

    char *x = (char *)malloc(10 * sizeof(char));
    memset(x, 0, 10);
    int res = x[argc];
    free(x);

    // ... some complex body of code

    free(x + argc - 1); // Boom!
    return res;
}