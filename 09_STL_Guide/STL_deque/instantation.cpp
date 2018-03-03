#include <deque>
#include <iostream>

using namespace std;

int main()
{
    std::deque<int> vecIntegers;

    std::deque<int> vecWithTenElements(10);

    // 10 elements all initialized of 90
    std::deque<int> vecWithTenInitializeElements(10, 90);

    return 0;
}