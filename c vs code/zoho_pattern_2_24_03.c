#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int k=i,o=1;
        for(int j=n;j>=i;j--)
        {
            printf("%d ",k++); 
        }
        for(int j=n;j>=2;j--)
        {
            
            if(i<j)
            {
                continue;
            }
            else
            {
                printf("%d ",o++);
            }
        }
        printf("\n");
        o++;
    }
    return 0;
}
