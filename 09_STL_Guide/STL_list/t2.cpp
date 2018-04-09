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

    listIntegers.push_front(20);
    listIntegers.push_front(10);
    listIntegers.push_back(30);
    listIntegers.push_back(40);

    DisplayContents(listIntegers);

    return 0;
}