#include <deque>
#include <iostream>

using namespace std;

int main()
{
    std::deque<int> vecIntegers;

    vecIntegers.push_front(10);
    vecIntegers.push_front(20);
    vecIntegers.push_front(30);
    vecIntegers.push_front(40);

    cout << "size of deque : " << vecIntegers.size() << endl;
    for (int index = 0; index < vecIntegers.size(); index++)
    {
        cout << "vecIntegers[" << index << "] = " << vecIntegers[index] << endl;
    }

    vecIntegers.pop_front();
    vecIntegers.pop_front();

    cout << "size of deque : " << vecIntegers.size() << endl;
    for (int index = 0; index < vecIntegers.size(); index++)
    {
        cout << "vecIntegers[" << index << "] = " << vecIntegers[index] << endl;
    }
    return 0;
}