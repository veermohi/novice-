#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i==n/2)&&(j==n/2))                  //use || for 0 '+' plus pattern
            {
                printf("0");
            }
            else 
                printf("1");
        }
        printf("\n");
    }

    return 0;
}