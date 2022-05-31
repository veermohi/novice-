#include<stdio.h>
void main()
{
    int i, j;
    char str[100];
    gets(str);
    for (i = 0; str[i] != 0; i++)
    {
        while (str[i] ==' ')
        {
        for (j = i; str[j] != 0; j++)
        {
            str[j] = str[j + 1];
        }
        }
    }
printf("%s", str);
}