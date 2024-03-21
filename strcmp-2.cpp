#include <iostream>
#include <cstring>

//Написать реализацию функции strcmp
int my_strcmp(const char* str1, const char* str2) 
{
    for (; *str1 == *str2; ++str1, ++str2)
    {
        if(*str1=='\0')
        {
            return 0;
        }
    }
    return *str1 - *str2;
}

int main(int, char**)
{
    {
        const char* str1 = "Hello!";
        const char* str2 = "hello!";
        int result = my_strcmp(str1, str2);
        // String "Hello!" and string "hello!" are
        printf("String \"%s\" and string \"%s\" ", str1, str2);
        if(result == 0)
        {
            printf("equal\n");
        }
        else if (result > 0)
        {
            printf("not equal: first is greater then second\n");
        }
        else if(result<0)
        {
            printf("not equal: first is less then second\n");
        }
    }
    {
        const char* str1 = "Hello!";
        const char* str2 = "Hello!";
        int result = my_strcmp(str1, str2);
        // String "Hello!" and string "hello!" are
        printf("String \"%s\" and string \"%s\" ", str1, str2);
        if(result == 0)
        {
            printf("equal\n");
        }
        else if (result > 0)
        {
            printf("not equal: first is greater then second\n");
        }
        else if(result<0)
        {
            printf("not equal: first is less then second\n");
        }
    }
    {
        const char* str1 = "Hello!";
        const char* str2 = "Hell";
        int result = my_strcmp(str1, str2);
        // String "Hello!" and string "hello!" are
        printf("String \"%s\" and string \"%s\" ", str1, str2);
        if(result == 0)
        {
            printf("equal\n");
        }
        else if (result > 0)
        {
            printf("not equal: first is greater then second\n");
        }
        else if(result<0)
        {
            printf("not equal: first is less then second\n");
        }
    }

}
