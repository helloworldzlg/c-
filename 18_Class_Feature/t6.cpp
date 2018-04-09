#include <iostream>

class Base
{
public:
    int a;
};

class Derived : public Base
{
public:
    int b;
};

int main()
{
    Derived *p1 = new Derived();
    Base *p2 = static_cast<Base*>(p1);

    Base *p3 = new Base();
    Derived *p4 = static_cast<Derived*>(p3);

    int aa = 10;
    double bb = static_cast<double>(aa);

    double cc = 3.14f;
    int dd = static_cast<int>(cc);
}