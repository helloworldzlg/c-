#include <iostream>

class Parent
{
public:
    Parent():numInParent(1111)
    {}

    virtual void Foo()
    {};

    virtual void Boo()
    {};

private:
    int numInParent;
};

class Child: public Parent
{
public:
    Child():numInChild(2222)
    {}

    virtual void Foo()
    {}

    virtual void Coo()
    {}

    int numInChild;
};

int main()
{
    Parent p1;
    Child c1;

    return 0;
}