#include <iostream>

using namespace std;

class A
{
public:
    void print()
    {
        cout << "A print" << endl;
    }
};

void printAllData(const A& a)
{
    A& ra = const_cast<A&>(a);

    ra.print();
}

int main()
{
    A a;

    printAllData(a);

    return 0;
}