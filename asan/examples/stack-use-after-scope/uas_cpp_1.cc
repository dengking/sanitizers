// https://docs.microsoft.com/en-us/cpp/sanitizers/error-stack-use-after-scope?view=msvc-170
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
