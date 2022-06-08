#include <iostream>
using namespace std;

class Base
{
public:
    virtual void printf()
    {
        cout << __FUNCTION__ << endl;
    }
};

class A : public Base
{
public:
    virtual void FuncA(int a)
    {
        cout << __FUNCTION__ << a << endl;
    }
};

class B : public Base
{
public:
    virtual void FuncB()
    {
        cout << __FUNCTION__ << endl;
    }

    virtual void FuncC(int a)
    {
        cout << __FUNCTION__ << a << endl;
    }
};

int main()
{
    auto a = new A();
    a->FuncA(10);
    auto b = (B *)a;
    b->FuncB();
}