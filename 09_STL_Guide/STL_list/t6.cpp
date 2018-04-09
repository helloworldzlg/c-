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

bool SortPredicate_Descending(const int& lsh, const int& rsh)
{
    return (lsh > rsh);
}

int main()
{
    list<int> listIntegers;

    listIntegers.push_front(444);
    listIntegers.push_front(2018);
    listIntegers.push_front(-1);
    listIntegers.push_front(0);
    listIntegers.push_back(-5);

    cout << "1 display listIntegers" << endl;
    DisplayContents(listIntegers);

    listIntegers.sort();

    cout << "2 display listIntegers" << endl;
    DisplayContents(listIntegers);

    listIntegers.sort(SortPredicate_Descending);

    cout << "3 display listIntegers" << endl;
    DisplayContents(listIntegers);

    return 0;
}