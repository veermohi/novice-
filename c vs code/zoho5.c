#include<stdio.h>
#include<string.h>
#include<math.h>

void main()
{
    char str[]={1,15,35,4,20,18,'\0'};
    int i,j,k;
    char t;
    int l=strlen(str);
    for(i=0;i<l;i++)
    {
        for(j=0;j<l-1;j++)
        {
            if((str[j])>(str[j+1]))
            {
                t=str[j];
                str[j]=str[j+1];
                str[j+1]=t;
            }
            // else
            // {
            //     for(k=0;k<l;k++)
            //     {
            //         if(str[i][k]>str[j][k])
            //         {
            //             t=str[j];
            //             str[j]=str[j+1];
            //             str[j+1]=t;
            //         }
            //     }
            // }
        }
    }
    printf("[");
    for(i=0;i<l;i++)
    {
        if(str[i]==str[l-1])
        {
            printf("%d",str[i]);
        }
        else
        {
            printf("%d",str[i]);
            printf(",");
        }
    }
    printf("]");
}