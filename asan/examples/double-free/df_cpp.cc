// https://docs.microsoft.com/en-us/cpp/sanitizers/error-double-free?view=msvc-170
// example1.cpp
// double-free error
int main()
{

    int *x = new int[42];
    delete[] x;

    // ... some complex body of code

    delete[] x;
    return 0;
}