// https://github.com/google/sanitizers/wiki/AddressSanitizerLeakSanitizer

#include <stdlib.h>

void *global;

int main()
{

    global = malloc(7);
    global = 0; // The memory is leaked here.
    return 0;
}