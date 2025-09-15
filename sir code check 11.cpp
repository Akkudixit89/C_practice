struct node{
    int data;
    struct node *next;
};
#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node *newnode, *start, *temp,*temp1,*temp2;
    start=0;
    int choice=1;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data for node");
        scanf("%d",&newnode->data);
        if(start==0)
        {
            start=newnode=temp;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do you want to enter more node(),1)?");
        scanf("%d",&choice);
    }
    temp1=start;
    while(temp1!=0)
    {
        printf("%d\n",temp1->data);
        temp1=temp1->next;
    }
    printf("insert node at 1st place ");
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nenter the data for new node");
    scanf("%d",&newnode->data);
    temp2=start;
    start=newnode;
    newnode->next=temp2;
    temp1=start;
    while(temp1!=0)
    {
        printf("%d\n",temp1->data);
        temp1=temp1->next;
    }
}
