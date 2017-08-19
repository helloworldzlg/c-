#include <iostream>
#include <string>

using namespace std;

class Human
{
private:
    string m_name;
    int m_age;

public:
    Human(string name, int age)
    {
        cout << "this is Human constructor" << endl;

        m_name = name;
        m_age  = age;
    }

    ~Human()
    {
        cout << "this is Human deconstructor" << endl;
    }

    void human_info()
    {
        cout << "name = " << this->m_name << endl;
        cout << "age = " << this->m_age << endl;
    }  
};

int main()
{
    Human Tom = Human("Tom", 28);

    Tom.human_info();

    return 0;
}