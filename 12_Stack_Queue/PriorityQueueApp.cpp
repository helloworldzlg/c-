#include <queue>
#include <iostream>

using namespace std;

int main()
{
    priority_queue <int>pqIntegers;

    cout << "push Integer into pqIntegers" << endl;
    pqIntegers.push(10);
    pqIntegers.push(5);
    pqIntegers.push(-1);
    pqIntegers.push(20);

    cout << "size = " << pqIntegers.size() << endl;

    while (!pqIntegers.empty())
    {
        cout << "pop element out pqIntegers: " << pqIntegers.top() << endl;
        pqIntegers.pop();
    }

    return 0;
}