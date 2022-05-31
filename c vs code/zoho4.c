#include<stdio.h>
int main()
{
    int d[]={1,9,7,56,36,91,42};
    int l=sizeof(d)/sizeof(d[0]);
    int max=1000;
    for(int i=0;i<l;i++)
    {
        int min=max;
        for(int j=i+1;j<l;j++)
        {
            if(d[j]>=d[i] && min>d[j])
                min=d[j];
        }
        d[i]=min!=max?min:-1;
    }
    for(int k=0;k<l;k++)
    {
        printf("%d ",d[k]);
    }
    return 0;
}