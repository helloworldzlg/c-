#include <stack>
#include <iostream>

using namespace std;

int main()
{
    stack<int> stackInts;
    cout << "push elements into stackInts" << endl;

    stackInts.push(25);
    stackInts.push(10);
    stackInts.push(-1);
    stackInts.push(5);

    cout << "stack contains " << stackInts.size() << " elements" << endl;
    while (stackInts.size() != 0)
    {
        cout << "pop elements from stackInts: " << stackInts.top() << endl;
        stackInts.pop();
    }

    if (stackInts.empty())
    {
        cout << "stackInts is empty" << endl;
    }
    return 0;
}