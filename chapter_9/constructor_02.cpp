#include <iostream>
#include <string>

using namespace std;

class Human
{
private:
    string m_name;
    int m_age;

public:
    Human()
    {
        cout << "this is Human's constructor" << endl;
    }

    ~Human()
    {
        cout << "this is Human's deconstructor" << endl;
    }
};

class Teacher : public Human
{
private:
    int classes;

public:
    Teacher()
    {
        cout << "this is Teacher's constructor" << endl;
    }

    ~Teacher()
    {
        cout << "this is Teacher's deconstructor" << endl;
    }
};

int main()
{
    Teacher MsZhang;

    return 0;
}