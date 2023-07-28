#include <iostream>

int main()
{
    int a = 2, b = 3, c = 6;
    a = 1;
    b = a * 2;
    c = a + b;
    b = (a + b) * c;
    a = b + a + c;

    return 0;
}