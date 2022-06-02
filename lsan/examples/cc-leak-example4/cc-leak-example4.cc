class C
{
    int member_{0};
};

int main()
{
    {
        auto *local = new C;
        local = new C;
        local = new C;
        local = new C;
    }
}
