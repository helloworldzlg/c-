#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Date
{
private:
    int m_day;
    int m_month;
    int m_year;
    string dateinstring;

public:
    Date(int day, int month, int year):m_day(day), m_month(month), m_year(year){};

    Date &operator ++()
    {
        ++m_day;
        return (*this);
    }

    Date operator ++(int)
    {
        Date copy(m_day, m_month, m_year);

        ++m_day;
        return copy;
    }

    Date &operator --()
    {
        --m_day;
        return (*this);
    }

    Date operator -- (int)
    {
        Date copy(m_day, m_month, m_year);

        --m_day;
        return copy;
    }

    operator const char*()
    {
        ostringstream formatteddata;

        formatteddata << m_day << "/" << m_month << "/" << m_year << endl;

        dateinstring = formatteddata.str();

        return dateinstring.c_str();
    }

    void display_date()
    {
        cout << "date: " << m_year << " - " << m_month << " - " << m_day << endl;
    }
};

int main()
{
    Date today(25, 8, 2017);

    today.display_date();

    ++today;
    today.display_date();

    --today;
    today.display_date();

    today++;
    today.display_date();

    today--;
    today.display_date();

    cout << today << endl;
    return 0;
}