// https://docs.microsoft.com/en-us/cpp/sanitizers/error-global-buffer-overflow?view=msvc-170
// file: example1-main.c
// global-buffer-overflow error

// AddressSanitizer reports a buffer overflow at the first line
// in function main() in all cases, REGARDLESS of the order in
// which the object files: a.obj, b.obj, and c.obj are linked.
#include <stdio.h>
double x[5];

int main()
{
    int rc = (int)x[5]; // Boom!
    printf("%i\n", &rc);
    return rc;
}