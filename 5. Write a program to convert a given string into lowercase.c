// 5. Write a program to convert a given string into lowercase
#include <stdio.h>
int main()
{
    int i;
    char str[50];
    printf("enter a string = ");
    gets(str);
    printf("string in Lowercase = ");
    for (i = 0; i < str[i]; i++)
    {
        if (str[i] > 64 && str[i] < 91)
        {
            str[i] = str[i] + 32;
            printf("%c", str[i]);
        }
        else
            printf("%c", str[i]);
    }
    return 0;
}