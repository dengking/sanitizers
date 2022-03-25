// https://docs.microsoft.com/en-us/cpp/sanitizers/error-heap-buffer-overflow?view=msvc-170
// example2.cpp
// heap-buffer-overflow error
class Parent
{
public:
    int field;
};

class Child : public Parent
{
public:
    int extra_field;
};

int main(void)
{
    Parent *p = new Parent;
    Child *c = (Child *)p; // Intentional error here!
    c->extra_field = 42;

    return 0;
}