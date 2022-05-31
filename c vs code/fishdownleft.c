#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        for(int j=1;j<=i-1;j++)
        {
            printf("%d",i);
        }
        for(int k=i;k<=n;k++)
        {
            printf("%d",k);
        }

        printf("\n");
    }
    return 0;
}