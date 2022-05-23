#include <cstdlib>

#ifdef __cplusplus
extern "C"
{
#endif
    const char *__asan_default_options()
    {
        return "halt_on_error=false:log_path=./asan.log";
    }
#ifdef __cplusplus
}
#endif

void heap_buffer_overflow()
{
    char *p = new char[10];

    srand(p[11]); // heap buffer overflow - read

    p[11] = rand(); // heap buffer overflow - write
}
int heap_use_after_free()
{
    char *x = (char *)malloc(10 * sizeof(char));
    free(x);

    // ...

    return x[5]; // Boom!
}
int main()
{
    heap_buffer_overflow();
    heap_use_after_free();
}