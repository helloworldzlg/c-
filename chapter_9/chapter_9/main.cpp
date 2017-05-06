#include "Human.h"

int main(int argc, char** argv)
{
    Human p1;
    Human p2;

    p1.setAge(10);
    p1.setName("lilei");

    p2.setAge(20);
    p2.setName("jim");

    p1.introduceSelf();
    p2.introduceSelf();
    return 0;
}
