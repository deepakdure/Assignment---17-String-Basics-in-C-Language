// 1. Write a program to calculate the length of the string. (without using built-in method)
#include <stdio.h>
int main()
{
    int i;
    char str[30];
    printf("enter a string = ");
    scanf("%s", &str);
    for (i = 0; str[i]; i++)
        ;
    printf("Length of String = %d", i);
    return 0;
}