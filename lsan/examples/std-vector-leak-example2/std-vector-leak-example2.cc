// https://github.com/google/sanitizers/wiki/AddressSanitizerContainerOverflow
#include <vector>
std::vector<int *> *v;
int main(int argc, char **argv)
{
    v = new std::vector<int *>;
    v->push_back(new int[10]);
    v->push_back(new int[20]);
    v->push_back(new int[30]);
    v->push_back(new int[40]);
    v->pop_back(); // The last element leaks now.
    v = 0;
}