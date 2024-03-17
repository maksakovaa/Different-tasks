#include <iostream>

void swap(int& a, int& b)
{
    a += b;
    b = a - b;
    a -= b;
}

int main()
{
    int a = 3;
    int b = -2;
    std::cerr << "before a: " << a << ", b: " << b << '\n';
    swap(a, b);
    std::cerr << "after a: " << a << ", b: " << b << '\n';
}