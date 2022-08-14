// 9. Write a C program to sort a string array in ascending order
#include <stdio.h>
int main()
{
    int i, j, k;
    char str[50], a;
    printf("enter a string= ");
    gets(str);
    for (i = 0; i < str[i]; i++)
        ;
    for (j = 1; j < i; j++)
        for (k = 0; k < i - j; k++)
            if (str[k] > str[k + 1])
            {
                a = str[k];
                str[k] = str[k + 1];
                str[k + 1] = a;
            }
    printf("After Sorting String =  %s", str);
    return 0;
}