#include <stdlib.h>

#ifdef __cplusplus
extern "C"
{
#endif
    const char *__asan_default_options()
    {
        return "detect_leaks=1";
    }
#ifdef __cplusplus
}
#endif

void Baz()
{
    malloc(5);
}

int main()
{
    Baz();
    {
        auto *p = new int;
    } // leak p
}
