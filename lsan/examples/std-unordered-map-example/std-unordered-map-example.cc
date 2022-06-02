#include <map>
#include <unordered_map>
std::unordered_map<int, bool> *m;
int main(int argc, char **argv)
{
    m = new std::unordered_map<int, bool>;
    m = 0;
}