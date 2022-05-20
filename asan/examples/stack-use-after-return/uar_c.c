// https://docs.microsoft.com/en-us/cpp/sanitizers/error-stack-use-after-return?view=msvc-170
// example1.cpp
// stack-use-after-return error


#ifdef __cplusplus
extern "C"
{
#endif
    const char* __asan_default_options()
    {
        return "detect_stack_use_after_return=1";
    }
#ifdef __cplusplus
}
#endif


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