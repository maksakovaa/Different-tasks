#include <iostream>

void swap(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int a = 3;
    int b = -2;
    std::cerr << "before a: " << a << ", b: " << b << '\n';
    swap(a, b);
    std::cerr << "after a: " << a << ", b: " << b << '\n';
}