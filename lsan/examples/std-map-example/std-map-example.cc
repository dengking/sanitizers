#include <map>
#include <unordered_map>
std::map<int, bool> *m;
int main(int argc, char **argv)
{
    m = new std::map<int, bool>;
    m = 0;
}