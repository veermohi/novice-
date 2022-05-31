#include<stdio.h>
int main()
{
    char s[100];
    gets(s);
    int l=sizeof(s);
    for(int i=0;i<l;i++)
    {
        int c=0;
        if(s[i]==' ')
        {
            for(int j=i;j<l;j++)
            {
                s[j]=s[j+1];
            }
        }      
    }
    printf("%s",s);
    return 0;
}