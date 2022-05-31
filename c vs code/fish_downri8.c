#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>=n-i;j--)
        {
            printf("%d",j);
        }
        for(int k=1;k<n-i;k++)
        {
            printf("%d",n-i);
        }

        printf("\n");
    }
    return 0;
    }