#include <iostream>
#include <memory>
#include <stdio.h>

class Foo
{

public:
    explicit Foo(int num)
    {
        data_ = num;
    }
    void Function()
    {
        printf("Obj is %p, data=%d\n", this, data_);
    }
    ~Foo()
    {
        std::cout << "~Foo()" << std::endl;
    }

private:
    int data_;
};

std::unique_ptr<Foo> foo_u_ptr = nullptr;
Foo *pfoo_raw_ptr = nullptr;

void f()
{
    foo_u_ptr = std::make_unique<Foo>(1);
    pfoo_raw_ptr = foo_u_ptr.get();
    pfoo_raw_ptr->Function();
    foo_u_ptr = std::make_unique<Foo>(2);
    pfoo_raw_ptr->Function(); // dangling
}

int main()
{

    f();
    return 0;
}