int main()
{
    int *a = new int[2]; // 8-aligned
    int *u = (int *)((char *)a + 6);
    *u = 1; // Access to range [6-9]
    return 0;
}