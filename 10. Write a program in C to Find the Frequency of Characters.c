// 10. Write a program in C to Find the Frequency of Characters
#include <stdio.h>
int main()
{
    char str[50], s[50];
    int i, j, k, l, count;
    printf("enter a string :-");
    gets(str);
    for (l = 0; l < str[l]; l++)
        ;
    for (i = 0; i < l; i++)
    {
        count = 1;
        if (s[i] != -1)
        {
            for (j = 1 + i; j < l; j++)
            {
                if (str[i] == str[j])
                {
                    count++;
                    s[j] = -1;
                }
            }
            s[i] = count;
        }
    }
    for (i = 0; i < l; i++)
    {
        if (s[i] != -1)
        {
            printf("Character %c = %d\n", str[i], s[i]);
        }
    }
    return 0;
}