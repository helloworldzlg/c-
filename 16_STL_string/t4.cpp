#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    string strA = "hello String";
    cout << "strA = " << strA << endl;

    strA.erase(3, 6);
    cout << "strA = " << strA << endl;

    string strB = "hello String";
    cout << "strB = " << strB << endl;

    string::iterator iCharS = find(strB.begin(), strB.end(), 'S');

    strB.erase(iCharS);
    cout << "strB = " << strB << endl;
    return 0;
}