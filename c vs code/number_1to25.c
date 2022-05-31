#include <stdio.h>
#include<string.h>
#define MAX_SIZE 100

int main()
{
    int n;                              //A
    scanf("%d",&n); 
    int f=1;                            //BB
    for(int i=1;i<=n;i++)               //CCC
    {                                   //DDDD
        for(int j=1;j<=i;j++)           //EEEEE
        {
            printf("%d ",f++);          //i+64
        }
        printf("\n");
    }
    for(int k=n-1;k>=1;k--)             //DDDD
    {                                   //CCC
        for(int l=1;l<=k;l++)           //BB
        {                               //A
            printf("%d ",f++);          // k+64
        }
        printf("\n");
    }

    return 0;
}