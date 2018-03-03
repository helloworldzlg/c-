#include <string>
#include <iostream>

using namespace std;

int main()
{
    string strA("hello");
    cout << "strA = " << strA << endl;

    string strB("world");
    cout << "strB = " << strB << endl;

    strA += strB;
    cout << "strA = " << strA << endl;

    string strC;
    strC.append(strA);
    strC.append(strB);
    cout << "strC = " << strC << endl;

    return 0;
}