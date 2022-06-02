#include <stdio.h>
#include <stdlib.h>
struct LeakyGlobal
{
    LeakyGlobal()
    {
        p = malloc(1337);
    }
    ~LeakyGlobal()
    {
        p = 0;
    }
    void *p;
};

LeakyGlobal leaky_global;
int main(int argc, char *argv[]) {}