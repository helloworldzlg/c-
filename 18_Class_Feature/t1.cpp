#include <iostream>

using namespace std;

class Base
{
public:
    virtual void print(void)
    {
        cout << "Base print" << endl;
    }
};

class Drive1 : public Base
{
public:
    void print(void)
    {
        cout << "Drive1 print" << endl;
    }
};

class Drive2 : public Base
{
public:
    void print(void)
    {
        cout << "Drive2 print" << endl;
    }
};

int main()
{
    Base *p1 = new Base();
    Base *p2 = new Drive1();
    Base *p3 = new Drive2();

    p1->print();
    p2->print();
    p3->print();

    delete p1;
    delete p2;
    delete p3;

    return 0;
}