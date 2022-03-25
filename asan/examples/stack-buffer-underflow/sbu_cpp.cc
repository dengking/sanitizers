// https://docs.microsoft.com/en-us/cpp/sanitizers/error-stack-buffer-underflow?view=msvc-170
// example2.cpp
// stack-buffer-underflow error
#include <thread>
int main()
{
    auto t = std::thread([&]()
    {
        int subscript = -1;
        volatile char stack_buffer[42];
        stack_buffer[subscript] = 42;

        return 0; 
    });
    t.join();

}