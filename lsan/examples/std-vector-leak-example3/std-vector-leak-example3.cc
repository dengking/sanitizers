#include <vector>
std::vector<int *> global;
int main(int argc, char **argv)
{
    global.push_back(new int[10]);
    global.push_back(new int[20]);
    global.push_back(new int[30]);
    global.push_back(new int[40]);
    {
        std::vector<int *> local;
        local.push_back(new int[10]);
        local.push_back(new int[20]);
        local.push_back(new int[30]);
        local.push_back(new int[40]);
    }
}