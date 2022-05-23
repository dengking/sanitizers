int main()
{
    char *a = new char[1 << 20]; // 1MB
    delete[] a;                  // <<< "free"
    char *b = new char[1 << 28]; // 256MB
    delete[] b;                  // drains the quarantine queue.
    char *c = new char[1 << 20]; // 1MB
    a[0] = 0;                    // "use". May land in ’c’.
}