#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
  char a[100];
  int n,i=0,c=0,k=0,j;
  scanf("%d",&n);
  scanf("%s",a);
  for(j=0;j<strlen(a);j++)
  {
    if(k>=strlen(a)-1)
    {
      i=c;
      c++;
      k++;
    }
    else
    {
      i=strlen(a)-n+j;
      k=i;
    }
    printf("%c",a[i]);
  }
}