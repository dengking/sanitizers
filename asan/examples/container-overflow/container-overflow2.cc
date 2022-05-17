// https://github.com/google/sanitizers/wiki/AddressSanitizerContainerOverflow
#include <vector>
#include <assert.h>
typedef long T;
int main()
{
    std::vector<T> v;
    v.reserve(4); // I add this line to ensure the assertion below always be true
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    assert(v.capacity() >= 4);
    assert(v.size() == 3);
    T *p = &v[0];
    // Here the memory is accessed inside a heap-allocated buffer
    // but outside of the region `[v.begin(), v.end())`.
    return p[3]; // OOPS.
                 // v[3] could be detected by simple checks in std::vector.
                 // *(v.begin()+3) could be detected by a mighty debug iterator
                 // (&v[0])[3] can only be detected with AddressSanitizer or similar.
}
