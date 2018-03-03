#include <deque>
#include <iostream>

using namespace std;

int main()
{
    std::deque<int> vecIntegers;

    vecIntegers.push_back(10);
    vecIntegers.push_back(20);
    vecIntegers.push_back(30);
    vecIntegers.push_back(40);

    cout << "size of deque : " << vecIntegers.size() << endl;
    for (int index = 0; index < vecIntegers.size(); index++)
    {
        cout << "vecIntegers[" << index << "] = " << vecIntegers[index] << endl;
    }

    vecIntegers.pop_back();
    vecIntegers.pop_back();

    cout << "size of deque : " << vecIntegers.size() << endl;
    for (int index = 0; index < vecIntegers.size(); index++)
    {
        cout << "vecIntegers[" << index << "] = " << vecIntegers[index] << endl;
    }

    return 0;
}