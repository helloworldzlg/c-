#include <iostream>
#include <sstream>
#include <string>
#include <memory>

using namespace std;

template <typename T>
class smart_point
{
private:
    T *m_pRawPoint;
    
public:
    smart_point(T *pData) : m_pRawPoint(pData) {}
    ~smart_point() {delete m_pRawPoint;}

    T &operator *() const
    {
        return *(m_pRawPoint);
    }

    T *operator ->() const
    {
        return m_pRawPoint;
    }
};

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
    // unique_ptr<int> ptemp(new int);

    // *ptemp = 25;

    // cout << "*ptemp = " << *ptemp << endl;

    // unique_ptr<Date> pDate(new Date(25, 8, 2017));

    // pDate->display_date();

    smart_point<int> ptemp(new int);

    *ptemp = 25;

    smart_point<Date> pDate(new Date(9, 9, 1990));

    pDate->display_date();

    return 0;
}