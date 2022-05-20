#include <stdlib.h>

void bad_foo()
{
    int *a = (int *)malloc(40);
    a[10] = 1;
}

int main()
{
    bad_foo();
}
