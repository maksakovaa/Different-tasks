#include <iostream>
#include <string>
using namespace std::string_literals;

void remove_not_alpha(std::string& line)
{
    for (auto& l: line)
    {
        if (!(l >= 'a' && l <= 'z') &&
        !(l >= 'A' && l <= 'Z'))
        {
            l = '\0';
        }
        
    }
    
}

int main()
{
    std::string line = "Hello, world2024!"s;
    std::cout << "Initial string: " << line << '\n';
    remove_not_alpha(line);
    std::cout << "Edited string: " << line << '\n';
}
