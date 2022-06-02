#include <map>
#include <unordered_map>
std::map<int, bool> *m;
std::unordered_map<int, bool> *m2;
int main(int argc, char **argv)
{
    m = new std::map<int, bool>;
    m2 = new std::unordered_map<int, bool>;
    m = 0;
    m2 = 0;
}