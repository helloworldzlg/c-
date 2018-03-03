#include <vector>
#include <iostream>

using namespace std;

int main()
{
    std::vector<int> vecIntegers;

    std::vector<int> vecWithTenElements(10);

    // 10 elements all initialized of 90
    std::vector<int> vecWithTenInitializeElements(10, 90);

    return 0;
}