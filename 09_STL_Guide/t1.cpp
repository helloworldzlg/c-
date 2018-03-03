#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    std::vector<int> vecIntegerArray;
    vecIntegerArray.push_back(50);
    vecIntegerArray.push_back(2991);
    vecIntegerArray.push_back(23);
    vecIntegerArray.push_back(9999);

    cout << "the content of the vector are: " << endl;

    std::vector<int>::iterator iArrayWalker = vecIntegerArray.begin();

    while (iArrayWalker != vecIntegerArray.end())
    {
        cout << *iArrayWalker << endl;
        ++iArrayWalker;
    }

    std::vector<int>::iterator iElement = find(vecIntegerArray.begin(),
        vecIntegerArray.end(), 2991);

    if (iElement != vecIntegerArray.end())
    {
        int Position = distance(vecIntegerArray.begin(), iElement);
        cout << "Value " << *iElement;
        cout << " found in the vector at position: " << Position << endl;
    }
    return 0;
}