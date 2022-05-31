#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],d[100];
    gets(s);
    for(int i=0;;i++)
    {
        if(s[i]=='\0'){
            break;
        }
        d[i]=s[i];
    }
    printf("%s\n",d);
    printf("%s",s);
   return 0;    
}