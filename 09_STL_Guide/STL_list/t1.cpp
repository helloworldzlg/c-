#include <list>
#include <vector>

using namespace std;

int main()
{
    list<int> listIntegers;
    list<int> listWith10Integers(10);
    list<int> listWith10IntegerEach99(10, 99);
    list<int> listCopyAnother(listWith10IntegerEach99);
    vector<int> vecIntegers(10, 2018);

    list<int> listContainsCopyOfAnother(vecIntegers.cbegin(),
        vecIntegers.cend());

    return 0;
}