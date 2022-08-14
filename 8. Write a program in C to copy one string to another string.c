// 8. Write a program in C to copy one string to another string.
#include <stdio.h>
int main()
{
    int i;
    char str[50], d[50];
    printf("enter a string = ");
    gets(str);
    for (i = 0; i < str[i]; i++)
    {
        d[i] = str[i];
    }
    printf("New Copy String is = ");
    printf("%s", d);
    return 0;
}