#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next,*prev;
}N;
N *start=NULL,*newnode,*tptr,*end=NULL;
void insertnode(int gd)
{
    newnode=(N*)malloc(sizeof(N));
    newnode->data=gd;
    newnode->next=NULL;
    if(start==NULL)
    {
        start=end=newnode;
    }
    else
    {
        for(tptr=start;tptr!=NULL&&tptr->data<gd;tptr=tptr->next);
        if(tptr==start)
        {
            newnode->next=tptr;
            tptr->prev=newnode;
            start=newnode;
        }
        else if (tptr==NULL)
        {
            end->next=newnode;
            newnode->prev=end;
            end=newnode;
        }
        else
        {
            newnode->next=tptr;
            newnode->prev=tptr->prev;
            tptr->prev->next=newnode;
            tptr->prev=newnode;
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