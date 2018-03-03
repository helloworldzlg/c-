#include <string>
#include <iostream>

using namespace std;

int main()
{
    string strA = "Hello";
    cout << "strA = " << strA << endl;

    string strB = "World";
    cout << "strB = " << strB << endl;

    string strC = strA + strB;
    cout << "strC = " << strC << endl;

    string strD;
    strD.append(strA);
    strD.append(strB);
    cout << "strD = " << strD << endl;

    return 0;
}
