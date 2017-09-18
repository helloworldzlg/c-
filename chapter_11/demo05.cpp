#include <iostream>
#include <string>

using namespace std;

class Fish
{
public:
    Fish()
    {
        cout << "this is Fish's constructor" << endl;
    }

    virtual Fish *clone() = 0;
    virtual void swim() = 0;
};

class Tuna : public Fish
{
public:
    Tuna()
    {
        cout << "this is Tuna's constructor" << endl;
    }

    Fish *clone()
    {
        return new Tuna(*this);
    }

    void swim()
    {
        cout << "this is Tuna's swim" << endl;
    } 
};

class Crap : public Fish
{
public:
    Crap()
    {
        cout << "this is Crap's constructor" << endl;
    }

    Fish *clone()
    {
        return new Crap(*this);
    }

    void swim()
    {
        cout << "this is Crap's swim" << endl;
    } 
};

int main()
{
    int i;
    Fish *array[4] = {NULL};
    Fish *new_array[4] = {NULL};

    array[0] = new Tuna();
    array[1] = new Crap();
    array[2] = new Tuna();
    array[3] = new Crap();

    for (i = 0; i < 4; i++)
    {
        array[i]->swim();
    }

    new_array[0] = array[0]->clone();
    new_array[1] = array[1]->clone();
    new_array[2] = array[2]->clone();
    new_array[3] = array[3]->clone();

    for (i = 0; i < 4; i++)
    {
        new_array[i]->swim();
    }

    for (i = 0; i < 4; i++)
    {
        delete array[i];
        delete new_array[i];
    }
    return 0;
}
