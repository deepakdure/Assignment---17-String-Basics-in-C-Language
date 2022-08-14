// 7. Write a program in C to count the total number of alphabets, digits and special characters in a string
#include <stdio.h>
int main()
{
    int i, c = 0, d = 0, e = 0;
    char str[50];
    printf("enter a string = ");
    gets(str);
    for (i = 0; i < str[i]; i++)
    {
        if (str[i] > 64 && str[i] < 91 || str[i] > 96 && str[i] < 123)
        {
            c++;
        }
        else if (str[i] > 47 && str[i] < 58)
        {
            d++;
        }
        else
            e++;
    }
    printf("Total Number of Alphabets = %d\n", c);
    printf("Total Number of Digitd = %d\n", d);
    printf("Total Number of Special Characters = %d", e);
    return 0;
}