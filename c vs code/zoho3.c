#include<stdio.h>
int main(){
    char a[100];
    gets(a);
    int n=0,num = a[0]-'0';
    for(int i=0;a[i]!='\0';i++){
        n++;
    }
    for(int i=1,j=n/2+1;i<=n/2,j<n;i++,j++){
        if(a[j]=='*'){
            num=num*(a[i]-'0');
        } else if(a[j]=='+'){
            num = num+(a[i]-'0');
        } else if(a[j]=='-'){
            num = num-(a[i]-'0');
        } else if(a[j]=='/'){
            num = num/(a[i]-'0');
        }
    }
    printf("%d",num);
    return 0;
}