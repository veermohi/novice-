#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        int o=1;
        for(j=i; j<=N; j++)
        {
            printf("%d", j);
        }
        for(int k=N;k>=2;k--)
        {
            if(i<k)
                continue;
            else
                printf("%d",o++);
        }

        printf("\n");
    }

    return 0;
}