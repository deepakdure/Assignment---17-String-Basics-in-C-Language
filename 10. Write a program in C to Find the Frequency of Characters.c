// 10. Write a program in C to Find the Frequency of Characters
#include <stdio.h>
int main()
{
    char s[100];
    printf("enter a string = ");
    gets(s);
    int str[256] = {0};
    int i = 0;
    while (s[i] != '\0')
    {
        str[s[i++]]++;
    }
    printf("repeated characters are = ");
    for (i = 0; i < 256; i++)
        if (str[i] != 0)
        {
            printf("%2c ==> %d\n", i, str[i]);
        }
    return 0;
}
