#include <iostream>
#include <cstring>
#include <tuple>

//Напишите простейшую реализацию функции strlen

size_t my_strlen(const char* string)
{
    size_t len = 0;

    for (auto [begin, end] = std::tuple(string, string);;++end)
    {
        if (!end)
        {
            return end - begin;
        }
    }
    return len;
}

int main()
{
    auto string = "Some string"; // \0 null terminated string
    std::cerr << "len: " << strlen(string) << '\n';
    std::cerr << "my len: " << my_strlen(string) << '\n';
}
