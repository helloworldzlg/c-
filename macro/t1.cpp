#include <string>
#include <iostream>

using namespace std;

#define DEFINE_MACRO           (42)
const string CONST_MACRO       ("world");

int main()
{
    string sTest("hello");
    cout << "sTest = " << sTest << endl;

    //string mTest(DEFINE_MACRO);
    //cout << "mTest = " << mTest << endl;

    cout << "DEFINE_MACRO = " << DEFINE_MACRO << endl;

    string mTest(CONST_MACRO);
    cout << "mTest = " << mTest << endl;
    return 0;
}