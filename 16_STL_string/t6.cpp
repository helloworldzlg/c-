#include <string>
#include <algorithm>
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string strA = "test transform string!!";
    cout << "strA = " << strA << endl;

    transform(strA.begin(), strA.end(), strA.begin(),
        [](unsigned char c){ return std::toupper(c); });
    cout << "strA = " << strA << endl;

    transform(strA.begin(), strA.end(), strA.begin(),
        [](unsigned char c){ return std::tolower(c); });
    cout << "strA = " << strA << endl;

    return 0;
}