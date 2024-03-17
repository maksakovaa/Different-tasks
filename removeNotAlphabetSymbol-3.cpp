#include <iostream>
#include <string>
using namespace std::string_literals;

void remove_not_alpha(std::string& line)
{
    for (auto& l: line)
    {
        if ((l >= 'a' && l <= 'z') ||
        (l >= 'A' && l <= 'Z'))
        {
            
        }
    }
}

void remove_not_alpha(std::string& line, size_t& size)
{
    size = 0;
    for (auto& l: line)
    {
        if ((l >= 'a' && l <= 'z') ||
        (l >= 'A' && l <= 'Z'))
        {
            line[size] = l;
            ++size;
        }
    }
}

int main()
{
    std::string line = "Hello, world2024!"s;
    std::cout << "Initial string: " << line << '\n';
    size_t size = 0;
    remove_not_alpha(line, size);
    std::cout << "Edited string: " << line << '\n';
    std::cout << "string size: " << size << '\n';
}
