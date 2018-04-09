#include <list>
#include <iostream>

using namespace std;

template <typename T>
void DisplayContents(const T& input)
{
    for (auto iElement = input.cbegin();
        iElement != input.cend();
        ++iElement)
        cout << *iElement << " " ;
    cout << endl;
}


int main()
{
    list<int> listIntegers;

    listIntegers.push_back(4);
    listIntegers.push_front(3);
    listIntegers.push_back(5);

    auto iValue2 = listIntegers.insert(listIntegers.begin(), 2);
    listIntegers.insert(listIntegers.begin(), 1);

    cout << "1 display listIntegers" << endl;
    DisplayContents(listIntegers);

    listIntegers.erase(listIntegers.begin(), iValue2);

    cout << "2 display listIntegers" << endl;
    DisplayContents(listIntegers);

    listIntegers.erase(listIntegers.begin(), iValue2);

    cout << "3 display listIntegers" << endl;
    DisplayContents(listIntegers);

    listIntegers.erase(listIntegers.begin(), listIntegers.end());

    cout << "4 display listIntegers" << endl;
    DisplayContents(listIntegers);

    return 0;
}