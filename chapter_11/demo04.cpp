#include <iostream>
#include <string>

using namespace std;

class base
{
public:
    int m_age;

    base()
    {
        cout << "this is base's constructor" << endl;
    }    
};

class base_1 : virtual public base 
{
public:
    int a, b;
    
    base_1()
    {
        cout << "this is base_1's constructor" << endl;
    } 

    void dosomething(){};
};

class base_2 : virtual public base 
{
public:
    int a, b;

    base_2()
    {
        cout << "this is base_2's constructor" << endl;
    } 

    virtual void dosomething(){};
};

class base_1_1 : public base_1, public base_2
{
public:
    base_1_1()
    {
        cout << "this is base_1_1's constructor" << endl;
    }
};

int main()
{
    base_1_1 temp;

    temp.m_age = 25;

    return 0;
}