#include <string>
#include <iostream>

using namespace std;

int main()
{
    const char* strA = "helloworld";
    std::string strB(strA);
    std::cout << "strB: " << strB << std::endl;

    std::string strC = strA;
    std::cout << "strC: " << strC << std::endl;

    std::string strD(strC);
    std::cout << "strD: " << strD << std::endl;

    std::string strE("Hello World");

    for (size_t index = 0; index < strE.length(); index++)
    {
        cout << "strE[" << index << "]=" << strE[index] << endl;
    }

    int count = 0;
    std::string::const_iterator iCharacterLocator;

    for (iCharacterLocator = strE.begin();
         iCharacterLocator != strE.end(); iCharacterLocator++)
    {
        cout << "strE[" << count << "]=" << *iCharacterLocator << endl;
        count++;
    }

    cout << "c format style of strE: " << strE.c_str() << endl;

    return 0;
}