#include <queue>
#include <iostream>

using namespace std;

int main()
{
    queue<int> qIntegers;
    cout << "insert integer into qIntegers" << endl;

    qIntegers.push(10);
    qIntegers.push(5);
    qIntegers.push(-1);
    qIntegers.push(20);

    cout << qIntegers.size() << endl;
    cout << qIntegers.front() << endl;
    cout << qIntegers.back() << endl;

    while (qIntegers.size() != 0)
    {
        cout << "delete element: " << qIntegers.front() << endl;
        qIntegers.pop();
    }

    if (qIntegers.empty())
        cout << "qIntegers is empty" << endl;
    return 0;
}
