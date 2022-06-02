// https://github.com/google/sanitizers/wiki/AddressSanitizerContainerOverflow
#include <vector>
std::vector<int *> *global;
int main(int argc, char **argv)
{
    global = new std::vector<int *>;

    global->push_back(new int[10]);
    global->push_back(new int[20]);
    global->push_back(new int[30]);
    global->push_back(new int[40]);
    global = 0;
    {
        auto *local = new std::vector<int *>;
        local->push_back(new int[10]);
        local->push_back(new int[20]);
        local->push_back(new int[30]);
        local->push_back(new int[40]);
        local = 0;
    }
}