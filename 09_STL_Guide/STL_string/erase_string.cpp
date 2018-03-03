#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    string strA = "Hello World, This is C++ tutorials.";
    cout << "strA = " << strA << endl;

    //from index 0 delete 13 characters
    strA.erase(0, 13);
    cout << "strA = " << strA << endl;

    // //delete iterator mapping character
    // string::const_iterator iteratorA = strA.begin();
    // iteratorA += 6;
    // strA.erase(iteratorA);
    // cout << "strA = " << strA << endl;

    // string strB = "Hello World, This is C++ tutorials.";
    // string::const_iterator iteratorFirst  = strB.begin();
    // string::const_iterator iteratorSecond = strB.begin() + 6;
    // strB.erase(iteratorFirst, iteratorSecond);
    // cout << "strB = " << strB << endl;

    return 0;
}
