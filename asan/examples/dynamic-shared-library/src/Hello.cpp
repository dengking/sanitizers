#include <iostream>

#include "shared/Hello.h"

void heap_buffer_overflow()
{
    double *p = new double[]{1, 2, 3}; // creates an array of type double[3]
    std::cout << p[3] << std::endl;
    delete[] p;
}
