#include <string>
#include <iostream>

using namespace std;

int main()
{
    string strA = "helloworld";
    cout << "strA = " << strA << endl;

    for (size_t index = 0; index < strA.length(); index++)
    {
        cout << "strA[" << index << "] = " << strA[index] << endl;
    }

    return 0;
}
