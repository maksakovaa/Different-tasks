#include <iostream>
#include <cstring>

//Напишите простейшую реализацию функции strlen

size_t my_strlen(const char* string)
{
    size_t len = 0;

    while (string[len]) // string[len] !=0
        ++len;
    
    return len;
}

int main()
{
    auto string = "Some string"; // \0 null terminated string
    std::cerr << "len: " << strlen(string) << '\n';
    std::cerr << "my len: " << my_strlen(string) << '\n';
}
