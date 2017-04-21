#include <iostream>

using namespace std;

class Fish
{
public:
    Fish(bool FreshWaterFish)
    {
        this->FreshWaterFish = FreshWaterFish;
    }

    void Swim()
    {
        if (FreshWaterFish)
        {
            cout << "swim in lake" << endl;
        }
        else
        {
            cout << "swim in sea" << endl;
        }
    }

private:
    bool FreshWaterFish;
};

class Tuna: public Fish
{
public:
    Tuna(): Fish(false)
    {
        //FreshWaterFish = false;
    }

    void Swim()
    {
        cout << "this is Tuna swim" << endl;
    }
};

class Carp: public Fish
{
public:
    Carp(): Fish(true)
    {
        //FreshWaterFish = true;
    }

    void Swim()
    {
        cout << "this is Carp swim" << endl;
        Fish::Swim();
    }    
};

int main(int argc, char const *argv[])
{
    Carp myLunch;
    Tuna myDinner;

    cout << "Getting my food to swim" << endl;

    myLunch.Swim();
    myDinner.Swim();
    return 0;
}