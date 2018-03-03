#include <iostream>
#include <string.h>

using namespace std;

class my_string
{
private:
    char *buffer;

public:
    my_string(char *init_string)
    {
        if (init_string != NULL)
        {
            buffer = new char[strlen(init_string)+1];
            strcpy(buffer, init_string);
        }
        else
        {
            buffer = NULL;
        }
    }

    ~my_string()
    {
        if (buffer != NULL)
        {
            delete[] buffer;
            buffer = NULL;
        }
    }

    my_string(const my_string &copy_string)
    {
        cout << "call copy constructor" << endl;
        if (copy_string.buffer != NULL)
        {
            buffer = new char[strlen(copy_string.buffer)+1];
            strcpy(buffer, copy_string.buffer);
        }
        else
        {
            buffer = NULL;
        }
    }

    int get_length()
    {
        return strlen(buffer);
    }

    const char *get_string()
    {
        return buffer;
    }
};

int main()
{
    my_string say_hello("helloworld");

    cout << "length = " << say_hello.get_length() << endl;

    cout << "string = " << say_hello.get_string() << endl;

    my_string haha_hello(say_hello);
    return 0;
}
