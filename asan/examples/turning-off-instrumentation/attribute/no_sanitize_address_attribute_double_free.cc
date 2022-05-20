#include <stdlib.h>
#include <string.h>
#include "no_sanitize_address_attribute.h"

// https://docs.microsoft.com/en-us/cpp/sanitizers/error-double-free?view=msvc-170
// double-free error
ATTRIBUTE_NO_SANITIZE_ADDRESS
void ThisFunctionWillNotBeInstrumented()
{
    int *x = new int[42];
    delete[] x;

    // ... some complex body of code

    delete[] x;
}

// example1.cpp

int main()
{
    ThisFunctionWillNotBeInstrumented();
}