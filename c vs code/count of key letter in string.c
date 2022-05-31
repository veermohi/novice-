#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    printf("enter string");
    gets(s);
    int c=0;
    char d;
    printf("enter which character to check");
    scanf("%c",&d);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==d)
            c=c+1;
    }
    printf("%d",c);
    return 0;
}