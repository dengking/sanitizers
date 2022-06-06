class C
{
    int member_{0};
};

int main()
{
    // leak four time
    {
        auto *local = new C;
        local = nullptr;

        auto *local2 = new C;
        local2 = nullptr;

        auto *local3 = new C;
        local3 = nullptr;

        auto *local4 = new C;
        local4 = nullptr;
    }
}
