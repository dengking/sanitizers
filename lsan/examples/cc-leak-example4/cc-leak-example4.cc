class C
{
    int member_{0};
};

int main()
{
    // leak once
    {
        auto *local = new C;
    }
    // leak four time
    {
        auto *local = new C;
        local = new C;
        local = new C;
        local = new C;
    }
}
