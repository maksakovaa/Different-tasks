#include <iostream>
int count(const char* string, char symbol)
{
    if (!string)
    {
        return 0;
    }
    
    int result = 0;
    while (*string)
    {
        if (*string == symbol)
        {
            ++result;
        }
        ++string;
    }
    return result;
}

int main()
{
    std::cout << count("aabsc", 'a') << '\n';
    std::cout << count("aabsc", 'x') << '\n';
    std::cout << count("ssssss", 's') << '\n';
}