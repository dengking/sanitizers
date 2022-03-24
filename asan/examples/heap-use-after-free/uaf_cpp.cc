// https://docs.microsoft.com/en-us/cpp/sanitizers/error-heap-use-after-free?view=msvc-170
// example2.cpp
// heap-use-after-free error

int main()
{
    char *buffer = new char[42];
    delete[] buffer;

    // ...

    buffer[0] = 42; // Boom!
    return 0;
}