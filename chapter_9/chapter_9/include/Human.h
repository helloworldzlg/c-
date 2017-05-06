#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string>

using namespace std;

class Human
{
    public:
        Human();
        virtual ~Human();
        void setAge(int age);
        int getAge();

        void setName(string name);
        string getName();

        void introduceSelf();
    protected:
    private:
        string m_strName;
        int m_iAge;
};

#endif // HUMAN_H
