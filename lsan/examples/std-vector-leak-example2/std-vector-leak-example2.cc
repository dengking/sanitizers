#include <vector>
std::vector<int *> *global;
int main(int argc, char **argv)
{
    global = new std::vector<int *>;
    global->push_back(new int[10]);
    global->push_back(new int[20]);
    global->push_back(new int[30]);
    global->push_back(new int[40]);
    global->pop_back(); // The last element leaks now.
    return 0;
}