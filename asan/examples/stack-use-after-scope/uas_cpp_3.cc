// https://docs.microsoft.com/en-us/cpp/sanitizers/error-stack-use-after-scope?view=msvc-170
// example4.cpp
// stack-use-after-scope error
#include <iostream>

struct A
{
    A(const int &v)
    {
        p = &v;
    }
    void print()
    {
        std::cout << *p;
    }
    const int *p;
};

void explicit_temp()
{
    A a(5); // the temp for 5 is no longer live;
    a.print();
}

void temp_from_conversion()
{
    double v = 5;
    A a(v); // local v is no longer live.
    a.print();
}

int main()
{
    explicit_temp();
    temp_from_conversion();
}