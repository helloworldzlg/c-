#include <iostream>
#include <string>

using namespace std;

class Fish
{
private:

public:
    //virtual void swim()
    void swim()
    {
        cout << "this is Fish swim!!!" << endl;
    }
};

class Tuna : public Fish
{
public:
    void swim()
    {
        cout << "this is Tuna swim!!!" << endl;
    }
};

void my_fish(Fish &i_fish)
{
    i_fish.swim();
}

int main()
{
    Tuna tuna;

    tuna.swim();
    my_fish(tuna);

    return 0;
}