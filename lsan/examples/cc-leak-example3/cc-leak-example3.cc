class C
{
    int i_{0};
};

C *c;
int main()
{
    c = new C;
    c = new C;
    c = new C;
    c = new C;
}