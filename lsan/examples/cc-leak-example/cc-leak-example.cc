class C
{
    int member_{0};
};

C *global;
int main()
{
    global = new C;
    global = 0; // leak once
    return 0;
}
