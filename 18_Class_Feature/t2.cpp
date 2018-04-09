#include <iostream>

using namespace std;

class Base
{
public:
    Base(int i) : baseI(i) {};

    virtual void print(void)
    {
        cout << "Base print" << endl;
    }

    virtual void setI()
    {
        cout << "Base setI" << endl;
    }

    virtual ~Base()
    {
        cout << "Base deconstructor" << endl;
    }

private:
    int baseI;
};

typedef void (*Fun)(void);

int main()
{
    Base b(10);

    Fun vfprint = (Fun)*(int *)*(int *)(&b);
    vfprint();

    Fun vfsetI = (Fun)*((int *)(*(int *)(&b)) + 2);
    vfsetI();

    Fun vfbase = (Fun)*((int *)(*(int *)(&b)) + 4);
    vfbase();

    return 0;
}