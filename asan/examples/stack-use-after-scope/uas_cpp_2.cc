// https://docs.microsoft.com/en-us/cpp/sanitizers/error-stack-use-after-scope?view=msvc-170
// example3.cpp
// stack-use-after-scope error
#include <stdio.h>

struct IntHolder
{
    explicit IntHolder(int *val = 0) : val_(val) {}
    ~IntHolder()
    {
        printf("Value: %d\n", *val_); // Bom!
    }
    void set(int *val) { val_ = val; }
    int *get() { return val_; }

    int *val_;
};

int main(int argc, char *argv[])
{
    // It's incorrect to use "x" inside the IntHolder destructor,
    // because the lifetime of "x" ends earlier. Per the C++ standard,
    // local lifetimes end in reverse order of declaration.
    IntHolder holder;
    int x = argc;
    holder.set(&x);
    return 0;
}