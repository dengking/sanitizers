// example3.cpp
// heap-buffer-overflow error
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

    char *hello = (char *)malloc(6);
    strcpy(hello, "hello");

    char *short_buffer = (char *)malloc(9);
    strncpy(short_buffer, hello, 10); // Boom!

    return short_buffer[8];
}