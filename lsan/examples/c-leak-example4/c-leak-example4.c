// https://github.com/google/sanitizers/wiki/AddressSanitizerLeakSanitizer

#include <stdlib.h>
void FooBar()
{
    malloc(7); // leak once
}

void Baz()
{
    malloc(5); // leak once
}

int main()
{
    FooBar();
    Baz();
    return 0;
}