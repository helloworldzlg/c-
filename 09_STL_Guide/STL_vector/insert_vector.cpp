#include <vector>
#include <iostream>

using namespace std;

int main()
{
    //C++ 11 support
    //std::vector<int> vecIntegers(10, 20, 30, 40);
    int index;

    std::vector<int> vecIntegers;

    vecIntegers.insert(vecIntegers.begin(), 10);
    cout << "size of vector: " << vecIntegers.size() << endl;

    vecIntegers.insert(vecIntegers.begin(), 20);
    cout << "size of vector: " << vecIntegers.size() << endl;

    vecIntegers.insert(vecIntegers.end(), 2, 30);
    cout << "size of vector: " << vecIntegers.size() << endl;

    //access vector by index
    for (index = 0; index < vecIntegers.size(); index++)
        cout << "vecIntegers[" << index << "] = " << vecIntegers[index] << endl;

    //access vector by iterator
    index = 0;
    vector<int>::iterator iElementLocator;
    for (iElementLocator = vecIntegers.begin();
         iElementLocator < vecIntegers.end(); iElementLocator++)
    {
        cout << "vecIntegers[" << index << "] = " << *iElementLocator << endl;
        index++;
    }

    return 0;
}