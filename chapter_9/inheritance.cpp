#include <iostream>
#include <string>

using namespace std;

class Fish
{
public:
    bool m_isfreshwater;

    void swim()
    {
        if (m_isfreshwater)
            cout << "is a fresh water fish!!!" << endl;
        else
            cout << "is a sea fish!!!" << endl;
    }    
};

class Tuna : public Fish
{
public:
    Tuna()
    {
        cout << "Tuna constructor!" << endl;
        m_isfreshwater = false;
    }    
};

class Carp : public Fish
{
public:
    Carp()
    {
        cout << "Carp constructor!" << endl;
        m_isfreshwater = true;
    }    
};

int main()
{
    Tuna tuna;

    tuna.swim();

    Carp carp;

    carp.swim();

    carp.m_isfreshwater = false;
    tuna.m_isfreshwater = true;

    cout << "carp ";
    carp.swim();

    cout << "tuna ";
    tuna.swim();

    return 0;
}