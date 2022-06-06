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

int main()
{
    FooBar();
    Baz();
    return 0;
}