#include <stdio.h>
#include<string.h>
#define MAX_SIZE 100

int main()
{
    int n;                              //A
    scanf("%d",&n);                     //BB
    for(int i=0;i<n;i++)                //CCC
    {                                   //DDDD
        for(int j=0;j<=i;j++)           //EEEEE
        {
            printf("%c",j+65);              //i+65
            
        }
        printf("\n");
    }

    return 0;
}