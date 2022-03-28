// https://docs.microsoft.com/en-us/cpp/sanitizers/error-alloc-dealloc-mismatch?view=msvc-170
// example1.cpp
// alloc-dealloc-mismatch error
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    if (argc != 2)
        return -1;

    switch (atoi(argv[1]))
    {

    case 1:
        delete[](new int[10]);
        break;
    case 2:
        printf("2: runtime error\n");
        delete (new int[10]); // Boom!
        break;
    default:
        printf("arguments: 1: no error 2: runtime error\n");
        return -1;
    }

    return 0;
}
