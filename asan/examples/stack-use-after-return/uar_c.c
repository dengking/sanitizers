// https://docs.microsoft.com/en-us/cpp/sanitizers/error-stack-use-after-return?view=msvc-170
// example1.cpp
// stack-use-after-return error
char *x;

void foo()
{
    char stack_buffer[42];
    x = &stack_buffer[13];
}

int main()
{
    foo();
    *x = 42; // Boom!
    return 0;
}