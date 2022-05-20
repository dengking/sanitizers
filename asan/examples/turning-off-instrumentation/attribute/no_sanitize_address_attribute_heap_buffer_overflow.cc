#include <stdlib.h>
#include <string.h>
#include "no_sanitize_address_attribute.h"

// https://docs.microsoft.com/en-us/cpp/sanitizers/error-heap-buffer-overflow?view=msvc-170
// heap-buffer-overflow error
ATTRIBUTE_NO_SANITIZE_ADDRESS
void ThisFunctionWillNotBeInstrumented()
{
    char *x = (char *)malloc(10 * sizeof(char));
    memset(x, 0, 10);
    int res = x[2 * 10]; // Boom!

    free(x);
}

// example1.cpp

int main()
{
    ThisFunctionWillNotBeInstrumented();
}