#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrom(const std::string& initial)
{
    std::string reverse = initial;
    std::reverse(reverse.begin(), reverse.end());  
    return (initial == reverse);
    /*size_t size = initial.size();
    for (size_t i = 0; i < size / 2; i++)
    {
        if (initial[i] != initial[size - 1 - i])
        {
            return false;
        }
        
    }
    return true;*/
}

int main()
{
    std::cout << isPalindrom("ABCDCBA"s)<< '\n';
    std::cout << isPalindrom("ABCCBA"s)<< '\n';
    std::cout << isPalindrom("ABCDBA"s)<< '\n';
    std::cout << isPalindrom("Madam"s)<< '\n';
    std::cout << isPalindrom("madam"s)<< '\n';
}
