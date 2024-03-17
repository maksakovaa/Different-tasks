#include <iostream>

size_t factorial(int number)
{
    size_t result = 1;
    for (size_t i = 1; i <= number; ++i)
    {
        result *=i;
    }
    return result;  
}

//Функция вычисляющая факториал числа
int main()
{
    int number1 = 3; // 3! = 3*2*1 = 6
    int number2 = 5; // 5! = 5*4*3*2*1 = 120
    std::cout << factorial(number1) << '\n';
    std::cout << factorial(number2) << '\n';
}
