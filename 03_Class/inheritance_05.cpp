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

    void swim(int length)
    {
        cout << "I can swim length: " << length << endl;
    }
};

class Tuna : public Fish
{
public:
    Tuna() : Fish(false)
    {
        cout << "Tuna constructor!" << endl;
        Fish::swim();
    }

    void swim()
    {
        cout << "this is Tuna's swim" << endl;
    }
};

int main()
{
    Tuna tuna;

    tuna.swim();

    tuna.Fish::swim(100);

    return 0;
}