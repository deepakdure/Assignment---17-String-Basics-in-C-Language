// 2. Write a program to count the occurrence of a given character in a given string.
#include <stdio.h>
int main()
{
    int i, j, c = 0;
    char str[50], n;
    printf("enter a string = ");
    gets(str);
    printf("enter a character to find his occurrence = ");
    scanf("%c", &n);
    for (i = 0; i < str[i]; i++)
    {
        if (str[i] == n)
        {
            c++;
        }
    }
    printf("Total Occurrence of <%c> in This string = %d", n, c);
    return 0;
}
