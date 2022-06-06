class C
{
    int member_{0};
};

C *global;
int main()
{
    // leak four time
    global = new C;
    global = new C;
    global = new C;
    global = new C;
    global = 0;
}
