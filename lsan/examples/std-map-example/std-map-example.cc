#include <map>
#include <unordered_map>

std::map<int, bool> *global;

int main(int argc, char **argv)
{
    global = new std::map<int, bool>;
    global = 0;
    {
        auto *local = new std::map<int, bool>;
    }
    return 0;
}