#include<stdio.h>
#define MAX_SIZE 100

int main()
{
    char a[MAX_SIZE];
    int words=1;
    gets(a);
    for(int i=0;a[i]!='\0';i++)
    {
        if((a[i]==' ')||(a[i]=='\n')||(a[i]=='\t'))
        {
            words++;
        }
    }

   printf("%d",words);
    return 0;
}