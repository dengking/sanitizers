// https://developer.apple.com/documentation/xcode/deallocation-of-nonallocated-memory

#include <stdlib.h>
int main()
{
    int value = 42;
    free(&value); // Error: free called on stack allocated variable
}