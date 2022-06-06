#include <vector>
std::vector<int *> *global;
int main(int argc, char **argv)
{
    global = new std::vector<int *>;
    global = 0; // leak
    {
        auto *local = new std::vector<int *>;
    } // leak
    return 0;
}