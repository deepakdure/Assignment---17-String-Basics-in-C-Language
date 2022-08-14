// 3. Write a program to count vowels in a given string
#include <stdio.h>
int main()
{
    char str[50];
    int i, c = 0;
    printf("enter a string = ");
    gets(str);
    for (i = 0; i < str[i]; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            c++;
        }
    }
    printf("total Vowel in this string = %d", c);
    return 0;
}