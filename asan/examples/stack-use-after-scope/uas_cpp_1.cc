// example2.cpp
// stack-use-after-scope error
#include <functional>

int main()
{
    std::function<int()> f;
    {
        int x = 0;
        f = [&x]()
        {
            return x; // Boom!
        };
    }
    return f(); // Boom!
}
