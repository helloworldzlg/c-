#include <iostream>

using namespace std;

class Fish
{
public:
    void Swim()
    {
        cout << "this is Fish no param swim function" << endl;
    }

    void Swim(bool inputparam)
    {
        cout << "this is Fish with param swim function" << endl;
    }  

private:
    bool FreshWaterFish;
};

class Tuna: public Fish
{
public:
    using Fish::Swim;

    void Swim()
    {
        cout << "this is Tuna no param swim function" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Tuna tuna_1;

    tuna_1.Swim();
    //tuna_1.Fish::Swim();
    tuna_1.Swim(false);

    //Tuna::Swim();

    return 0;
}