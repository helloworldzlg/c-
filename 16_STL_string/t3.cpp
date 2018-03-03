#include <string>
#include <iostream>

using namespace std;

/*
 * 在string中查找字符和子字符串
 */
int main()
{
    string strA("hi, zhanglg, may zhanglg is your full name?");

    size_t posA = strA.find("zhanglg", 0);
    if (posA != string::npos)
    {
        cout << "posA = " << posA << endl;
    }

    int count = 0;
    size_t posB = strA.find("zhanglg", 0);

    while (posB != string::npos)
    {
        cout << count << " posB = " << posB << endl;
        count++;

        posB = strA.find("zhanglg", posB+1);
    }

    return 0;
}
