// https://github.com/google/sanitizers/wiki/AddressSanitizerContainerOverflow
#include <vector>
std::vector<int *> *v;
int main(int argc, char **argv)
{
    v = new std::vector<int *>;
}