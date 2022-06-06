// https://github.com/google/sanitizers/wiki/AddressSanitizerLeakSanitizer

#include <stdlib.h>

void *global;

int main()
{
    global = malloc(7); 
    return 0;
}