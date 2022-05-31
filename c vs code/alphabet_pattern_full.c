#include <stdio.h>
#include<string.h>
#define MAX_SIZE 100

int main()
{
    int n;                              //A
    scanf("%d",&n);                     //BB
    for(int i=1;i<=n;i++)               //CCC
    {                                   //DDDD
        for(int j=1;j<=i;j++)           //EEEEE
        {
            printf("%c",j+64);          //i+64
        }
        printf("\n");
    }
    for(int k=n-1;k>=1;k--)             //DDDD
    {                                   //CCC
        for(int l=1;l<=k;l++)           //BB
        {                               //A
            printf("%c",l+64);          // k+64
        }
        printf("\n");
    }

    return 0;
}