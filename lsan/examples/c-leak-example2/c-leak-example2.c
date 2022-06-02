// https://github.com/google/sanitizers/wiki/AddressSanitizerLeakSanitizer

#include <stdlib.h>

void *p;

int main()
{
    p = malloc(7);
    return 0;
}