// https://kristerw.blogspot.com/2018/06/
#include <stdlib.h>

#ifdef __cplusplus
extern "C"
{
#endif
    const char *__asan_default_options()
    {
        return "detect_invalid_pointer_pairs=2";
    }
#ifdef __cplusplus
}
#endif

int main(void)
{
    char *p = (char *)malloc(42);
    char *q = (char *)malloc(42);

    int tmp = p < q; // Error

    free(p);
    free(q);

    return tmp;
}