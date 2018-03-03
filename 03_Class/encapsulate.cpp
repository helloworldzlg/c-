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
        cout << "this is Human constructor" << endl;
    }

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

    void set_name(string name)
    {
        m_name = name;
    }

    string get_name(void)
    {
        return m_name;
    }

    void set_age(int age)
    {
        m_age = age;
    }

    int get_age(void)
    {
        return m_age;
    }

    void human_info()
    {
        cout << "name = " << this->m_name << endl;
        cout << "age = " << this->m_age << endl;
    }
};

int main()
{
    Human Tom = Human();

    Tom.set_name("Tom");
    Tom.set_age(28);

    Tom.human_info();

    Human Lucy = Human("Lucy", 26);

    Lucy.human_info();

    return 0;
}
