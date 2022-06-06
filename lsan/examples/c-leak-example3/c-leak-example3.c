#include <stdlib.h>

int main()
{
    // leak once
    {
        void *local = malloc(7);
    }
    return 0;
}
