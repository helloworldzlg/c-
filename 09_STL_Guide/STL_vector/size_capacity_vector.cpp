#include <vector>
#include <iostream>

using namespace std;

int main()
{
    std::vector<int> vecIntegers(10);
    cout << "size of vector: " << vecIntegers.size() << endl;
    cout << "capacity of vector: " << vecIntegers.capacity() << endl;

    vecIntegers.push_back(10);
    vecIntegers.push_back(20);
    vecIntegers.push_back(30);
    vecIntegers.push_back(40);

    cout << "size of vector: " << vecIntegers.size() << endl;
    cout << "capacity of vector: " << vecIntegers.capacity() << endl;

    return 0;
}