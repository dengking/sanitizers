// https://github.com/google/sanitizers/wiki/AddressSanitizerLeakSanitizer

#include <stdlib.h>
void FooBar()
{
    malloc(7);
}

void Baz()
{
    malloc(5);
}

void *global;

int main()
{
    FooBar();
    Baz();
    global = malloc(7);
    global = 0; // The memory is leaked here.
    return 0;
}