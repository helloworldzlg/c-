#include <iostream>
#include <string>

using namespace std;

class base_1
{
public:
    int a, b;

    void dosomething(){};
};

class base_2
{
public:
    int a, b;

    virtual void dosomething(){};
};

int main()
{
    cout << "size of base_1 is: " << sizeof(base_1) << endl;  // = 8
    cout << "size of base_2 is: " << sizeof(base_2) << endl;  // = 16  (void *)p = 8   (64bit OS system)

    return 0;
}