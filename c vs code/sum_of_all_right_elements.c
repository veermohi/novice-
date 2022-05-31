#include<stdio.h>

int main()
{
  int n,arr[100],i,s=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
    s=s+arr[i];
  }
  for(i=0;i<n;i++)
  {
    arr[i]=s-arr[i];
    s=arr[i];
  }
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  
}