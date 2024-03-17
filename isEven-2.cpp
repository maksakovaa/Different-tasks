#include <iostream>

//Функция проверяющая является ли число чётным или нет

bool isEven(int number)
{
    /*
    11 = 8 + 2 + 1;
    2^3 = 8
    2^1 = 2
    2^0 = 1

     1011
    &0001
     0001

    14 = 8 + 4 + 2;
    8 = 2^3
    4 = 2^2
    2 = 2^1
    1110
    &0001
    0000  
    */
   return !(number & 1);
}

int main()
{
    int number1 = 11;
    std::cout << std::boolalpha;
    std::cout << "number " << number1 << " is even: " << isEven(number1) << '\n';
    int number2 = 14;
    std::cout << "number " << number2 << " is even: " << isEven(number2) << '\n';
}