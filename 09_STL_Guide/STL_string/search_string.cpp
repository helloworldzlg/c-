#include <string>
#include <iostream>

using namespace std;

int main()
{
    string strA = "hello, zhanglg, is zhanglg is your full name?";
    cout << "strA = " << strA << endl;

    size_t index = strA.find("zhanglg");
    if (index != string::npos)
        cout << "zhanglg find index: " << index << endl;
    else
        cout << "there's not find zhanglg!!!" << endl;

    return 0;
}
