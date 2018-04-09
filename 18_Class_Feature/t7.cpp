#include <iostream>

using namespace std;

class Fish
{
public:
    virtual void swim()
    {
        cout << "Fish swim in water" << endl;
    }

    virtual ~Fish()
    {}
};

class Tuna : public Fish
{
public:
    void swim()
    {
        cout << "tuna swims real fast in the sea" << endl;
    }
};

class Carp : public Fish
{
public:
    void swim()
    {
        cout << "carp swims real slow in the lake" << endl;
    }
};

void DetectFishType(Fish *fish)
{
    Tuna* p1 = dynamic_cast<Tuna *>(fish);
    if (p1)
        p1->swim();

    Carp* p2 = dynamic_cast<Carp *>(fish);
    if (p2)
        p2->swim();
}

int main()
{
    Tuna tuna;
    Carp carp;

    DetectFishType(&tuna);
    DetectFishType(&carp);
}