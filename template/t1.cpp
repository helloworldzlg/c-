#include <stdio.h>

template <typename T>
const T& GetMax(const T& a, const T& b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int a = 2, b = 3;
    printf("the max between %d and %d is: %d\n", a, b, GetMax(a, b));

    float c = 8.0f, d = 5.0f;
    printf("the max between %f and %f is: %f\n", c, d, GetMax(c, d));
    return 0;
}