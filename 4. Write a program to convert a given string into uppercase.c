// 4. Write a program to convert a given string into uppercase
#include <stdio.h>
int main()
{
    char str[50];
    int i;
    printf("enter a string = ");
    gets(str);
    printf("String in Uppercase = ");
    for (i = 0; i < str[i]; i++)
    {
        if (str[i] > 96 && str[i] < 123)
        {
            str[i] = str[i] - 32;
            printf("%c", str[i]);
        }
        else
            printf("%c", str[i]);
    }
    return 0;
}