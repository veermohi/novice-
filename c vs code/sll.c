#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}N;
N *start=NULL,*newnode,*tptr,*shadow;
void insertnode(int gd)
{
    newnode=(N*)malloc(sizeof(N));
    newnode->data=gd;
    newnode->next=NULL;
    if(start==NULL)
    {
        start=newnode;
    }
    else
    {
        for(tptr=start;tptr!=NULL&&tptr->data<gd;shadow=tptr,tptr=tptr->next);
        if(tptr==start)
        {
            newnode->next=tptr;
            start=newnode;
        }
        else if (tptr==NULL)
        {
            shadow->next=newnode;
        }
        else
        {
            newnode->next=tptr;
            shadow->next=newnode;
        }
    }
}
void disp()
{
    for(tptr=start;tptr!=NULL;tptr=tptr->next){
        printf("%d ",tptr->data);
    }
}
int main()
{
    int num;
    while(1)
    {
        scanf("%d",&num);
        if(num==-1)
        {
            break;
        }
        insertnode(num);
    }
    disp();
    return 0;
}