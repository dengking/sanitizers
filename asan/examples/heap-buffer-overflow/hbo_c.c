// https://docs.microsoft.com/en-us/cpp/sanitizers/error-heap-buffer-overflow?view=msvc-170
// example1.cpp
// heap-buffer-overflow error
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    char *x = (char *)malloc(10 * sizeof(char));
    memset(x, 0, 10);
    int res = x[argc * 10]; // Boom!

    free(x);
    return res;
}