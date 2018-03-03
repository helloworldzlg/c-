#include <string>
#include <iostream>

using namespace std;

int main()
{
    string strA = "helloworld";
    cout << "strA = " << strA << endl;

    size_t index = 0;
    string::const_iterator iteratorA = strA.begin();
    for (iteratorA = strA.begin(); iteratorA < strA.end(); iteratorA++)
    {
        cout << "strA[" << index << "] = " << *iteratorA << endl;
        index++;
    }
    return 0;
}
