#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    gets(s);

    for(int i=0;s[i]!='\0';i++)                 //for upper case
    {
        if(s[i]>='a' && s[i<='z'])              //if(s[i]>='A'  && s[i<='Z'])
        {
            s[i]=s[i]-32;                                   //s[i]=s[i]+32
        }
    }
    printf("%s",s);
    return 0;
}

//inbuilt function strupr(s);                                strlwr(s);