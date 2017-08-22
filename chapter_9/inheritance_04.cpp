#include <iostream>
#include <string>

using namespace std;

class Fish
{
private:
    bool m_isfreshwater;

public:
    Fish(bool isfreshwater)
    {
        m_isfreshwater = isfreshwater;
    }

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
    Tuna() : Fish(false)
    {
        cout << "Tuna constructor!" << endl;
        //m_isfreshwater = false;
    }    
};

class Carp : public Fish
{
public:
    Carp() : Fish(true)
    {
        cout << "Carp constructor!" << endl;
        //m_isfreshwater = true;
    }
};

int main()
{
    Tuna tuna;

    tuna.swim();

    Carp carp;

    carp.swim();

    tuna.Fish::swim();

    carp.Fish::swim();

    // carp.m_isfreshwater = false;
    // tuna.m_isfreshwater = true;

    // cout << "carp ";
    // carp.swim();

    // cout << "tuna ";
    // tuna.swim();

    return 0;
}