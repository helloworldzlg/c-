#include <iostream>
#include <string>

using namespace std;

class Fish
{
private:

public:
    Fish()
    {
        cout << "this is Fish's constructor" << endl;
    }

    virtual ~Fish()
    {
        cout << "this is Fish's deconstructor" << endl;
    }

    void swim()
    {
        cout << "this is Fish's swim" << endl;
    }
};

class Tuna : public Fish
{
public:
    Tuna()
    {
        cout << "this is Tuna's constructor" << endl;
    }

    ~Tuna()
    {
        cout << "this is Tuna's deconstructor" << endl;
    }
};

void my_fish(Fish *p_fish)
{
    p_fish->swim();
}

void delete_fish(Fish *p_fish)
{
    delete p_fish;
}

int main()
{
    Tuna *p_tuna = new Tuna();

    delete_fish(p_tuna);

    Tuna tuna;    

    return 0;
}