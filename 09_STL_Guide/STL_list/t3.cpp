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
    list<int> listIntegers1;

    listIntegers1.insert(listIntegers1.begin(), 2);
    listIntegers1.insert(listIntegers1.begin(), 1);

    listIntegers1.insert(listIntegers1.end(), 3);

    cout << "display listIntegers1" << endl;
    DisplayContents(listIntegers1);

    list<int> listIntegers2;

    listIntegers2.insert(listIntegers2.begin(), 4, 99);

    cout << "display listIntegers2" << endl;
    DisplayContents(listIntegers2);

    list<int> listIntegers3;

    listIntegers3.insert(listIntegers3.begin(),
        listIntegers1.begin(), listIntegers1.end());
    listIntegers3.insert(listIntegers3.end(),
        listIntegers2.begin(), listIntegers2.end());

    cout << "display listIntegers3" << endl;
    DisplayContents(listIntegers3);

    return 0;
}