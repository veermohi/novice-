#include<stdio.h>

int main()
{
    int number,i,j,count_even=2,count_odd=1;
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                printf("%d ",count_even);
                count_even+=2;
            }
            else
            {
                printf("%d ",count_odd);
                count_odd+=2;
            }
        }
        printf("\n");
    }

}