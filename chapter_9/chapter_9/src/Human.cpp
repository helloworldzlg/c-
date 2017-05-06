#include "Human.h"

Human::Human()
{
    m_iAge    = 0;
    cout << "Human::Human" << endl;
}

Human::~Human()
{
    cout << "Human::~Human" << endl;
}

void Human::setAge(int age)
{
    m_iAge = age;
}

int Human::getAge()
{
    return m_iAge;
}

void Human::setName(string name)
{
    m_strName = name;
}

string Human::getName()
{
    return m_strName;
}

void Human::introduceSelf()
{
    cout << "m_iAge = " << m_iAge << endl;
    cout << "m_strName = " << m_strName << endl;
}

