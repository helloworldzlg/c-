#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    string strA = "test reverse string!!";
    cout << "strA = " << strA << endl;

    reverse(strA.begin(), strA.end());
    cout << "strA = " << strA << endl;

    return 0;
}