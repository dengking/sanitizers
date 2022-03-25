// https://docs.microsoft.com/en-us/cpp/sanitizers/error-stack-buffer-overflow?view=msvc-170
// example3.cpp
// stack-buffer-overflow error
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

    Parent p;
    Child *c = (Child *)&p;
    c->extra_field = 42; // Boom !

    return 0;
}