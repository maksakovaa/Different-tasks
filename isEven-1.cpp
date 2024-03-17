#include <iostream>

//Функция проверяющая является ли число чётным или нет

bool isEven(int number)
{
    return (number %2 == 0);
}

int main()
{
    int number1 = 4;
    std::cout << std::boolalpha;
    std::cout << "number " << number1 << " is even: " << isEven(number1) << '\n';
    int number2 = 7;
    std::cout << "number " << number2 << " is even: " << isEven(number2) << '\n';
}