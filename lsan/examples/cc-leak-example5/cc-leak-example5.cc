class C
{
    int member_{0};
};

int main()
{
    // leak four time
    {
        auto *local = new C;
        auto *local2 = new C;
        auto *local3 = new C;
        auto *local4 = new C;
    }
}
