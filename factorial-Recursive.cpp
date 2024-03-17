#include <iostream>

size_t factorial(int number)
{
    if (number <= 1)
    {
        return 1;
    }
    return number*factorial(number-1);   
}

//Функция вычисляющая факториал числа
int main()
{
    int number1 = 3; // 3! = 3*2*1 = 6
    int number2 = 5; // 5! = 5*4*3*2*1 = 120
    std::cout << factorial(number1) << '\n';
    std::cout << factorial(number2) << '\n';
}
