#include <vector>
#include <iostream>

using namespace std;

int main()
{
    std::vector<int> vecIntegers;

    vecIntegers.push_back(10);
    vecIntegers.push_back(20);
    vecIntegers.push_back(30);
    vecIntegers.push_back(40);

    cout << "vector contails: ";
    cout << vecIntegers.size() << " Elements" << endl;

    vecIntegers.pop_back();
    cout << "vector contails: ";
    cout << vecIntegers.size() << " Elements" << endl;

    vecIntegers.pop_back();
    cout << "vector contails: ";
    cout << vecIntegers.size() << " Elements" << endl;
    return 0;
}