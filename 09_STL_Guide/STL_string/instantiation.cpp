#include <string>
#include <iostream>

using namespace std;

int main()
{
    string strA = "helloworld";
    cout << "strA = " << strA << endl;

    string strB("helloworld");
    cout << "strB = " << strB << endl;

    string strC(strB);
    cout << "strC = " << strC << endl;
 
    string strD = strC;
    cout << "strD = " << strD << endl;
    return 0;
}
