#ifdef __cplusplus
extern "C"
{
#endif
    const char *__lsan_default_options()
    {
        return "help=1";
    }
#ifdef __cplusplus
}
#endif
int main()
{
    return 0;
}