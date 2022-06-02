class C
{
    int member_{0};
};

C *global;
int main()
{
    global = new C;
    return 0;
}
