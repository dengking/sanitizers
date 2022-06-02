#include <map>
#include <unordered_map>
std::unordered_map<int, bool> *global;
int main(int argc, char **argv)
{
    global = new std::unordered_map<int, bool>;
    global = 0;
    {
        auto *local = new std::unordered_map<int, bool>;
    }
    return 0;
}