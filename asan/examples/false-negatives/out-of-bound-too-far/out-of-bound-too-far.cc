int main()
{
    char *a = new char[100];
    char *b = new char[1000];
    a[500] = 0; // may end up somewhere in b
}