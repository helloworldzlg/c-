#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string strA = "HelloWorld";
    cout << "strA = " << strA << endl;

    reverse(strA.begin(), strA.end());
    cout << "strA = " << strA << endl;

    return 0;
}